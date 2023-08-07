#include<iostream>
using std::string;

class Vehicle{
private:
    string manufacturer;

public: 
    string getManufacturer(){
        return manufacturer;
    }

    void setManufacturer(string value){
        manufacturer = value;
    }
};

int main(){
    Vehicle item1 = Vehicle();
    item1.setManufacturer("TOGG"); // set - yazılması 
    std::cout<< "Vehicle " << item1.getManufacturer() << std::endl;

    char c = getchar();
    return 0;
}