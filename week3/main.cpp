#include"Math.h"
#include <iostream>
#include<stdio.h>

int main()
{

	Math math;

	//add 2 numbers
	int sumTwoNumbers = math.Add(1, 2);
	std::cout << sumTwoNumbers << endl;

	int sum3numbers = math.Add(3, 4, 5);
	std::cout << sum3numbers << endl;

	int sum2double = math.Add(3.5, 1.2);
	std::cout << sum2double << endl;

	int sum3double = math.Add(4.5, 6.2, 8.9);
	std::cout << sum3double << endl;

	int mul2numbers = math.Mul(3, 4);
	std::cout << mul2numbers << endl;

	int mul3numbers = math.Mul(5, 6, 2);
	std::cout << mul3numbers << endl;

	int mul2double = math.Mul(3.4, 7.6);
	std::cout << mul2double << endl;

	int mul3double = math.Mul(3.4, 5.3, 6.5);
	std::cout << mul3double << endl;
	
	int sum_list = math.Add(4,2,3,4,4);
	std::cout << sum_list << endl;
	char p[] = "dd";
	char t[] = "kk";


	const char* sumachar = math.Add(p,t);
	std::cout << sumachar << endl;

	
}