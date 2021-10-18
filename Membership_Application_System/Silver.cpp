//
// Created by Shankar on 16/10/2021.
//

#include "Silver.hpp"

int Silver::getMonthlyfee()
{
    return monthlyfee;
}

std::string Silver::getPaymentdetails()
{
    return payment_details;
}

void Silver::setPaymentdetails(std::string paymentdetails)
{
    this->payment_details=paymentdetails;
}

void Silver::setMonthlyfee(int Monthlyfee)
{
    this->monthlyfee=Monthlyfee;
}

