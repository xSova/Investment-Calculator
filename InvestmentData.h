//
// Created by Bryce Schultz on 11/19/23.
//

#ifndef INVESTMENTDATA_H
#define INVESTMENTDATA_H

#include <vector>

class InvestmentData {
public:
    // Constructor to initialize investment data.
    InvestmentData();

    // Setters
    void setInitialAmount(double t_amount);
    void setMonthlyDeposit(double t_deposit);
    void setAnnualInterest(double t_interest);
    void setYears(int t_investmentYears);

    // Getters
    double getInitialAmount() const;
    double getMonthlyDeposit() const;
    double getAnnualInterest() const;
    int getYears() const;

    // Manages and updates the yearly balance and interest data.
    void addYearlyData(double t_yearEndBalance, double t_yearEndInterest);

    // Retrieves the yearly balance data.
    std::vector<double> getYearlyBalances() const;

    // Retrieves the yearly interest data.
    std::vector<double> getYearlyInterests() const;

private:
    double m_initialAmount; // The initial amount of the investment.
    double m_monthlyDeposit; // The monthly deposit amount.
    double m_annualInterest; // The annual interest rate.
    int m_years; // The number of years for the investment.

    // Vectors to store the end-of-year balance and interest for each year.
    std::vector<double> m_yearlyBalances;
    std::vector<double> m_yearlyInterests;
};

#endif // INVESTMENTDATA_H

