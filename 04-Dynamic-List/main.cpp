#include <iostream>
#include "DynamicIntList.h"

int main() {

    DynamicIntList list(5);
    list.add(10);
    list.add(20);
    list.add(30);
    list.add(40);
    list.add(50);
    if(list.add(60)){
        std::cout<<"We won't be seeing this"<<'\n';
    } else {
        std::cout<<"Can't add list is full!"<<'\n';
    }
    list.print();
    list.remove(2);
    list.print();


    return 0;
}