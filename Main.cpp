#include <iostream>
#include "DynamicArray.h"

using namespace std;

int main() 
{
    DynamicArray arr;

    arr.add(10);
    arr.add(20);
    arr.add(30);
    arr.add(40);

    cout << "Array after adding elements: ";
    arr.display();

    arr.insert(2, 25);
    cout << "Array after inserting 25 at index 2: ";
    arr.display();

    arr.remove(1);
    cout << "Array after removing element at index 1: ";
    arr.display();

    int index = arr.linearSearch(25);
    if (index != -1) 
    {
        cout << "Element 25 found at index: " << index << endl;
    }
    else 
    {
        cout << "Element 25 not found" << endl;
    }

    arr.sort();
    cout << "Array after sorting: ";
    arr.display();

    return 0;
}
