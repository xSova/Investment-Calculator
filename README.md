# Investment Calculator

## Overview
A C++ application to calculate and report on investment growth. It handles user inputs for investment details and provides reports on the investment growth with or without monthly deposits.

## Features
- Manage investment data (initial amount, monthly deposit, annual interest, duration).
- Calculate investment growth under different scenarios.
- Generate detailed yearly balance and interest reports.

## Building and Running
- Requires C++17 compiler and CMake.
- Clone the repo: `git clone https://github.com/xSova/Investment-Calculator.git`
- Build: `cmake -B build && cmake --build build`
- Run: `./build/Investment_Calculator`

## Testing
- Uses Google Test for unit testing.
- Run tests with: `./build/TestExecutableName` (replace with actual test executable name)

## License
This project is open source, licensed under the MIT License.

## Author
- Bryce (xSova)

## Retrospective (for school)
- _Summarize the project and what problem it was solving._
  - A C++ application to calculate and report on investment growth. Key functionalities included:
    - Taking user input for initial investment, monthly investment, expected rate of return, and time horizon.
    - Calculating the value of the investment given the user input.
    - Displaying the EOY values for total value of the investment, and the amount of interest gained that year.
- _What did you do particularly well?_
  - **Modularity**: The code was structured into distinct modules (like `InputHandler`, `Investment`, `InvestmentData`, `ReportGenerator`, etc.) each handling specific functionalities. This separation of concerns made the code easier to understand and modify.
  - **Error Handling**: Implementing robust error handling, particularly around user input, which enhanced the program's reliablity.
  - **User Interaction**: The program provided clear user interfaces and interactive menus, making it user-friendly.
- _Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?_
  - **UX Optimization**: Currently, the program uses a CLI (Command Line Interface), which is fine for most, but when taking in input it would be better suited with a GUI (Graphical User Interface) where the user would put all the info in at once, and they would be able to see changes to values after making adjustments to data (without needing to reinput everything they already used).
  - **Security**: Input validation was implemented, but further enhancements (like sanitizing inputs to prevent injection attacks) could be added, especially if the program was to be scaled to something like an investment brokerages' website as a tool for clients.
- _Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?_
  - **Error Handling**: Implementing comprehensive error handling, especially for user provided input (without ruining the user experience), was challenging. Research and careful consideration of possible failure points were required. Resources like C++ documentation and forums like Stack Overflow provided valuable insights.
  - **Project Structure**: Making sure to structure the project in a way that would be modular and separate functionality was difficult to initially plan out- but after looking at some other C++ projects, and using the design of some of my Java projects, I was able to make something that I believe accomplished the goal. 
- _What skills from this project will be particularly transferable to other projects or course work?_
  - **Modular Programming**: The skill of writing modular code is highly transferrable. It's applicable in almost any software developmint project and is key to creating maintainable and scalable software.
  - **Error Handling and Input Validation**: These are critical skills in any programming endeavor, ensuring robust and secure code.
  - **User-Centric Design**: Focusing on user interaction and experience is a universally valuable skill across software projects.
- _How did you make this program maintainable, readable, and adaptable?_
  - **Code Comments and Documentation**: Throughout the code, comments and clear documentation were provided, explaining each part of the program.
  - **Consistent Coding Conventions**: Adhering to a consistent style and naming conventions enhanced the readability of the code.
  - **Using Clear Abstractions and Interfaces**: By abstracting functionalities into classes and interfaces, the code was made adaptable and extendable, allowing for future enhancements with minimal changes to the existing codebase.
