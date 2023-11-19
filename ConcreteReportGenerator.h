//
// Created by Bryce Schultz on 11/19/23.
//

#ifndef CONCRETEREPORTGENERATOR_H
#define CONCRETEREPORTGENERATOR_H

#include "ReportGenerator.h"

class ConcreteReportGenerator : public ReportGenerator {
public:
    // Implements the report generation as defined in ReportGenerator.
    void generateReport(const InvestmentData& t_data) override;
};

#endif // CONCRETEREPORTGENERATOR_H

