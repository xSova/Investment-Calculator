//
// Created by Bryce Schultz on 11/19/23.
//

#include <utility>

#include "../include/Investment.h"

#include <iostream>

Investment::Investment(InvestmentData t_data) {
    this->m_data = std::move(t_data);
}

void Investment::calculateWithoutMonthlyDeposit() {
    double openingAmount = m_data.getInitialAmount();
    double annualInterestRate = m_data.getAnnualInterest();
    int years = m_data.getYears();
    int months = years * 12;
    double accruedInterest = 0.0;

    for (int month = 1; month <= months; ++month) {
        double monthlyInterest = openingAmount * (annualInterestRate / 100.0 / 12.0);
        accruedInterest += monthlyInterest;
        openingAmount += monthlyInterest;

        if (month % 12 == 0) {
            m_data.addYearlyData(openingAmount, accruedInterest);
            accruedInterest = 0.0; // Reset accrued interest for the next year
        }
    }
}


void Investment::calculateWithMonthlyDeposit() {
    double openingAmount = m_data.getInitialAmount();
    double monthlyDeposit = m_data.getMonthlyDeposit();
    double annualInterestRate = m_data.getAnnualInterest();
    int years = m_data.getYears();
    int months = years * 12;
    double accruedInterest = 0.0;

    for (int month = 1; month <= months; ++month) {
        openingAmount += monthlyDeposit;
        double monthlyInterest = openingAmount * (annualInterestRate / 100.0 / 12.0);
        accruedInterest += monthlyInterest;
        openingAmount += monthlyInterest;

        if (month % 12 == 0) {
            m_data.addYearlyData(openingAmount, accruedInterest);
            accruedInterest = 0.0; // Reset accrued interest for the next year
        }
    }
}


InvestmentData Investment::getInvestmentData() const { return m_data; }