#include <iostream>
#include<string>

using std::string;

class Vehicle
{
protected:
    string manufacturer;
    int year;
    string color;

public:
    string getManufacturer()
    {
        return manufacturer;
    }

    void setManufacturer(string value)
    {
        this->manufacturer = value;
    }

    int getYear()
    {
        return year;
    }

    void setYear(int value)
    {
        this->year = value;
    }

    string getColor()
    {
        return this->color;
    }

    void setColor(string value)
    {
        this->color = value;
    }

    Vehicle()
    {
        std::cout << "\nAn instance has been derived from Vehicle." << std::endl;
    }

    Vehicle(string manufacturer, int year, string color)
        : Vehicle()
    {
        std::cout << "\nAn instance with full parameters has been derived from Vehicle." << std::endl;

        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }

    virtual void start()
    {
        std::cout << "Vehicle has been started." << std::endl;
    }

    virtual void stop()
    {
        std::cout << "Vehicle has been stopped." << std::endl;
    }

    virtual void drive()
    {
        std::cout << "Vehicle is being driven." << std::endl;
    }

    virtual string toString(){
        return manufacturer + " - " + std::to_string(year) + " - " + color;
    }
};

class Car : public Vehicle
{
public:
    Car()
    {
        std::cout << "\nAn instance has been derived from Car." << std::endl;
    }
    Car(string manufacturer, int year, string color)
        : Vehicle(manufacturer, year, color)
    {
        std::cout << "\nAn instance with full parameters has been derived from Car." << std::endl;
    }
    void openSunroof()
    {
        std::cout << "The sunroof has been opened. " << std::endl;
    }

    void drive() override
    {
        std::cout << "The car manufacturer by " << this->manufacturer << " is being driven." << std::endl;
    }
};

class Bus : public Vehicle
{
public:
    Bus(string manufacturer, int year, string color)
        : Vehicle(manufacturer, year, color)
    {
        std::cout << "\nAn instance with full parameters has been created from Bus class." << std::endl;
    }
    void scheduling()
    {
        std::cout << "Scheduled." << std::endl;
    }

    void drive() override
    {
        std::cout << "The bus manufacturer by " << this->manufacturer << " is being driven." << std::endl;
    }
};

class SchoolBus : public Bus
{
public:
    SchoolBus(string manufacturer, int year, string color)
        : Bus(manufacturer, year, color)
    {
        std::cout << "\nAn instance with full parameters has been derived from SchoolBus." << std::endl;
    }

    void getFare()
    {
        std::cout << "getFare has been called." << std::endl;
    }

    void drive() override
    {
        std::cout << "The bus manufacturer by " << this->manufacturer << " is being driven." << std::endl;
    }
};

int main()
{
    Vehicle item2 = Vehicle("Skoda", 2019, "White");
    std::cout << "Vehicle " << item2.getManufacturer() << std::endl;

    Car item1 = Car();
    item1.setManufacturer("TOGG"); // set - yazılması
    item1.setYear(2023);
    item1.setColor("Red");
    
    std::cout << item1.toString() << std::endl;
    item1.openSunroof();

    Car item3 = Car("Opel", 2020, "Black");
    std::cout << item3.toString() << std::endl;
    item3.openSunroof();

    Bus item4 = Bus("Anadolu Isuzu", 2016, "Red");
    std::cout << item4.toString() << std::endl;
    item4.scheduling();

    SchoolBus item5 = SchoolBus("Isuzu", 2015, "Yellow");
    std::cout << item5.toString() << std::endl;
    
    item5.scheduling();
    item5.getFare();

    item1.drive();
    item1.stop();
   
    item3.drive();
    item3.stop();
    
    item4.drive();
    item4.stop();
    
    item5.drive();
    item5.stop();

    char c = getchar();
    return 0;
}