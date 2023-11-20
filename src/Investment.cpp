//
// Created by Bryce Schultz on 11/19/23.
//

#include "../include/Investment.h"

Investment::Investment(InvestmentData t_data) {
    this->m_data = t_data;
}

void Investment::calculateWithoutMonthlyDeposit() {
    double openingAmount = m_data.getInitialAmount();
    double annualInterestRate = m_data.getAnnualInterest();
    int years = m_data.getYears();
    int months = years * 12;

    // Interest calculated monthly but is stored on an annual basis.
    for (int month = 1; month <= months; ++month) {
        double total = openingAmount;
        double monthlyInterest = total * (annualInterestRate / 100.0 / 12.0);
        double closingBalance = total + monthlyInterest;

        // Add yearly data if a year completes.
        if (month % 12 == 0) {
            m_data.addYearlyData(closingBalance, monthlyInterest * 12);
        }

        // Update opening amount for next month.
        openingAmount = closingBalance;
    }
}

void Investment::calculateWithMonthlyDeposit() {
    double openingAmount = m_data.getInitialAmount();
    double monthlyDeposit = m_data.getMonthlyDeposit();
    double annualInterestRate = m_data.getAnnualInterest();
    int years = m_data.getYears();
    int months = years * 12;

    for (int month = 1; month <= months; ++month) {
        double total = openingAmount + monthlyDeposit;
        double monthlyInterest = total * (annualInterestRate / 100.0 / 12.0);
        double closingBalance = total + monthlyInterest;

        // Add yearly data if a year completes.
        if (month % 12 == 0) {
            m_data.addYearlyData(closingBalance, monthlyInterest * 12);
        }

        // Update opening amount for next month.
        openingAmount = closingBalance;
    }
}

InvestmentData Investment::getInvestmentData() const { return m_data; }