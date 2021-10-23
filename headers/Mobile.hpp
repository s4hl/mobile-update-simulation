#pragma once
#include <iostream>
#include <string>

#include "OS.hpp"

using namespace std;


class Mobile {
    
private:
    string brand;
    string name;
    int price;
    int features;
    OS os;

public:
    Mobile();
    Mobile(string brand, string name, int price, OS os);
    string update();
    void print();
};

#include "Mobile.cpp"
