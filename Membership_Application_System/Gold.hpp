//
//  Gold.hpp
//  Gym_Membership_Application
//
//  Created by Shankar on 11/08/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#ifndef Gold_hpp
#define Gold_hpp

#include "User.hpp"

class Gold:public User
{
protected:
    int monthlyfee=40;
    std::string payment_details;
public:
    Gold():User(),monthlyfee(40),payment_details(NULL) {};
    Gold(int ID,std::string First_name,std::string Last_name,std::string Date_of_birth,std::string Gender,std::string Music_Preferences,std::string payment_details)
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
        bool operator () (const Gold & gold) const { return gold.getID() == ID;}
    };
  };

#endif /* Gold_hpp */
