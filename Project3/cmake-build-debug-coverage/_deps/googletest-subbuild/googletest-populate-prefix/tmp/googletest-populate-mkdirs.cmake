# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/bryceschultz/Repos/Project3/cmake-build-debug-coverage/_deps/googletest-src"
  "/Users/bryceschultz/Repos/Project3/cmake-build-debug-coverage/_deps/googletest-build"
  "/Users/bryceschultz/Repos/Project3/cmake-build-debug-coverage/_deps/googletest-subbuild/googletest-populate-prefix"
  "/Users/bryceschultz/Repos/Project3/cmake-build-debug-coverage/_deps/googletest-subbuild/googletest-populate-prefix/tmp"
  "/Users/bryceschultz/Repos/Project3/cmake-build-debug-coverage/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
  "/Users/bryceschultz/Repos/Project3/cmake-build-debug-coverage/_deps/googletest-subbuild/googletest-populate-prefix/src"
  "/Users/bryceschultz/Repos/Project3/cmake-build-debug-coverage/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/bryceschultz/Repos/Project3/cmake-build-debug-coverage/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/bryceschultz/Repos/Project3/cmake-build-debug-coverage/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
