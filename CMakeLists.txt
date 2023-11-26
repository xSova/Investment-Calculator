cmake_minimum_required(VERSION 3.26)
project(Investment_Calculator)

set(CMAKE_CXX_STANDARD 17)

# Main application executable
add_executable(Investment_Calculator src/main.cpp
        src/ReportGenerator.cpp
        src/InputHandler.cpp
        src/Investment.cpp
        src/ConcreteReportGenerator.cpp
        src/InvestmentData.cpp
)
target_include_directories(Investment_Calculator PRIVATE include)

# Google Test
add_subdirectory(googletest)

#[[
# Test executables
add_executable(ReportGeneratorTest tests/ReportGeneratorTest.cpp)
target_link_libraries(ReportGeneratorTest gtest gtest_main)
target_include_directories(ReportGeneratorTest PRIVATE include)

add_executable(InputHandlerTest tests/InputHandlerTest.cpp
        src/InputHandler.cpp
        src/ConcreteReportGenerator.cpp
        src/InvestmentData.cpp) # Include this source file
target_link_libraries(InputHandlerTest gtest gtest_main)
target_include_directories(InputHandlerTest PRIVATE include)



add_executable(InvestmentTest tests/InvestmentTest.cpp)
target_link_libraries(InvestmentTest gtest gtest_main)
target_include_directories(InvestmentTest PRIVATE include)

add_executable(ConcreteReportGeneratorTest tests/ConcreteReportGeneratorTest.cpp
        tests/ReportGeneratorTest.cpp
        src/ReportGenerator.cpp  # Include the source file for ReportGenerator tests
        tests/InvestmentDataTest.cpp
        src/InvestmentData.cpp  # Include the source file for InvestmentData tests
        src/ConcreteReportGenerator.cpp)  # Assuming ConcreteReportGenerator is also being tested
target_link_libraries(ConcreteReportGeneratorTest gtest gtest_main)
target_include_directories(ConcreteReportGeneratorTest PRIVATE include)


# Test executable for InvestmentDataTest
add_executable(InvestmentDataTest tests/InvestmentDataTest.cpp
        src/InvestmentData.cpp  # Include the source file for the class being tested
)
target_link_libraries(InvestmentDataTest gtest gtest_main)
target_include_directories(InvestmentDataTest PRIVATE include)

]]

add_executable(AllTests
        tests/InputHandlerTest.cpp
        tests/InvestmentDataTest.cpp
        tests/InvestmentTest.cpp
        tests/ReportGeneratorTest.cpp
        tests/ConcreteReportGeneratorTest.cpp
        src/InputHandler.cpp
        src/Investment.cpp
        src/InvestmentData.cpp
        src/ReportGenerator.cpp
        src/ConcreteReportGenerator.cpp
)
target_link_libraries(AllTests gtest gtest_main)
target_include_directories(AllTests PRIVATE include)


