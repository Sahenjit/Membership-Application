//
//  User_Inventory.cpp
//  Gym_Membership_Application
//
//  Created by Shankar on 11/08/2020.
//  Copyright © 2020 Shankar. All rights reserved.
//

#include "User_Inventory.hpp"


void User_inventory::add_user(std::string user_choice)
{
    long long int no_of_users;
    std::cout<<"Enter the amount of users you would like to enter: ";
    std::cin>>no_of_users;
    for (int i=0;i<no_of_users;i++)
    {
        std::cout<<"Enter the Id :";
        std::cin>>ID;
        std::cout<<"Enter the First Name :";
        std::cin>>First_name;
        std::cout<<"Enter the Last Name :";
        std::cin>>Last_name;
        std::cout<<"Enter the Date of Birth :";
        std::cin>>Date_of_birth;
        std::cout<<"Enter the Gender :";
        std::cin>>Gender;
        std::cout<<"Enter the Music Preferences :";
        std::cin>>Music_Preferences;
        if(user_choice=="Free" || user_choice=="F" || user_choice=="free" || user_choice=="f")
        {
            Free f(ID,First_name,Last_name,Date_of_birth,Gender,Music_Preferences);
            Free_users.push_back(f);
        }
        else if(user_choice=="Silver" || user_choice=="S" || user_choice=="silver" || user_choice=="s")
        {
            std::cout<<"Please enter Payment details ";
            std::cin>>Payment_details;
            Silver s(ID,First_name,Last_name,Date_of_birth,Gender,Music_Preferences,Payment_details);
            Silver_users.push_back(s);
        }
        else if(user_choice=="Gold" || user_choice=="G" || user_choice=="gold" || user_choice=="g")
        {
            std::cout<<"Please enter Payment details ";
            std::cin>>Payment_details;
            Gold g(ID,First_name,Last_name,Date_of_birth,Gender,Music_Preferences,Payment_details);
            Gold_users.push_back(g);
        }
    }

}

