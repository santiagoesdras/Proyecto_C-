#ifndef PRESTAMOAUTOMOVIL_H
#define PRESTAMOAUTOMOVIL_H

#include "Loan.h"
#include <string.h>
#include <iostream>

class PrestamoAutomovil: public Prestamo{
    private:
        const double interest = 9.75;
    public:
        std::string interestCalculate() const override;
        std::vector<std::string> loanInfo() const override;
};
#endif