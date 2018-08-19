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

#ifndef BGX_FILES_HPP
#define BGX_FILES_HPP

#include <string>
#include "internal/memory"

namespace gdx {
    class FileHandle;
    class Files {
    public:
        enum FileType {
            ///Not used on libgdx-cpp, its here to interoperability
            ClassPath_UNUSED,
            /** Path relative to the asset directory on Android and to the application's root directory on the desktop. On the desktop,
             * if the file is not found, then the classpath is checked. This enables files to be found when using JWS or applets.
             * Internal files are always readonly. */
            Internal,

            /** Path relative to the root of the SD card on Android and to the home directory of the current user on the desktop. */
            External,

            /** Path that is a fully qualified, absolute filesystem path. To ensure portability across platforms use absolute files only
             * when absolutely (heh) necessary. */
            Absolute,

            Private
        };

        virtual ref_ptr_maker<FileHandle>::shared_ptr_t getFileHandle (const std::string& path, FileType type) = 0;

        virtual ref_ptr_maker<FileHandle>::shared_ptr_t internal_private (const std::string& path) = 0;

        virtual ref_ptr_maker<FileHandle>::shared_ptr_t internal (const std::string& path) = 0;

        virtual ref_ptr_maker<FileHandle>::shared_ptr_t external (const std::string& path) = 0;

        virtual ref_ptr_maker<FileHandle>::shared_ptr_t absolute (const std::string& path) = 0;

        virtual std::string getExternalStoragePath () = 0;

        virtual bool isExternalStorageAvailable () = 0;

        virtual ~Files() { }
    };

}

#endif //BGX_FILES_HPP