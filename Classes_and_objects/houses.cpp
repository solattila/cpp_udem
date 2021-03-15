/*
    Created by: Attila Soltész
    
*/

#include<iostream>
#include <string>
using namespace std;

class House
{
    private:
        int numStories;
        int numWindows;
        string color;

    public:
        int getNumStories() const {
	        return this->numStories;
        }
        void setNumStories(int numStories) {
	        this->numStories = numStories;
        }


        int getNumWindows() const {
        	return this->numWindows;
        }
        void setNumWindows(int numWindows) {
        	this->numWindows = numWindows;
        }


        string getColor() const {
        	return this->color;
        }
        void setColor(string color) {
        	this->color = color;
        }

        void printHouseData() const {

            std::cout << "The house is " << this->color << " and stories: " << this->numStories << " and windows: " << this->numWindows << std::endl;

        }
        
    
};



int main()
{
    House myHouse;
    House yourHouse;

    myHouse.setNumStories(2);
    myHouse.setNumWindows(6);
    myHouse.setColor("blue");

    yourHouse.setNumStories(3);
    yourHouse.setNumWindows(10);
    yourHouse.setColor("red");

    myHouse.printHouseData();
    yourHouse.printHouseData();

    return 0;
}