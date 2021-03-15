#ifndef HOUSE_H
#define HOUSE_H


#include <iostream>
#include <string>
using namespace std;


class House
{
    private:
        int numStories;
        int numWindows;
        string color;

    public:
        House();
        House(int numStories, int numWindows, string color);
        ~House();

        int getNumStories() const;
        void setNumStories(int numStories);


        int getNumWindows() const;
        void setNumWindows(int numWindows);


        string getColor() const;
        void setColor(string color);

        void printHouseData() const;
        
    
};

#endif // !HOUSE_H