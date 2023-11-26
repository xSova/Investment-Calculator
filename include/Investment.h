//
// Created by Bryce Schultz on 11/19/23.
//

#ifndef INVESTMENT_H
#define INVESTMENT_H

#include "InvestmentData.h"

// The Investment class is responsible for performing calculations related to investments,
// such as calculating growth with or without monthly deposits.
class Investment {
public:
    // Constructor that initializes an Investment object with given investment data.
    explicit Investment(InvestmentData t_data);

    // Calculates the growth of the investment over time without considering any additional monthly deposits.
    void calculateWithoutMonthlyDeposit();

    // Calculates the growth of the investment over time including additional monthly deposits.
    void calculateWithMonthlyDeposit();

    // Retrieves the investment data including calculations such as balances and interest.
    [[nodiscard]] InvestmentData getInvestmentData() const;

private:
    InvestmentData m_data; // This member variable holds all the investment-related data, like the initial amount, interest rate, etc.
};

#endif // INVESTMENT_H



