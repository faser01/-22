#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;



void showArr(int array[], int length);

int swapEl(int array[], int length);

void mult(int& refnum, int num1);

int main() {
	setlocale(LC_ALL, "Russian");


	//Задача 1
	cout << "Задача 1\nИзначальный массив: ";
	int swapArr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	showArr(swapArr, 10);
	swapEl(swapArr, 10);
	cout << "Итоговый массив: ";
	showArr(swapArr, 10);

	//Задача 2
	cout << "Задача 2\nВведите число: ";
	int n, multNum;
	int& refn = n;
	cin >> n;
	cout << "Введите степень в которую будем возводить ваше число: ";
	cin >> multNum;
	cout << "Число " << n << " в степени " << multNum << " = ";
	mult(refn, multNum);
	cout << n << endl;



	return 0;
}


//Задача 1
int swapEl(int array[], int length) {
	swap(*(array), *(array + 1));
	swap(*(array + 2), *(array + 3));
	swap(*(array + 4), *(array + 5));
	swap(*(array + 6), *(array + 7));
	swap(*(array + 8), *(array + 9));
	return array[length];
}

//Задача 2
void mult(int& refnum, int num1) {
	int n = refnum;
	for (int i = 1; i < num1; i++)
		refnum *= n;

}


void showArr(int array[], int length) {
	cout << "\n[";
	for (int i = 0; i < length; i++) {
		cout << array[i] << ", ";
	}
	cout << "\b\b]\n\n";
}