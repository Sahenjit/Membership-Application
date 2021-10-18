//
//  Silver.hpp
//  Gym_Membership_Application
//
//  Created by Shankar on 02/08/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#ifndef Silver_hpp
#define Silver_hpp
#include "User.hpp"

class Silver:public User
{
protected:
    int monthlyfee=20;
    std::string payment_details;
public:
    Silver():User(),monthlyfee(20), payment_details(NULL) {};
    Silver(int ID,std::string First_name,std::string Last_name,std::string Date_of_birth,std::string Gender,std::string Music_Preferences,std::string payment_details)
    :User(ID,First_name,Last_name,Date_of_birth,Gender,Music_Preferences),monthlyfee(monthlyfee),payment_details(payment_details) {};
    virtual int getMonthlyfee() override;
    virtual void setMonthlyfee(int Monthlyfee) override;
    virtual std::string getPaymentdetails() override;
    virtual void setPaymentdetails(std::string paymentdetails) override;
    class Finder
    {
    private:
        int ID;
    public:
        Finder(int const & ID) : ID(ID) {}
        bool operator () (const Silver & silver) const { return silver.getID() == ID;}
    };
  };

#endif /* Silver_hpp */
