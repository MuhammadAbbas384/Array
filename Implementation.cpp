#include "DynamicArray.h"


DynamicArray::DynamicArray() 
{
    capacity = 10; 
    size = 0;     
    arr = new int[capacity];
}

DynamicArray::~DynamicArray()
{
    delete[] arr;
}

void DynamicArray::resize() 
{
    capacity *= 2; 
    int* newArr = new int[capacity]; 
    for (int i = 0; i < size; i++) 
    {
        newArr[i] = arr[i];
    }

    delete[] arr;  
    arr = newArr;  
}

void DynamicArray::add(int value) 
{
    if (size == capacity) 
    {
        resize(); 
    }
    arr[size++] = value;
}


void DynamicArray::insert(int index, int value) 
{
    if (index < 0 || index > size) 
    {
        cout << "Index out of bounds!" << endl;
        return;
    }
    if (size == capacity) 
    {
        resize(); 
    }

   
    for (int i = size; i > index; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = value; 
    size++;
}

void DynamicArray::remove(int index) 
{
    if (index < 0 || index >= size) 
    {
        cout << "Index out of bounds!" << endl;
        return;
    }

    for (int i = index; i < size - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    size--;
}

int DynamicArray::linearSearch(int value) 
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == value) 
        {
            return i;  
        }
    }
    return -1;  
}


void DynamicArray::sort() 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void DynamicArray::display() 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int DynamicArray::getSize() 
{
    return size;
}
