#ifndef Circle_H
#define Circle_H

using namespace std;

template <class item>
class Circle
{
public:
    
    Circle();
    
    Circle(item);
    
    int getCircleCount() const;
    item getCircleRadius() const;
    
    void setCircleRadius(item);
    
    class ErrorAllocatingMemory
    {
    private:
        int value;
    public:
        
        ErrorAllocatingMemory(item v)
        {
            value = v;
        }
        
        item getValue() const
        {
            return value;
        }
        
    };
    
private:
    
    item circleRadius;
    static int circleCount;
};

template<class item>
int Circle<item>::circleCount = 0;

#include "Circle.cpp"

#endif
