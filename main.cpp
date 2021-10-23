#include <iostream>
#include "headers/Mobile.hpp"


void check_for_update(Mobile m){
    int option;
    cout<<"Press 1 to update your phone: ";
    cin>>option;

    while (option==1){
        cout<<m.update();
        m.print();
        cout<<"Press 1 to update your phone: ";
        cin>>option;
    }
}

int main() {
    // Mobile m = Mobile();
    // m.print();

    OS android = OS(11, "Android R");
    Mobile m2 = Mobile("Poco", "X3 Pro", 18999, android);
    m2.print();

    check_for_update(m2);

    return 0;
}

