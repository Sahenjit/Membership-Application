//
//  User.cpp
//  Gym_Membership_Application
//
//  Created by Shankar on 01/08/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#include "User.hpp"


    int User::getID() const
    {
      return ID;
    }
    void User::setID(int ID)
    {
      this->ID=ID;
    }
    std::string User::getFirst_name() const
    {
      return First_name;
    }
    void User::setFirst_name(std::string First_name)
    {
      this->First_name=First_name;
    }
    std::string User::getLast_name() const
    {
      return Last_name;
    }
    void User::setLast_name(std::string Last_name)
    {
      this->Last_name=Last_name;
    }
    std::string User::getDate_of_birth() const
    {
      return Date_of_birth;
    }
    void User::setDate_of_birth(std::string Date_of_birth)
    {
      this->Date_of_birth=Date_of_birth;
    }
    std::string User:: getGender() const
    {
     return Gender;
    }
    void User::setGender(std::string Gender)
    {
      this->Gender=Gender;
    }
    std::string User::getMusic_Preferences()const
    {
      return Music_Preferences;
    }
    void User::setMusic_Preferences(std::string Music_Preferences)
    {
      this->Music_Preferences=Music_Preferences;
    }

