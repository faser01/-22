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


	//������ 1
	cout << "������ 1\n����������� ������: ";
	int swapArr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	showArr(swapArr, 10);
	swapEl(swapArr, 10);
	cout << "�������� ������: ";
	showArr(swapArr, 10);

	//������ 2
	cout << "������ 2\n������� �����: ";
	int n, multNum;
	int& refn = n;
	cin >> n;
	cout << "������� ������� � ������� ����� ��������� ���� �����: ";
	cin >> multNum;
	cout << "����� " << n << " � ������� " << multNum << " = ";
	mult(refn, multNum);
	cout << n << endl;



	return 0;
}


//������ 1
int swapEl(int array[], int length) {
	swap(*(array), *(array + 1));
	swap(*(array + 2), *(array + 3));
	swap(*(array + 4), *(array + 5));
	swap(*(array + 6), *(array + 7));
	swap(*(array + 8), *(array + 9));
	return array[length];
}

//������ 2
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