//
// Created by Bryce Schultz on 11/19/23.
//

#ifndef INVESTMENT_H
#define INVESTMENT_H

#include "InvestmentData.h"

class Investment {
public:
    Investment(InvestmentData t_data);

    void calculateWithoutMonthlyDeposit();
    void calculateWithMonthlyDeposit();

    InvestmentData getInvestmentData() const;

private:
    InvestmentData m_data; // Encapsulates all investment-related data
};

#endif // INVESTMENT_H