void User_inventory::change_user_details(std::string user_choice) {
    int newID;
    std::string newFirst_name;
    std::string newLast_name;
    std::string newDate_of_birth;
    std::string newGender;
    std::string newMusic_Preferences;
    int selection;
    std::cout << "Please select which subfield you would like to change" << std::endl;
    std::cout << "1." << "Press 1 to change a User's ID: " << std::endl;
    std::cout << "2." << "Press 2 to change a User's First Name: " << std::endl;
    std::cout << "3." << "Press 3 to change a User's Last Name: " << std::endl;
    std::cout << "4." << "Press 4 to change a User's Date of Birth: " << std::endl;
    std::cout << "5." << "Press 5 to change a User's Gender: " << std::endl;
    std::cout << "6." << "Press 6 to change a User's Music Preferences: " << std::endl;
    std::cout << "7." << "Press 7 to change all User's details: " << std::endl;
    std::cin >> selection;
    switch (selection) {
        case 1:
            std::cout << "Enter ID that you want to change: ";
            std::cin >> ID;
            std::cout << "Enter the new ID: ";
            std::cin >> newID;
            break;
        case 2:
            std::cout << "Enter First name that you want to change: ";
            std::cin >> First_name;
            std::cout << "Please enter the new first name: ";
            std::cin >> newFirst_name;
            break;
        case 3:
            std::cout << "Enter Last name that you want to change: ";
            std::cin >> Last_name;
            std::cout << "Enter the new last name: ";
            std::cin >> newLast_name;
            break;
        case 4:
            std::cout << "Enter the  date of birth you want to change: ";
            std::cin >> Date_of_birth;
            std::cout << "Enter the new date of birth: ";
            std::cin >> newDate_of_birth;
            break;
        case 5:
            std::cout << "Enter the  Gender you want to change: ";
            std::cin >> Gender;
            std::cout << "Enter the new Gender: ";
            std::cin >> newGender;
            break;
        case 6:
            std::cout << "Enter the Music_preference you want to change: ";
            std::cin >> Music_Preferences;
            std::cout << "Enter the new Music_preference: ";
            std::cin >> newMusic_Preferences;
            break;
        case 7:
            std::cout << "Enter ID that you want to change: ";
            std::cin >> ID;
            std::cout << "Please enter the new ID: ";
            std::cin >> newID;
            std::cout << "Enter First name that you want to change: ";
            std::cin >> First_name;
            std::cout << "Please enter the new first name: ";
            std::cin >> newFirst_name;
            std::cout << "Enter Last name that you want to change: ";
            std::cin >> Last_name;
            std::cout << "Please enter the new last name: ";
            std::cin >> newLast_name;
            std::cout << "Please enter the  date of birth you want to change: ";
            std::cin >> Date_of_birth;
            std::cout << "Please enter the new date of birth: ";
            std::cin >> newDate_of_birth;
            std::cout << "Please enter the  Gender you want to change: ";
            std::cin >> Gender;
            std::cout << "Please enter the new Gender: ";
            std::cin >> newGender;
            std::cout << "Please enter the Music_preference you want to change: ";
            std::cin >> Music_Preferences;
            std::cout << "Please enter the new Music_preference: ";
            std::cin >> newMusic_Preferences;
            break;
        default:
            break;
    }

    if (user_choice == "Free" || user_choice == "F" || user_choice == "free" || user_choice == "f") {
        int i = 0;
        while (i < Free_users.size()) {
            if (Free_users.at(i).getID() == ID && (selection >= 1 && selection <= 6)) {
                (Free_users.at(i).setID(newID));
                break;
            } else if (Free_users.at(i).getID() == ID && (selection == 7)) {
                (Free_users.at(i).setID(newID));
            }
            if (Free_users.at(i).getFirst_name() == First_name && (selection >= 1 && selection <= 6)) {
                (Free_users.at(i).setFirst_name(newFirst_name));
                break;
            } else if (Free_users.at(i).getFirst_name() == First_name && (selection == 7)) {
                (Free_users.at(i).setFirst_name(newFirst_name));
            }
            if (Free_users.at(i).getLast_name() == Last_name && (selection >= 1 && selection <= 6)) {
                (Free_users.at(i).setLast_name(newLast_name));
                break;
            } else if (Free_users.at(i).getLast_name() == Last_name && (selection == 7)) {
                (Free_users.at(i).setLast_name(newLast_name));
            }
            if (Free_users.at(i).getDate_of_birth() == Date_of_birth && (selection >= 1 && selection <= 6)) {
                (Free_users.at(i).setDate_of_birth(newDate_of_birth));
                break;
            } else if (Free_users.at(i).getDate_of_birth() == Date_of_birth && (selection == 7)) {
                (Free_users.at(i).setDate_of_birth(newDate_of_birth));
            }
            if (Free_users.at(i).getGender() == Gender && ((selection >= 1 && selection <= 6))) {
                (Free_users.at(i).setGender(newGender));
                break;
            } else if (Free_users.at(i).getGender() == Gender && (selection == 7)) {
                (Free_users.at(i).setGender(newGender));
            }
            if (Free_users.at(i).getMusic_Preferences() == Music_Preferences && ((selection >= 1 && selection <= 6))) {
                (Free_users.at(i).setMusic_Preferences(newMusic_Preferences));
                break;
            } else if (Free_users.at(i).getMusic_Preferences() == Music_Preferences && (selection == 7)) {
                (Free_users.at(i).setMusic_Preferences(newMusic_Preferences));
                break;
            }
            i++;
        }
    }


    if (user_choice == "Silver" || user_choice == "S" || user_choice == "silver" || user_choice == "s") {
        int i = 0;
        while (i < Silver_users.size()) {
            if (Silver_users.at(i).getID() == ID && (selection >= 1 && selection <= 6)) {
                (Silver_users.at(i).setID(newID));
                break;
            } else if (Silver_users.at(i).getID() == ID && (selection == 7)) {
                (Silver_users.at(i).setID(newID));
            }
            if (Silver_users.at(i).getFirst_name() == First_name && (selection >= 1 && selection <= 6)) {
                (Silver_users.at(i).setFirst_name(newFirst_name));
                break;
            } else if (Silver_users.at(i).getFirst_name() == First_name && (selection == 7)) {
                (Silver_users.at(i).setFirst_name(newFirst_name));
            }
            if (Silver_users.at(i).getLast_name() == Last_name && (selection >= 1 && selection <= 6)) {
                (Silver_users.at(i).setLast_name(newLast_name));
                break;
            } else if (Silver_users.at(i).getLast_name() == Last_name && (selection == 7)) {
                (Silver_users.at(i).setLast_name(newLast_name));
            }
            if (Silver_users.at(i).getDate_of_birth() == Date_of_birth && (selection >= 1 && selection <= 6)) {
                (Silver_users.at(i).setDate_of_birth(newDate_of_birth));
                break;
            } else if (Silver_users.at(i).getDate_of_birth() == Date_of_birth && (selection == 7)) {
                (Silver_users.at(i).setDate_of_birth(newDate_of_birth));
            }
            if (Silver_users.at(i).getGender() == Gender && ((selection >= 1 && selection <= 6))) {
                (Silver_users.at(i).setGender(newGender));
                break;
            } else if (Silver_users.at(i).getGender() == Gender && (selection == 7)) {
                (Silver_users.at(i).setGender(newGender));
            }
            if (Silver_users.at(i).getMusic_Preferences() == Music_Preferences &&
                ((selection >= 1 && selection <= 6))) {
                (Silver_users.at(i).setMusic_Preferences(newMusic_Preferences));
                break;
            } else if (Silver_users.at(i).getMusic_Preferences() == Music_Preferences && (selection == 7)) {
                (Silver_users.at(i).setMusic_Preferences(newMusic_Preferences));
                break;
            }
            i++;
        }
    }

    if (user_choice == "Gold" || user_choice == "G" || user_choice == "gold" || user_choice == "g") {
        int i = 0;
        while (i < Gold_users.size()) {
            if (Gold_users.at(i).getID() == ID && (selection >= 1 && selection <= 6)) {
                (Gold_users.at(i).setID(newID));
                break;
            } else if (Gold_users.at(i).getID() == ID && (selection == 7)) {
                (Gold_users.at(i).setID(newID));
            }
            if (Gold_users.at(i).getFirst_name() == First_name && (selection >= 1 && selection <= 6)) {
                (Gold_users.at(i).setFirst_name(newFirst_name));
                break;
            } else if (Gold_users.at(i).getFirst_name() == First_name && (selection == 7)) {
                (Gold_users.at(i).setFirst_name(newFirst_name));
            }
            if (Gold_users.at(i).getLast_name() == Last_name && (selection >= 1 && selection <= 6)) {
                (Gold_users.at(i).setLast_name(newLast_name));
                break;
            } else if (Gold_users.at(i).getLast_name() == Last_name && (selection == 7)) {
                (Gold_users.at(i).setLast_name(newLast_name));
            }
            if (Gold_users.at(i).getDate_of_birth() == Date_of_birth && (selection >= 1 && selection <= 6)) {
                (Gold_users.at(i).setDate_of_birth(newDate_of_birth));
                break;
            } else if (Gold_users.at(i).getDate_of_birth() == Date_of_birth && (selection == 7)) {
                (Gold_users.at(i).setDate_of_birth(newDate_of_birth));
            }
            if (Gold_users.at(i).getGender() == Gender && ((selection >= 1 && selection <= 6))) {
                (Gold_users.at(i).setGender(newGender));
                break;
            } else if (Gold_users.at(i).getGender() == Gender && (selection == 7)) {
                (Gold_users.at(i).setGender(newGender));
            }
            if (Gold_users.at(i).getMusic_Preferences() == Music_Preferences && ((selection >= 1 && selection <= 6))) {
                (Gold_users.at(i).setMusic_Preferences(newMusic_Preferences));
                break;
            } else if (Gold_users.at(i).getMusic_Preferences() == Music_Preferences && (selection == 7)) {
                (Gold_users.at(i).setMusic_Preferences(newMusic_Preferences));
                break;
            }
            i++;
        }
    }
}

