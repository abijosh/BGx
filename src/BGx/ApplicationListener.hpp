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

#ifndef BGX_APPLICATIONLISTENER_HPP
#define BGX_APPLICATIONLISTENER_HPP


namespace BGx {
  
class ApplicationListener {
public:
    virtual void create () = 0;
    virtual void resume () = 0;
    virtual void render () = 0;
    virtual void resize (int width, int height) = 0;
    virtual void pause () = 0;
    virtual void dispose () = 0;
    
    virtual ~ApplicationListener() { }
};

}

#endif //BGX_APPLICATIONLISTENER_HPP