cmake_minimum_required(VERSION 3.26)
project(Project3)

set(CMAKE_CXX_STANDARD 17)

# Include the FetchContent module for downloading Google Test
include(FetchContent)

# Fetch Google Test from the specified repository
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1  # Update to a newer tag
)

# Fetch and make Google Test available
FetchContent_MakeAvailable(googletest)

# Enable testing in the project
enable_testing()

# Optionally, add any include directories your project needs
include_directories(Include)

# Add your main project executable
add_executable(Project3
        Src/main.cpp
        Src/Interface.cpp
        Src/InputHandler.cpp
        Src/ItemTracker.cpp
        Src/FileReader.cpp
        Src/FileWriter.cpp
        Src/MenuManager.cpp
        Include/Interface.h
        Include/InputHandler.h
        Include/ItemTracker.h
        Include/FileReader.h
        Include/FileWriter.h
        Include/MenuManager.h
)

# If you have any libraries to link with your main executable, add them here
# target_link_libraries(Project3 your_library)

# Add your test executable
add_executable(project3_tests
        Tests/InterfaceTest.cpp
        Tests/MenuManagerTest.cpp
        Tests/InputHandlerTest.cpp
        Tests/FileWriterTest.cpp
        Tests/FileReaderTest.cpp
        Tests/ItemTrackerTest.cpp
        Src/Interface.cpp
        Src/InputHandler.cpp
        Src/ItemTracker.cpp
        Src/FileReader.cpp
        Src/FileWriter.cpp
        Src/MenuManager.cpp
)

# Link Google Test to your test executable
target_link_libraries(project3_tests gtest_main)

# Include Google Test's directories
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
