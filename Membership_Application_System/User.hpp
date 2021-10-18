//
//  User.hpp
//  Gym_Membership_Application
//
//  Created by Shankar on 01/08/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#ifndef User_hpp
#define User_hpp
#include <string>


class User
{
protected:
    int ID;
    std::string First_name;
    std::string Last_name;
    std::string Date_of_birth;
    std::string Gender;
    std::string Music_Preferences;
public:
    User(): ID(0),First_name(NULL),Last_name(NULL),Date_of_birth(NULL),Gender(NULL),Music_Preferences(NULL) {};
    User(int ID,std::string First_name,std::string Last_name,std::string Date_of_birth,std::string Gender,std::string Music_Preferences):
    ID(ID),First_name(First_name),Last_name(Last_name),Date_of_birth(Date_of_birth),Gender(Gender),Music_Preferences(Music_Preferences) {}
    int getID() const;
    void setID(int ID);
    std::string getFirst_name() const;
    void setFirst_name(std::string First_name);
    std::string getLast_name() const;
    void setLast_name(std::string Last_name);
    std::string getDate_of_birth() const;
    void setDate_of_birth(std::string Date_of_birth);
    std::string getGender() const;
    void setGender(std::string Gender);
    std::string getMusic_Preferences() const;
    void setMusic_Preferences(std::string Music_Preferences);
    virtual int getMonthlyfee()=0;
    virtual void setMonthlyfee(int Monthlyfee) =0;
    virtual std::string getPaymentdetails()=0;
    virtual void setPaymentdetails(std::string paymentdetails)=0;
};

#endif /* User_hpp */
