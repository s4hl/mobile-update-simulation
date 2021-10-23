#include "Mobile.hpp"
#include <windows.h>
#include <thread>

Mobile::Mobile(){
    this->brand = "";
    this->name = "";
    this->price = 0;
    this->features = 0;
    this->os = OS();
}

Mobile::Mobile(string brand, string name, int price, OS os) {
    this->brand = brand;
    this->name = name;
    this->price = price;
    this->features = 15;
    this->os = os;
}

string Mobile::update(){
    cout<<"Updating...\n";
    Sleep(10000);
    this->os.update("New Android");
    this->features += 5;
    return "Your Phone has been updated to the latest version. Enjoy new features.\n";
}

void Mobile::print() {
    cout<<"Phone: "<<brand<<" "<<name<<"\n";
    cout<<"Features: "<<features<<"\n";
    cout<<"Price: "<<price<<" INR\n";
    this->os.info();
    cout<<"\n";
}

