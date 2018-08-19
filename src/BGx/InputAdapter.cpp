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

#include "InputAdapter.hpp"

using namespace BGx;

bool InputAdapter::keyDown (int keycode) {
    return false;
}

bool InputAdapter::keyUp (int keycode) {
    return false;
}

bool InputAdapter::keyTyped (char character) {
    return false;
}

bool InputAdapter::touchDown (int x,int y,int pointer,int button) {
    return false;
}

bool InputAdapter::touchUp (int x,int y,int pointer,int button) {
    return false;
}

bool InputAdapter::touchDragged (int x,int y,int pointer) {
    return false;
}

bool InputAdapter::touchMoved (int x,int y) {
    return false;
}

bool InputAdapter::scrolled (int amount) {
    return false;
}