void User_inventory::remove_user(std::string user_choice) {
    int selection;
    std::cout << "Press 1 to remove a User by ID: " << std::endl;
    std::cin >> selection;
    switch (selection) {
        case 1:
            std::cout << "Enter ID that you want to remove: ";
            std::cin >> ID;
    }

    if (user_choice == "Free" || user_choice == "F" || user_choice == "free" || user_choice == "f") {

        for (std::vector<Free>::iterator it = Free_users.begin(); it != Free_users.end(); it++) {
            if (it->getID() == ID) {
                Free_users.erase(it);
                std::cout<<"User with ID "<< ID<<" has been deleted from the system";
                break;
            }
        }
    }
        if (user_choice == "Silver" || user_choice == "S" || user_choice == "silver" || user_choice == "s") {
            for (std::vector<Silver>::iterator it = Silver_users.begin(); it != Silver_users.end(); it++) {
                if (it->getID() == ID) {
                    Silver_users.erase(it);
                    std::cout<<"User with ID "<< ID<<" has been deleted from the system";
                    break;
                }
            }
        }
       if (user_choice == "Gold" || user_choice == "G" || user_choice == "gold" || user_choice == "g") {
           for (std::vector<Gold>::iterator it = Gold_users.begin(); it != Gold_users.end(); it++){
               if(it->getID() == ID) {
                   Gold_users.erase(it);
                   std::cout<<"User with ID "<< ID<<" has been deleted from the system";
                   break;
               }
           }
       }
    }
