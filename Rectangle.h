#ifndef Rectangle_H
#define Rectangle_H

using namespace std;

template <class item, class item2>
class Rectangle
{
public:
    
    Rectangle();
    
    Rectangle(item, item2);
    
    int getRectangleCount() const;
    item getRectangleWidth() const;
    item getRectangleLength() const;
    
    void setRectangleWidth(item);
    void setRectangleLength(item);
    
    class ErrorAllocatingLengthOrWidth
    {
    private:
        item value;
    public:
        
        ErrorAllocatingLengthOrWidth(int v)
        {
            value = v;
        }
        
        int getValue() const
        {
            return value;
        }
        
    };
    
private:
    
    item rectangleWidth;
    item2 rectangleLength;
    static int rectangleCount;
};

template<class item, class item2>
int Rectangle<item, item2>::rectangleCount = 0;

#include "Rectangle.cpp"

#endif
