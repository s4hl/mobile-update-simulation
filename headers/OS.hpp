#pragma once
#include <iostream>
#include <string>
using namespace std;

class OS{
private:
    int version;
    string name;
public:
    OS();
    OS(int version, string name);
    void info();
    void update(string name);
};

#include "OS.cpp"