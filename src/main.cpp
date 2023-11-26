#include "InputHandler.h"
#include "InvestmentData.h"
#include "Investment.h"
#include "ConcreteReportGenerator.h"

int main() {
    // Step 1: Gather inputs
    const double initialAmount = InputHandler::getDoubleInput("Enter initial investment amount: ");
    const double monthlyDeposit = InputHandler::getDoubleInput("Enter monthly deposit: ");
    const double annualInterest = InputHandler::getDoubleInput("Enter annual interest rate (%): ");
    const int years = InputHandler::getIntInput("Enter number of years: ");

    // Step 2: Create InvestmentData
    InvestmentData investmentData(initialAmount, monthlyDeposit, annualInterest, years);

    // Step 3: Perform Calculations
    Investment investment(investmentData);
    if (std::abs(monthlyDeposit - 0.0) < 1e-10) {
        investment.calculateWithoutMonthlyDeposit();
    } else {
        investment.calculateWithMonthlyDeposit();
    } // Or without, depending on user choice or application design

    // Step 4: Generate Report
    ConcreteReportGenerator reportGenerator;
    reportGenerator.generateReport(investment.getInvestmentData());

    // Step 5: Output is handled within the report generation
}
