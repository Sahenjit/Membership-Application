//
// Created by Shankar on 16/10/2021.
//

#include "Gold.hpp"

int Gold::getMonthlyfee()
{
    return monthlyfee;
}

std::string Gold::getPaymentdetails()
{
    return payment_details;
}

void Gold::setPaymentdetails(std::string paymentdetails)
{
    this->payment_details=paymentdetails;
}

void Gold::setMonthlyfee(int Monthlyfee)
{
    this->monthlyfee=Monthlyfee;
}

