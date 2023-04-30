//Facade Design Pattern
#include <iostream>
using namespace std;

class Car
{
    public:
    void accelerate() {
        cout << "Speed Increased" << endl;
    }
    
    void applyBreaks() {
        cout << "Speed decreased" << endl;
    }
    
    void turnOnAC() {
        cout << "AC Turned on" << endl;
    }
};

class Facade
{
    Car *carObjPtr;
    public:
    Facade() {
        carObjPtr = new Car; 
    }
    void accelerate() {
        carObjPtr->accelerate();
    }
    
    void applyBreaks() {
        carObjPtr->applyBreaks();
    }
    
    void turnOnAC() {
       carObjPtr->turnOnAC() ;
    }
    
    Car* getCarObj() {
        return carObjPtr;
    }
};

int main()
{
    Facade client;
    client.accelerate();
    client.applyBreaks();
    client.turnOnAC();
    return 0;
}