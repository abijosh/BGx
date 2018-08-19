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

#ifndef BGX_APPLICATION_HPP
#define BGX_APPLICATION_HPP

#include <string>
#include <ostream>
#include <functional>

#include "utils/Runnable.hpp"

class Runnable;

namespace BGx {

//forward declaration
class Graphics;
class Audio;
class Files;
class Preferences;
class Input;

class Application
{
public:
    enum ApplicationType {
      Android, 
      Desktop, 
      iOS,
      Emscripten,
      WebGL
    };
       
    virtual Graphics* getGraphics () = 0;    
    virtual Audio* getAudio () = 0;    
    virtual Input* getInput () = 0;    
    virtual Files* getFiles () = 0;   
    virtual ApplicationType getType () = 0;    
    virtual int getVersion () = 0;
    
    virtual Preferences* getPreferences (std::string& name) = 0;
    
    virtual void postRunnable (Runnable::ptr runnable) = 0;
    virtual void postRunnable (std::function< void() > runnable) = 0;
    
    virtual void exit () = 0;
    virtual void update() = 0;
    virtual void pause() = 0;
    
    virtual ~Application() {}
};

#endif //BGX_APPLICATION_HPP