//
// Created by Bryce Schultz on 11/19/23.
//

#ifndef CONCRETEREPORTGENERATOR_H
#define CONCRETEREPORTGENERATOR_H

#include "ReportGenerator.h"

class ConcreteReportGenerator final : public ReportGenerator {
public:
    // Implements the report generation as defined in ReportGenerator.
    void generateReport(const InvestmentData& t_data) override;
    ~ConcreteReportGenerator() override = default;
};

#endif // CONCRETEREPORTGENERATOR_H

