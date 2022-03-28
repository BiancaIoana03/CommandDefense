#include<iostream>
#include<stdio.h>
#include "NumberList.h"

int main() {
	
	NumberList ob;
	ob.Init();
	ob.Add(4);
	ob.Sort();
	ob.Print();

	return 0;
}