//
// Created by Bryce Schultz on 11/19/23.
//

#include <gtest/gtest.h>
#include "InvestmentData.h"

// Test for the constructors

TEST(InvestmentDataTest, ConstructorTest) {
InvestmentData data(1000.0, 50.0, 5.0, 10);
EXPECT_DOUBLE_EQ(1000.0, data.getInitialAmount());
EXPECT_DOUBLE_EQ(50.0, data.getMonthlyDeposit());
EXPECT_DOUBLE_EQ(5.0, data.getAnnualInterest());
EXPECT_EQ(10, data.getYears());
}

// Test for setting and getting values
TEST(InvestmentDataTest, SetAndGetTest) {
    InvestmentData data(0.0, 0.0, 0.0, 0);
    data.setInitialAmount(2000.0);
    data.setMonthlyDeposit(100.0);
    data.setAnnualInterest(4.0);
    data.setYears(15);

    EXPECT_DOUBLE_EQ(2000.0, data.getInitialAmount());
    EXPECT_DOUBLE_EQ(100.0, data.getMonthlyDeposit());
    EXPECT_DOUBLE_EQ(4.0, data.getAnnualInterest());
    EXPECT_EQ(15, data.getYears());
}

// Test for adding YearlyData, and getting that data
TEST(InvestmentDataTest, addYearlyDataTest) {
    InvestmentData data(0.0, 0.0, 0.0, 3);
    data.addYearlyData(1.0, 2.0);
    EXPECT_DOUBLE_EQ(1.0, data.getYearlyBalances().at(0));
    EXPECT_DOUBLE_EQ(2.0, data.getYearlyInterests().at(0));
}
