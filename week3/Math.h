#include <iostream>
#include<stdarg.h>
#include<cstdarg>
#include<cstring>
#include<Windows.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
class Math
{

public:
 
    static int suma;
    static int produs;
    static char* sumachar;
    static const char* result;
    static const char*c;

public:

    static int Add(int, int);

    static int Add(int, int, int);

    static int Add(double, double);

    static int Add(double, double, double);

    static int Mul(int, int);

    static int Mul(int, int, int);

    static int Mul(double, double);

    static int Mul(double, double, double);

    static int Add(int count, ...); // sums up a list of integers

    static const char* Add(const char*, const char*);

};
