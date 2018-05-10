//Author: Sunny Vang
#include<string>
#include<iostream>
#include"fighting.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

bool fighting::randomChance(std::string monsterName)
{
    srand (time(NULL));
    
    int winPercentage = 0;

    winPercentage = rand()%100 + 1;

    if(monsterName == "Dragon" || monsterName == "BlackKnight")
    {
        if( winPercentage <= 30)
        {
            return true;
        }
        else if( winPercentage > 30 && winPercentage != 77)
        {
            return false;
        }
    }
    else
    {
        if( winPercentage >= 50)
        {   
            return true;
        }
        else
        {
            return false;
        }
    }

} 

bool fighting::fightOrRun(std::string input)
{
    if(input == "1")
    {
        return true;
    }
    else
    {
        return false;
    }
}

void fighting::encounterMonster(std::string monsterName)
{   
    std::string input = " ";

    bool result = false;
    std::cout<<"You have encountered a "<<monsterName<<".\n";
    std::cout<<"Would you like to fight the "<<monsterName<<" or run?\n";
    std::cin>>input;//if 1 then fight , if 2 then run
    result = fightOrRun(input);
    if( result == true)
    {
        result = randomChance(monsterName);
        
        if(result == true)
        {
            std::cout<<"You have defeated the "<<monsterName<<std::endl;
        }
        else
        {
            std::cout<<"You lost the battle and lose 1 health\n";
        }
        
    }
    else
    {
        std::cout<<"You ran away from the "<<monsterName<<" and escaped.\n";
    }

}


std::string fighting::stayOrGo()
{
    std::string input = " ";
    std::cout<<"Please enter a number:\n";
    std::cout<<"Would you like to (1) Stay or (2) Leave this location?\n";
    std::cin>>input;
    return input;

}
