#pragma once
#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;        
    int capacity;     
    int size;     
    void resize();

public:
    DynamicArray();  
    ~DynamicArray();  

    void add(int value);        
    void insert(int index, int value);  
    void remove(int index);      
    int linearSearch(int value);  
    void sort();                
    void display();              
    int getSize();               
};
