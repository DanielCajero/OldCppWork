#ifndef VectorOfObjects_H
#define VectorOfObjects_H

#include "Circle.h"
#include "Rectangle.h"
using namespace std;

template<class item>
class ArrayOfObjects
{
public:
    
    ArrayOfObjects();
    
    ArrayOfObjects(int);
    
    item &operator[] (const int &);
    
    class ErrorAllocatingPointerMemory
    {
    private:
        int value;
    public:
        
        ErrorAllocatingPointerMemory(int v)
        {
            value = v;
        }
        
        int getValue()
        {
            return value;
        }
    };
    
private:
    item *ptrToArrayOfObjects;
    int  qtyOfObjects;
};

#include "VectorOfObjects.cpp"

#endif 
