#include "arrayWrapper.h"
#include <iostream>

ArrayWrapper::ArrayWrapper() : arr1(nullptr), arr2(nullptr) {};

// Big Four
ArrayWrapper::ArrayWrapper(const int* arr1, const int* arr2, int size1, int size2) {
    if (arr1 == nullptr)
    {
        return;
    }

    setArr(ArrId::ARR1, arr1, size1);
    setArr(ArrId::ARR2, arr2, size2);
}

ArrayWrapper::ArrayWrapper(const ArrayWrapper& other) {
    copyFrom(other);
}

ArrayWrapper& ArrayWrapper::operator=(const ArrayWrapper& other) {
    if (this != &other)
    {
        free();
        copyFrom(other);
    }
    return *this;
}

ArrayWrapper::~ArrayWrapper() {
    free();
}





void ArrayWrapper::setArr(ArrId arrId, const int* arr, int size) {
    if (arr == nullptr) {
        return;
    }

    if (arrId == ArrId::ARR1) {
        if (arr1 == arr)
        {
            return;
        }


        size1 = size;
        arr1 = new int[size1];

        for (int i = 0; i < size1; i++)
        {
            arr1[i] = arr[i];
        }

        return;
    }

    if (arr2 == arr)
    {
        return;
    }

    size2 = size;
    arr2 = new int[size2];

    for (int i = 0; i < size2; i++)
    {
        arr2[i] = arr[i];
    }
}

int* ArrayWrapper::getArr(ArrId arrId) const {
    if (arrId == ArrId::ARR1) {
        return arr1;
    }

    return arr2;
}

void ArrayWrapper::copyFrom(const ArrayWrapper& other) {
    //si la clase tuviera otros atributos, tambien podriamos usar sus setters aqui
    setArr(ArrId::ARR1, other.arr1, other.size1);
    setArr(ArrId::ARR2, other.arr2, other.size2);
}

void ArrayWrapper::free() {
    delete[] arr1;
    delete[] arr2;

    arr1 = nullptr;
    arr2 = nullptr;
    size1 = 0, size2 = 0;
}

void ArrayWrapper::addElement(ArrId arrId, int n) {
    if (arrId == ArrId::ARR1)
    {
        size1++;
        int* aux = new int[size1];
        for (int i = 0; i < size1 - 1; i++)
        {
            aux[i] = arr1[i];
        }
        aux[size1 - 1] = n;

        delete[] arr1;
        arr1 = aux;

        return;
    }

    size2++;
    int* aux = new int[size2];
    for (int i = 0; i < size2 - 1; i++)
    {
        aux[i] = arr2[i];
    }
    aux[size2 - 1] = n;

    delete[] arr2;
    arr2 = aux;
}

void ArrayWrapper::deleteElement(ArrId arrId, int index) {
    if (arrId == ArrId::ARR1)
    {
        if (index < 0 || index >= size1)
        {
            return;
        }

        int* aux = new int[size1 - 1];
        for (int i = 0; i < size1; i++)
        {
            if (i == index)
            {
                continue;
            }

            aux[i] = arr1[i];
        }

        size1--;

        delete[] arr1;
        arr1 = aux;

        return;
    }

    if (index < 0 || index >= size2)
    {
        return;
    }

    int* aux = new int[size2 - 1];
    for (int i = 0; i < size2; i++)
    {
        if (i == index)
        {
            continue;
        }

        aux[i] = arr2[i];
    }

    size2--;

    delete[] arr2;
    arr2 = aux;
}

//ya no es necesaria
void ArrayWrapper::matchSizes() {
    if (size1 != size2) {
        if (size1 < size2) {
            ArrId arrId = ArrId::ARR1;
            int diff = size2 - size1;

            for (int i = 0; i < diff; i++)
            {
                addElement(arrId, 0);
            }
        }
        else {
            ArrId arrId = ArrId::ARR2;
            int diff = size1 - size2;

            for (int i = 0; i < diff; i++)
            {
                addElement(arrId, 0);
            }
        }
    }
}

int* ArrayWrapper::sum() {
    int sumSize = (size1 > size2) ? size1 : size2;
    int* sum = new[sumSize];
    
    for (int i = 0; i < sumSize; i++)
    {
        sum[i] = ((i < size1) ? arr1[i] : (0)) + ((i < size2) ? arr2[i] : 0);
    }

    return sum;
}

int* ArrayWrapper::rest() {
    int restSize = (size > size2) ? size1 : size2;
    int* rest = new[restSize];

    for (int i = 0; i < restSize; i++)
    {
        rest[i] = ((i < size1) ? arr1[i] : (0)) - ((i < size2) ? arr2[i] : 0);
    }

    return rest;
}
