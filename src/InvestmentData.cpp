//
// Created by Bryce Schultz on 11/19/23.
//

#include "../include/InvestmentData.h"



InvestmentData::InvestmentData(double t_initialAmount, double t_monthlyDeposit, double t_annualInterest, int t_years)
: m_initialAmount(t_initialAmount), m_monthlyDeposit(t_monthlyDeposit), m_annualInterest(t_annualInterest), m_years(t_years),
m_yearlyBalances(t_years, 0.0), m_yearlyInterests(t_years, 0.0) {}


// Setters.
void InvestmentData::setInitialAmount(double t_initialAmount) { this->m_initialAmount = t_initialAmount; }
void InvestmentData::setMonthlyDeposit(double t_monthlyDeposit) { this->m_monthlyDeposit = t_monthlyDeposit; }
void InvestmentData::setAnnualInterest(double t_annualInterest) { this->m_annualInterest = t_annualInterest; }
void InvestmentData::setYears(int t_investmentYears) { this->m_years = t_investmentYears; }

// Getters.
double InvestmentData::getInitialAmount() const { return this->m_initialAmount; }
double InvestmentData::getMonthlyDeposit() const { return this->m_monthlyDeposit; }
double InvestmentData::getAnnualInterest() const { return this->m_annualInterest; }
int InvestmentData::getYears() const { return this->m_years; }