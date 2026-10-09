#ifndef DYNAMICINTLIST_H
#define DYNAMICINTLIST_H

class DynamicIntList{
    private:
        int* data;
        int capacity;
        int size;
    public:
        DynamicIntList(int cap);
        ~DynamicIntList();
        bool add(int value);
        bool remove(int index);
        int get(int index) const;
        void print() const;    
};

#endif