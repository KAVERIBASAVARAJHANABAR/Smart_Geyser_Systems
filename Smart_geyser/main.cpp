int main(){
    Home_Owner owner;

    Environment_Sensor sensor;

    Water_Heater heater;

    owner.getUpFromBed();
    sensor.turnOn();
    sensor.senseEnvironment();
    heater.waterHeater();

    return 0;
}
