//
// Created by Shankar on 16/10/2021.
//

#include "Free.hpp"

int Free::getMonthlyfee()
{
    return monthlyfee;
}

std::string Free::getPaymentdetails()
{
    return payment_details;
}


void Free::setMonthlyfee(int Monthlyfee)
{
    this->monthlyfee = Monthlyfee;
}

void Free::setPaymentdetails(std::string paymentdetails)
{
    this->payment_details = paymentdetails;
}

