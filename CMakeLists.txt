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

# Test executables
add_executable(ReportGeneratorTest tests/ReportGeneratorTest.cpp)
target_link_libraries(ReportGeneratorTest gtest gtest_main)
target_include_directories(ReportGeneratorTest PRIVATE include)

add_executable(InputHandlerTest tests/InputHandlerTest.cpp)
target_link_libraries(InputHandlerTest gtest gtest_main)
target_include_directories(InputHandlerTest PRIVATE include)

add_executable(InvestmentTest tests/InvestmentTest.cpp)
target_link_libraries(InvestmentTest gtest gtest_main)
target_include_directories(InvestmentTest PRIVATE include)

add_executable(ConcreteReportGeneratorTest tests/ConcreteReportGeneratorTest.cpp
        tests/ReportGeneratorTest.cpp
        tests/InvestmentDataTest.cpp)
target_link_libraries(ConcreteReportGeneratorTest gtest gtest_main)
target_include_directories(ConcreteReportGeneratorTest PRIVATE include)

add_executable(InvestmentDataTest tests/InvestmentDataTest.cpp)
target_link_libraries(InvestmentDataTest gtest gtest_main)
target_include_directories(InvestmentDataTest PRIVATE include)

