/*
    Created by: Attila Soltész
    
*/

#include<iostream>
#include <string>
#include "House.h"
using namespace std;


int main()
{
    House myHouse;
    House yourHouse;

    House otherHouse(6, 8, "grey");
    

    myHouse.printHouseData();

    myHouse.setNumStories(10);
    myHouse.setNumWindows(8);
    myHouse.setColor("blue");

    yourHouse.setNumStories(5);
    yourHouse.setNumWindows(9);
    yourHouse.setColor("red");

    myHouse.printHouseData();
    yourHouse.printHouseData();
    otherHouse.printHouseData();

    return 0;
}