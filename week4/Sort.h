#include <iostream>
#include<stdarg.h>
#include<cstdarg>
#include<cstring>
#include<Windows.h>
class Sort

{
public:
    int maxim,minim, nr_1,nr_2,nr_3,nr_4,nr_5;
    int* arr;
    int number ;
    bool ascendent;
    char* vector;




public:

    Sort(int number,int num_1, int num_2, int num_3, int num_4, int num_5);
    Sort(int* vector, int num);
    Sort(int number, ...);
    Sort(int number, int maxim, int minim);
    Sort(char* vector);


    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();
   

    int  GetElementsCount();

    int  GetElementFromIndex(int index);


};
