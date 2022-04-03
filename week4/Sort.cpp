#include"Sort.h"

Sort::Sort(int* vector, int num) :arr(vector), number(num) {
    arr = new int[number];
    for (int i = 0; i < number; i++) {
        this->arr[i] = arr[i];
    }

}

Sort::Sort(int number, int nr_1, int nr_2, int nr_3, int nr_4, int nr_5) :number(number), nr_1(nr_1), nr_2(nr_2), nr_3(nr_3), nr_4(nr_4), nr_5(nr_5) {

    arr = new int[number];
    for (int i = 0; i <= number; i++) {
        this->arr[i] = arr[i];
    }
}


Sort::Sort(int number, ...) : number(number) {
    arr = new int[number];
    va_list args;
    va_start(args, number);

    for (int i = 0; i <= number; i++) {
        arr[i] = va_arg(args, int);
    }
    va_end(args);
}

Sort::Sort(int number,int maxim, int minim):number(number), maxim(maxim),minim(minim)
{
    arr = new int[number];
    for (int i = 0; i <= number; i++) {
        this->arr[i] = rand() % minim + maxim;
    }

}
Sort::Sort(char* vector) {
    
    int n = 0;
    int p = 1;
    int j = 0;
    int caracter=0;
    for (int i = 0; i <= strlen(vector); i++) {
        if (vector[i] == ',') {
            caracter++;
        }
        arr = new int[caracter+1];
    for (int i = 0; i <= strlen(vector); i++) {
        if (vector[i] != ',') {
            n = n * p + int(vector[i]);
            p = p * 10;

        }
        else
            j++;
        this->arr[j] = n;

    }
    

}


//int Sort:: GetElementsCount() {
//  
//
//}

//int  GetElementFromIndex(int index);

void Sort::InsertSort(bool ascendent) {
    for (int step = 1; step < number; step++) {
        int key = arr[step];
        int j = step - 1;

        
        while (key < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }

}

void Sort::QuickSort(bool ascendent)
{
}



void Sort::BubbleSort(bool ascendent) {
    int temp;
    for (int i = 0; i < number; i++) {
        for (int j = i + 1; j < number; j++)
        {
            if (arr[j] < arr[i]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }

}

void Sort::Print() {
    for (int i = 0; i < number; i++)
        std::cout << arr[i] << std::endl;

}

