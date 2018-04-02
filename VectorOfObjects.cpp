#include "VectorOfObjects.h"
using namespace std;

template <class item>
ArrayOfObjects<item>::ArrayOfObjects()
{
    ptrToArrayOfObjects =0;
    qtyOfObjects = 0;
}

template <class item>
ArrayOfObjects<item>::ArrayOfObjects(int arraySize)
{
    if(arraySize > 0)
    {
        qtyOfObjects = arraySize;
        ptrToArrayOfObjects = new item [arraySize];
    }
    else
    {
        throw ErrorAllocatingPointerMemory(arraySize);
    }
}

template <class item>
item & ArrayOfObjects<item>::operator[](const int &x)
{
    return ptrToArrayOfObjects[x];
}

