//
// Created by Bryce Schultz on 11/19/23.
//
#include <gtest/gtest.h>
#include <sstream>
#include "ConcreteReportGenerator.h"
#include "InvestmentData.h"

class ConcreteReportGeneratorTest : public ::testing::Test {
protected:
    std::stringstream buffer;  // Buffer to store the output
    std::streambuf* old;       // To store old buffer

    void SetUp() override {
        old = std::cout.rdbuf(buffer.rdbuf());  // Redirect cout to buffer
    }

    void TearDown() override {
        std::cout.rdbuf(old);  // Reset cout to standard output
    }
};

TEST_F(ConcreteReportGeneratorTest, GenerateReportTest) {
    InvestmentData data;
    data.setInitialAmount(1000.00);
    data.setMonthlyDeposit(100.00);
    data.setAnnualInterest(5.0);
    data.setYears(1);

    // Mock some yearly data
    data.addYearlyData(1100.00, 50.00);

    ConcreteReportGenerator reportGenerator;
    reportGenerator.generateReport(data);

    std::string expectedOutput = "\nInvestment Report\n=================\n";
    expectedOutput += "Initial Investment Amount: $1000.00\n";
    expectedOutput += "Monthly Deposit: $100.00\n";
    expectedOutput += "Annual Interest: 5.00%\n";
    expectedOutput += "Number of Years: 1\n\n";
    expectedOutput += "Year                Closing Amount                Interest\n";
    expectedOutput += "=============================================================\n";
    expectedOutput += "1                   1100.00                       50.00\n";

    EXPECT_EQ(buffer.str(), expectedOutput);
}
