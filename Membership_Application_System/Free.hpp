//
//  Free.hpp
//  Gym_Membership_Application
//
//  Created by Shankar on 01/08/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#ifndef Free_hpp
#define Free_hpp
#include "User.hpp"

class Free:public User
{
protected:
    int monthlyfee = 0;
    std::string payment_details = "N/A";
public:
    Free():User() { };
    Free(int ID,std::string First_name,std::string Last_name,std::string Date_of_birth,std::string Gender,std::string Music_Preferences)
    :User(ID,First_name,Last_name,Date_of_birth,Gender,Music_Preferences),monthlyfee(monthlyfee),payment_details(payment_details){}
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
        bool operator () (const Free & free) const { return free.getID() == ID;}
    };
};

#endif /* Free_hpp */
