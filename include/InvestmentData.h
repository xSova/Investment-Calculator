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
    // Constructor to initialize investment data with the data initialized.
    InvestmentData(double t_initialAmount, double t_monthlyDeposit, double t_annualInterest, int t_years);

    // Setters
    void setInitialAmount(double t_initialAmount);
    void setMonthlyDeposit(double t_monthlyDeposit);
    void setAnnualInterest(double t_annualInterest);
    static void setYears(int t_investmentYears);

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
    double m_initialAmount = 0.0; // The initial amount of the investment.
    double m_monthlyDeposit = 0.0; // The monthly deposit amount.
    double m_annualInterest = 0.0; // The annual interest rate.
    int m_years = 0; // The number of years for the investment.

    // Vectors to store the end-of-year balance and interest for each year.
    std::vector<double> m_yearlyBalances;
    std::vector<double> m_yearlyInterests;
};

#endif // INVESTMENTDATA_H

