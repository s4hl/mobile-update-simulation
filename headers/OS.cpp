#include "OS.hpp"

OS::OS(){
    this->version = 0;
    this->name = "";
}

OS::OS(int version, string name){
    this->version = version;
    this->name = name;
}

void OS::info(){
    cout<<"OS Name: "<<this->name<<"\n";
    cout<<"OS Version: "<<this->version<<"\n";
}

void OS::update(string name){
    this->version += 1;
    this->name = name;
}