void User_inventory::Search_user_details(std::string user_choice)
{
    int selection;
    std::cout<<"Press 1 to search a user by ID"<<std::endl;
    std::cin>>selection;
    switch (selection) {
        case 1:
            std::cout << "Enter ID that you want to search: ";
            std::cin >> ID;
    }
    if (user_choice == "Free" || user_choice == "F" || user_choice == "free" || user_choice == "f") {

        auto it = std::find_if(Free_users.begin(),Free_users.end(),Free::Finder(ID));
        std::cout<<"Here are the users details by ID "<<std::endl;
        std::cout<<"ID "<<it->getID()<<std::endl;
        std::cout<<"First Name "<<it->getFirst_name()<<std::endl;
        std::cout<<"Last Name "<<it->getLast_name()<<std::endl;
        std::cout<<"Date of Birth "<<it->getDate_of_birth()<<std::endl;
        std::cout<<"Gender "<<it->getGender()<<std::endl;
        std::cout<<"Music Preferences "<<it->getMusic_Preferences()<<std::endl;
    }
    if (user_choice == "Silver" || user_choice == "S" || user_choice == "silver" || user_choice == "s") {
        auto it = std::find_if(Silver_users.begin(),Silver_users.end(),Silver::Finder(ID));
        std::cout<<"Here are the users details by ID "<<std::endl;
        std::cout<<"ID "<<it->getID()<<std::endl;
        std::cout<<"First Name "<<it->getFirst_name()<<std::endl;
        std::cout<<"Last Name "<<it->getLast_name()<<std::endl;
        std::cout<<"Date of Birth "<<it->getDate_of_birth()<<std::endl;
        std::cout<<"Gender "<<it->getGender()<<std::endl;
        std::cout<<"Music Preferences "<<it->getMusic_Preferences()<<std::endl;
    }
    if(user_choice == "Gold" || user_choice == "G" || user_choice == "gold" || user_choice == "g")
    {
        auto it = std::find_if(Gold_users.begin(),Gold_users.end(),Gold::Finder(ID));
        std::cout<<"Here are the users details by ID "<<std::endl;
        std::cout<<"ID "<<it->getID()<<std::endl;
        std::cout<<"First Name "<<it->getFirst_name()<<std::endl;
        std::cout<<"Last Name "<<it->getLast_name()<<std::endl;
        std::cout<<"Date of Birth "<<it->getDate_of_birth()<<std::endl;
        std::cout<<"Gender "<<it->getGender()<<std::endl;
        std::cout<<"Music Preferences "<<it->getMusic_Preferences()<<std::endl;

    }

}
void User_inventory::Display_all_users(std::string user_choice) {
    if (user_choice == "Free" || user_choice == "F" || user_choice == "free" || user_choice == "f") {
        for (std::vector<Free>::iterator it = Free_users.begin(); it != Free_users.end(); it++)
        {
            std::cout<<"ID "<<it->getID()<<std::endl;
            std::cout<<"First Name "<<it->getFirst_name()<<std::endl;
            std::cout<<"Last Name "<<it->getLast_name()<<std::endl;
            std::cout<<"Date of Birth "<<it->getDate_of_birth()<<std::endl;
            std::cout<<"Gender "<<it->getGender()<<std::endl;
            std::cout<<"Music Preferences "<<it->getMusic_Preferences()<<std::endl;
        }
    }
    if (user_choice == "Silver" || user_choice == "S" || user_choice == "silver" || user_choice == "s")
    {
        for (std::vector<Silver>::iterator it = Silver_users.begin(); it != Silver_users.end(); it++)
        {
            std::cout<<"ID "<<it->getID()<<std::endl;
            std::cout<<"First Name "<<it->getFirst_name()<<std::endl;
            std::cout<<"Last Name "<<it->getLast_name()<<std::endl;
            std::cout<<"Date of Birth "<<it->getDate_of_birth()<<std::endl;
            std::cout<<"Gender "<<it->getGender()<<std::endl;
            std::cout<<"Music Preferences "<<it->getMusic_Preferences()<<std::endl;
        }
    }
    if(user_choice == "Gold" || user_choice == "G" || user_choice == "gold" || user_choice == "g")
    {
        for (std::vector<Gold>::iterator it = Gold_users.begin(); it != Gold_users.end(); it++)
        {
            std::cout<<"ID "<<it->getID()<<std::endl;
            std::cout<<"First Name "<<it->getFirst_name()<<std::endl;
            std::cout<<"Last Name "<<it->getLast_name()<<std::endl;
            std::cout<<"Date of Birth "<<it->getDate_of_birth()<<std::endl;
            std::cout<<"Gender "<<it->getGender()<<std::endl;
            std::cout<<"Music Preferences "<<it->getMusic_Preferences()<<std::endl;
        }
    }

}

