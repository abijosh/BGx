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

#ifndef BGX_INPUTMULTIPLEXER_HPP
#define BGX_INPUTMULTIPLEXER_HPP

#include <vector>

namespace BGx {

    class InputProcessor;


    class InputMultiplexer {
    public:
        InputMultiplexer();
        void addProcessor ( BGx::InputProcessor* processor);
        void removeProcessor (InputProcessor* processor);
        bool keyDown (int keycode);
        bool keyUp (int keycode);
        bool keyTyped (char character);
        bool touchDown (int x,int y,int pointer,int button);
        bool touchUp (int x,int y,int pointer,int button);
        bool touchDragged (int x,int y,int pointer);
        bool touchMoved (int x,int y);
        bool scrolled (int amount);

    protected:


    private:
        std::vector<InputProcessor*> processors;
    };

}


#endif //BGX_INPUTMULTIPLEXER_HPP