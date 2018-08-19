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

#ifndef BGX_SCREEN_HPP
#define BGX_SCREEN_HPP

namespace BGx {

    class Screen {
    public:
        /** Called when the screen should render itself.
         * @param delta The time in seconds since the last render. */
        virtual void render (float delta) = 0;

        /** @see ApplicationListener#resize(int, int) */
        virtual void resize (int width, int height) = 0;

        /** Called when this screen becomes the current screen for a {@link Game}. */
        virtual void show () = 0;

        /** Called when this screen is no longer the current screen for a {@link Game}. */
        virtual void hide () = 0;

        /** @see ApplicationListener#pause() */
        virtual void pause () = 0;

        /** @see ApplicationListener#resume() */
        virtual void resume () = 0;

        /** Called when this screen should release all resources. */
        virtual void dispose () = 0;
    };

}

#endif //BGX_SCREEN_HPP