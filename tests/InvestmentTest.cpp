//
// Created by Bryce Schultz on 11/19/23.
//

#include <gtest/gtest.h>
#include "../include/Investment.h"

TEST(InvestmentTest, CalculateWithoutMonthlyDeposit) {
    InvestmentData data(1.0, 0.0, 5.0, 5); // Initial amount, monthly deposit, annual interest, years
    Investment investment(data);

    investment.calculateWithoutMonthlyDeposit();
    InvestmentData result = investment.getInvestmentData();

    // Assuming addYearlyData stores closing balance and interest for each year
    auto yearlyBalances = result.getYearlyBalances();
    auto yearlyInterests = result.getYearlyInterests();

    EXPECT_NEAR(yearlyBalances.back(), 1.28, 0.01); // Example expected value
    EXPECT_NEAR(yearlyInterests.back(), 0.06, 0.01);  // Example expected value
}

TEST(InvestmentTest, CalculateWithMonthlyDeposit) {
    InvestmentData data( 1.0, 50.0, 5.0, 5); // Initial amount, monthly deposit, annual interest, years
    Investment investment(data);

    investment.calculateWithMonthlyDeposit();
    InvestmentData result = investment.getInvestmentData();

    auto yearlyBalances = result.getYearlyBalances();
    auto yearlyInterests = result.getYearlyInterests();

    // Example expected values based on specific calculation
    EXPECT_NEAR(yearlyBalances.back(), 3415.76, 0.01); // Example expected value
    EXPECT_NEAR(yearlyInterests.back(), 152.75, 0.01);  // Example expected value
}
