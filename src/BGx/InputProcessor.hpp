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

#ifndef BGX_INPUTPROCESSOR_HPP
#define BGX_INPUTPROCESSOR_HPP

namespace BGx {

    class InputProcessor {
    public:
        virtual bool keyDown (int keycode) = 0;
        virtual bool keyUp (int keycode) = 0;
        virtual bool keyTyped (char character) = 0;
        virtual bool touchDown (int x, int y, int pointer, int button) = 0;
        virtual bool touchUp (int x, int y, int pointer, int button) = 0;
        virtual bool touchDragged (int x, int y, int pointer) = 0;
        virtual bool touchMoved (int x, int y) = 0;
        virtual bool scrolled (int amount) = 0;

        virtual ~InputProcessor() { }
    };

}

#endif //BGX_INPUTPROCESSOR_HPP