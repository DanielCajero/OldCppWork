#include "Circle.h"
using namespace std;

template<class item>
Circle<item>::Circle()
{
    circleCount++;
    circleRadius = 0;
}

template<class item>
Circle<item>::Circle(item radius)
{
    if(radius >= 0)
    {
        circleCount++;
        circleRadius = radius;
    }
    else
    {
        throw ErrorAllocatingMemory(radius);
    }
}

template<class item>
int Circle<item>::getCircleCount() const
{
    return circleCount;
}

template<class item>
item Circle<item>::getCircleRadius() const
{
    return circleRadius;
}

template<class item>
void Circle<item>::setCircleRadius(item radius)
{
    circleRadius = radius;
}
