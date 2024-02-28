#include<iostream>
using namespace std;

class Smart_Geyser {
public:
    void turnOn(){
        cout<< "Smart Geyser is turn on."<< endl;
    }
};

class Environment_Sensor:public Smart_Geyser {
    public:
    void senseEnvironment(){
        cout<<"Sensors sense the temperature and humidity."<<endl;
    }
};

class Water_Heater : public Smart_Geyser{
public:
    void waterHeater(){
        cout<<"Heater heats the water."<<endl;
    }
};

class Home_Owner {
public:
    void getUpFromBed(){
        cout<<"Owner gets from the bed."<<endl;
    }
};
