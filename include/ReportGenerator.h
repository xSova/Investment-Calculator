//
// Created by Bryce Schultz on 11/19/23.
//

#ifndef REPORTGENERATOR_H
#define REPORTGENERATOR_H

#include "InvestmentData.h"

class ReportGenerator {
public:
    // Pure virtual function to be implemented by any class that generates reports.
    virtual void generateReport(const InvestmentData& t_data) = 0;

    // Virtual destructor for safe polymorphic use.
    virtual ~ReportGenerator() {}
};

#endif // REPORTGENERATOR_H

