//Author: Sunny Vang
#include<iostream>
#include<vector>
#include <string>
#include "fighting.h"
#include "forest.h"
#include "dungeon.h"
#include "castle.h"

using namespace std;

int main()
{
   
    string input = " ";

    cout<<"Welcome to Adventure Quest! \n\nType a number:\n";
    cout<<"(1) Go through the tutorial (2) get straight into the game?";
    cin>>input;


    do
    {
        if(input == " ")
        {
            cout<<"Where would you like to go?\n Type a number:";
            cout<<"(1) Town (2) Forest (3) Dungeon (4) Castle(5) See more options\n";
            cin>>input;
        }

        if(input == "5")
        {
            cout<<"(6) Save your game (7) Quit the game\n";
        }

        if(input == "1")//town
        {
            cout<<"You have reached town. What would you like to do?\n";
            cout<<"Type a number: (1) Go to the Shop (2) Sleep at the Inn\n";
            cin>>input;//if 1, go to shop, if 2, go to inn
            if(input == "1")
            {
                //shop function
            }
            else
            {
                //sleep at inn function
            }
            
        }
        else if(input == "2")//-------------forest
        {   
            Forest forestArea;

            forestArea.getMonsters("Goblin", "Wolf", "BlackBear");

            cout<<"You have arrived at the Forest.\n";
            do
            {
                string enemy = " ";

                enemy = forestArea.randomMonster();

                forestArea.encounterMonster(enemy);
                input = forestArea.stayOrGo();

                //winorlose function  they will gain money, etx...
            }while(input != "2");

            //if win then gain experience, and money----if lose then lose health
            //then after fight, ask if they would like to stay or leave

        }
        else if(input == "3")//dungeon
        {
            Dungeon dungeonArea;
            dungeonArea.getMonsters("Zombie", "Slime", "Dragon");
            
            cout<<"You have arrived at the Dungeon.\n";
            do
            {
                string enemy = " ";
                enemy = dungeonArea.randomMonster();
                dungeonArea.encounterMonster(enemy);
                input = dungeonArea.stayOrGo();

            }while(input != "2");
            //must be level 5 to fight dragon
            //stats dictate win rate for all fights
        }
        else if(input == "4")//castle
        {
            Castle castleArea;
            castleArea.getMonsters("Guard", "Magician", "BlackKnight");
            cout<<"You have arrived at the Castle\n";
            do
            {
                string enemy = " ";
                enemy = castleArea.randomMonster();
                castleArea.encounterMonster(enemy);
                input = castleArea.stayOrGo();

            }while(input != "2");
            
        }
        else if(input == "6")//saving
        {
            //save stats, level, money, potions, bosses defeated
        }
        

        

//this do while loop will be used to go to places
    }while(input != "7");

    return 0;
}

