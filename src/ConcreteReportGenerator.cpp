//
// Created by Bryce Schultz on 11/19/23.
//

#include "../include/ConcreteReportGenerator.h"

#include <iomanip>
#include <iostream>
using namespace std;

void ConcreteReportGenerator::generateReport(const InvestmentData& t_data) {

    cout << endl;
    cout << "Investment Report" << endl;
    cout << "=================" << endl;
    cout << "Initial Investment Amount: $" << fixed << setprecision(2) << t_data.getInitialAmount() << endl;
    cout << "Monthly Deposit: $" << t_data.getMonthlyDeposit() << endl;
    cout << "Annual Interest: " << t_data.getAnnualInterest() << "%" << endl;
    cout << "Number of Years: " << t_data.getYears() << endl;
    cout << endl;

    // Report details
    const auto yearlyBalances = t_data.getYearlyBalances();
    const auto yearlyInterests = t_data.getYearlyInterests();

    cout << left << setw(20) << "Year" << setw(30) << "Closing Amount" << "Interest" << endl;
    cout << "=============================================================" << endl;

    for (size_t i = 0; i < yearlyBalances.size(); ++i) {
        cout << left << setw(20) << i + 1;
        cout << setw(30) << fixed << setprecision(2) << yearlyBalances.at(i);
        cout << fixed << setprecision(2) << yearlyInterests.at(i) << endl;
    }
}
