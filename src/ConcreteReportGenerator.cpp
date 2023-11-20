//
// Created by Bryce Schultz on 11/19/23.
//

#include "../include/ConcreteReportGenerator.h"
#include <iostream>
using namespace std;

void ConcreteReportGenerator::generateReport(const InvestmentData& t_data) {
    cout << "Investment Report" << endl;
    cout << "-----------------" << endl;
    cout << "Initial Investment Amount: $" << t_data.getInitialAmount() << endl;
    cout << "Monthly Deposit: $" << t_data.getMonthlyDeposit() << endl;
    cout << "Annual Interest: " << t_data.getAnnualInterest() << "%" << endl;
    cout << "Number of Years: " << t_data.getYears() << endl;
    cout << endl;

    // Report details
    auto yearlyBalances = t_data.getYearlyBalances();
    auto yearlyInterests = t_data.getYearlyInterests();
    for (size_t i = 0; i < yearlyBalances.size(); ++i) {
        cout << "Year " << (i + 1) << ": Balance: $" << yearlyBalances[i] << ", Interest: $" << yearlyInterests[i] << endl;
    }
}
