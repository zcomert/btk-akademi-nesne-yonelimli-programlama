#include <iostream>
using std::string;

class Vehicle
{
private:
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

    Vehicle(string manufacturer, int year, string color) : Vehicle()
    {
        this->manufacturer = manufacturer;
        this->year = year;
        this->color = color;
    }
};

int main()
{
    Vehicle item1 = Vehicle();
    item1.setManufacturer("TOGG"); // set - yazılması
    std::cout << "Vehicle " << item1.getManufacturer() << std::endl;

    Vehicle item2 = Vehicle("Skoda",2019, "White");
    std::cout << "Vehicle " << item2.getManufacturer() << std::endl;

    char c = getchar();
    return 0;
}