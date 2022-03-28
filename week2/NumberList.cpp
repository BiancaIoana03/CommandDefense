
#include "NumberList.h"

void NumberList::Init() {
	for (count = 0; count <= max; count++) {
		std::cin >> numbers[count];
	}
}
bool NumberList::Add(int x) {
	if (x >= 10)return false;
	else {
		numbers[max+1] = x;
		max++;
	}
}
void NumberList::Sort() {
	int aux, count2;
	for (count = 0; count <= max; count++)
		for (count2 = count + 1; count2 <= max; count2++)
			if (numbers[count] > numbers[count2])
			{
				aux = numbers[count];
				numbers[count] = numbers[count2];
				numbers[count2] = aux;
			}

}
void NumberList::Print() {
	for (count = 0; count <= max; count++)
		std::cout << numbers[count]<<' ';

}