void User_inventory::add_users_to_text_file(std::string user_choice)
{
    std::string inputFile = "Users.txt";
    std::string line;
    std::ofstream myStream(inputFile,std::ios::app);
    if(myStream.is_open())
    {
        std:: cout<<"This file is open: ";
    }
    if (user_choice == "Free" || user_choice == "F" || user_choice == "free" || user_choice == "f")
    {
            unsigned int size=Free_users.size();
            for (unsigned int i=0;i<size;i++)
            {
                myStream<<Free_users[i].getID()<<" ";
                myStream<<Free_users[i].getFirst_name()<<" ";
                myStream<<Free_users[i].getLast_name()<<" ";
                myStream<<Free_users[i].getDate_of_birth()<<" ";
                myStream<<Free_users[i].getGender()<<" ";
                myStream<<Free_users[i].getMusic_Preferences()<<" ";
                myStream<<Free_users[i].getMonthlyfee()<<" ";
                myStream<<Free_users[i].getPaymentdetails()<<std::endl;
            }
    }
    if (user_choice == "Silver" || user_choice == "S" || user_choice == "silver" || user_choice == "s")
    {
        unsigned int size=Silver_users.size();
        for (unsigned int i=0;i<size;i++)
        {
            myStream<<Silver_users[i].getID()<<" ";
            myStream<<Silver_users[i].getFirst_name()<<" ";
            myStream<<Silver_users[i].getLast_name()<<" ";
            myStream<<Silver_users[i].getDate_of_birth()<<" ";
            myStream<<Silver_users[i].getGender()<<" ";
            myStream<<Silver_users[i].getMusic_Preferences()<<" ";
            myStream<<Silver_users[i].getMonthlyfee()<<" ";
            myStream<<Silver_users[i].getPaymentdetails()<<std::endl;
        }
    }
    if(user_choice == "Gold" || user_choice == "G" || user_choice == "gold" || user_choice == "g")
    {
        unsigned int size=Gold_users.size();
        for (unsigned int i=0;i<size;i++)
        {
            myStream<<Gold_users[i].getID()<<" ";
            myStream<<Gold_users[i].getFirst_name()<<" ";
            myStream<<Gold_users[i].getLast_name()<<" ";
            myStream<<Gold_users[i].getDate_of_birth()<<" ";
            myStream<<Gold_users[i].getGender()<<" ";
            myStream<<Gold_users[i].getMusic_Preferences()<<" ";
            myStream<<Gold_users[i].getMonthlyfee()<<" ";
            myStream<<Gold_users[i].getPaymentdetails()<<std::endl;
        }
    }
}

