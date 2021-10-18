//
//  main.cpp
//  Gym_Membership_Application
//
//  Created by Shankar on 01/08/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#include <iostream>
#include <vector>
#include "User_Inventory.hpp"
int main()
{
    std::string user_choice =  "free";
    std::vector<Free> Free_users;
    std::vector<Silver> Silver_users;
    std::vector<Gold> Gold_users;
    User_inventory u(Free_users, Silver_users, Gold_users);
    u.add_user(user_choice);
    u.Search_user_details(user_choice);
    u.remove_user(user_choice);
}
