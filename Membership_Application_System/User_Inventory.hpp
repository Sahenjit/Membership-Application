//
//  User_Inventory.hpp
//  Gym_Membership_Application
//
//  Created by Shankar on 11/08/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#ifndef User_Inventory_hpp
#define User_Inventory_hpp
#include <vector>
#include "Free.hpp"
#include "Silver.hpp"
#include "Gold.hpp"
#include <iostream>
#include <string>
#include <fstream>
class User_inventory
{
private:
    int ID;
    std::string First_name;
    std::string Last_name;
    std::string Date_of_birth;
    std::string Gender;
    std::string Music_Preferences;
    int monthly_fee;
    std::string Payment_details;
    std::vector<Free> Free_users;
    std::vector<Silver> Silver_users;
    std::vector<Gold> Gold_users;
public:
    User_inventory(std::vector<Free> Free_users,std::vector<Silver> Silver_users,std::vector<Gold> Gold_users)
    :Free_users(Free_users),Silver_users(Silver_users),Gold_users(Gold_users) {};
    void add_user(std::string user_choice);
    void change_user_details(std::string user_choice);
    void Search_user_details(std::string user_choice);
    void Display_all_users(std::string user_choice);
    void remove_user(std::string user_choice);
    void add_users_to_text_file(std::string user_choice);

};

#endif /* User_Inventory_hpp */
