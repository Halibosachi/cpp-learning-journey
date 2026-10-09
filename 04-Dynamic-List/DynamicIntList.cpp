#include "DynamicIntList.h"
#include <iostream>

DynamicIntList::DynamicIntList(int cap){
    capacity = cap;
    size = 0;
    data = new int[capacity];
}

DynamicIntList::~DynamicIntList(){
    delete[] data;
}

bool DynamicIntList::add(int value){
    if(size == capacity){
        return false;
    } else {
        data[size] = value;
        size++;
        return true;
    }
}

bool DynamicIntList::remove(int index){
    if(index < 0 || index >= size){
        return false;
    } else {

        for(int i = index; i < size - 1;i++){
            data[i] = data[i+1];
        }
        size--;
        return true;
    }
}

int DynamicIntList::get(int index) const{
    return data[index];
}

void DynamicIntList::print() const{
    for(int i = 0; i < size; i++){
        std::cout<<data[i]<<" ";
    }
    std::cout<<"\n";
}
