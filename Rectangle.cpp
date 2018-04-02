#include "Rectangle.h"
using namespace std;

template<class item, class item2>
Rectangle<item, item2>::Rectangle()
{
    rectangleCount++;
    rectangleLength = 0;
    rectangleWidth = 0;
}

template<class item, class item2>
Rectangle<item, item2>::Rectangle(item w, item2 l)
{
    if(w < 0)
    {
        throw ErrorAllocatingLengthOrWidth(w);
    }
    else if(l < 0)
    {
         throw ErrorAllocatingLengthOrWidth(l);
    }
    else
    {
        rectangleCount++;
        rectangleLength = l;
        rectangleWidth = w;
    }
}

template<class item, class item2>
int Rectangle<item, item2>::getRectangleCount() const
{
    return rectangleCount;
}

template<class item, class item2>
item Rectangle<item, item2>::getRectangleWidth() const
{
    return rectangleWidth;
}

template<class item, class item2>
item Rectangle<item, item2>::getRectangleLength() const
{
    return rectangleLength;
}

template<class item, class item2>
void Rectangle<item, item2>::setRectangleWidth(item w)
{
    rectangleWidth = w;
}

template<class item, class item2>
void Rectangle<item, item2>::setRectangleLength(item l)
{
    rectangleLength = l;
}
