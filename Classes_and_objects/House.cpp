#include "House.h"

        int House::getNumStories() const {
	        return this->numStories;
        }
        void House::setNumStories(int numStories) {
	        this->numStories = numStories;
        }


        int House::getNumWindows() const {
        	return this->numWindows;
        }
        void House::setNumWindows(int numWindows) {
        	this->numWindows = numWindows;
        }


        string House::getColor() const {
        	return this->color;
        }
        void House::setColor(string color) {
        	this->color = color;
        }

        void House::printHouseData() const {

            std::cout << "The house is " << this->color << " and stories: " << this->numStories << " and windows: " << this->numWindows << std::endl;

        }