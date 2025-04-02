#pragma once

enum class ArrId { ARR1 = 1, ARR2 = 2 };

class ArrayWrapper
{
private:
    int* arr1;
    int* arr2;
    int size1;
    int size2;

public:
    ArrayWrapper();

    //Big four
    ArrayWrapper(const int*, const int*, int, int);
    ArrayWrapper(const ArrayWrapper&);
    ArrayWrapper& operator=(const ArrayWrapper&);
    ~ArrayWrapper();

    int* getArr(ArrId) const;
    void setArr(ArrId, const int*, int);

    void addElement(ArrId, int);
    void deleteElement(ArrId, int);

    int* rest();
    int* sum();
    void matchSizes();

    void copyFrom(const ArrayWrapper&);
    void free();
};
