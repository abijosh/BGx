/*******************************************************************************
 * Copyright 2018 BGx Graphics Framework.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

/*
 * author abijosh@gmail.com
 */

#ifndef BGX_INPUTADAPTER_HPP
#define BGX_INPUTADAPTER_HPP

#include "InputProcessor.hpp"

namespace BGx {

    class InputAdapter : public InputProcessor {
    public:
        virtual bool keyDown (int keycode) override;
        virtual bool keyUp (int keycode) override;
        virtual bool keyTyped (char character) override;
        virtual bool touchDown (int x,int y,int pointer,int button) override;
        virtual bool touchUp (int x,int y,int pointer,int button) override;
        virtual bool touchDragged (int x,int y,int pointer) override;
        virtual bool touchMoved (int x,int y) override;
        virtual bool scrolled (int amount) override;

    protected:


    private:

    };

}

#endif //BGX_INPUTADAPTER_HPP