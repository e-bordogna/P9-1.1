/*
 *
 * File: P8-2.sln
 * Author: Enzo M Bordogna
 * Date: 10/26/2023
 *
 */


#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

int randNum(void);
void printNormal(const int* a);
void printEvenIn(const int* a);
void printEvenVal(const int* a);
void printReverse(const int* a);
void printFirstLast(const int* a);

int main() {
	srand(time(NULL));
	int randArray[10] = { randNum(), randNum(), randNum(), randNum(), randNum(), randNum(), randNum(), randNum(), randNum(), randNum() };
	printNormal(randArray);
	printEvenIn(randArray);
	printEvenVal(randArray);
	printReverse(randArray);
	printFirstLast(randArray);

	cout << "Press any key to continue . . .";
	return 0;
}

int randNum(void) {
	int num;
	num = rand() % 9000 + 999;
	return num;
}
void printNormal(const int* a) {
	cout << "The random integers : ";
	const int* p = a;
	for (int i = 0; i < 10; i++) {
		cout << *p << " ";
		p++;
	}
	cout << endl;
}
void printEvenIn(const int* a) {
	cout << "Even indices:         ";
	const int* p = a;
	for (int i = 0; i < 5; i++) {
		cout << *p << " ";
		p += 2;
	}
	cout << endl;
}

void printEvenVal(const int* a) {
	cout << "Even values:          ";
	const int* p = a;
	for (int i = 0; i < 10; i++) {
		if (*p % 2 == 0) {
			cout << *p << " ";
		}
		p++;
	}
	cout << endl;
}