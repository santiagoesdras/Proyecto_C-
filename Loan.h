#ifndef PRESTAMO_H
#define PRESTAMO_H

#include <string.h>
#include <iostream>
#include "vector"
#include <chrono>

class Prestamo{
    private:
        double amount;
        double paymentTerm;
        std::string clientName;
    public:
        double getAmount() const;
        double getPaymentTerm() const;
        std::string getClientName() const;
        void setAmount(double amount);
        void setPaymentTerm(double paymentTerm);
        void setClientName(std::string clientName);
        virtual std::string interestCalculate() const = 0;
        virtual std::vector<std::string> loanInfo() const = 0;
};
#endif