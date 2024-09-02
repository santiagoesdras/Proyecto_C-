#include "Loan.h"

double Prestamo::getAmount() const {
    return amount;
}
double Prestamo::getPaymentTerm() const {
    return paymentTerm;
}
std::string Prestamo::getClientName() const {
    return clientName;
}
void Prestamo::setAmount(double amount) {
    this->amount = amount;
}
void Prestamo::setPaymentTerm(double paymentTerm) {
    this->paymentTerm = paymentTerm;
}
void Prestamo::setClientName(std::string name){
    this->clientName = name;
}
