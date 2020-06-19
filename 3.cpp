#include <iostream>
#include <time.h>

using namespace std;

void view(const int*, int);
void createVect(int*&, int, int, int);
int random(int, int);
bool check(int*&, int, int);

int main() {
	int size = 10;
	int* ptrA, * ptrB, * ptrC;

	ptrA = new int[size];
	ptrB = new int[size];
	ptrC = new int[size];

	int d = 29;
	int m = 9;
	int y = 2000;

	while (!check(ptrA, size, d) && !check(ptrB, size, m) && !check(ptrC, size, y))
	{
		createVect(ptrA, size, 1, 31);
		//view(ptrA, size);

		createVect(ptrB, size, 1, 13);
		//view(ptrB, size);

		createVect(ptrC, size, 1999, 2004);
		//view(ptrC, size);

		cout << "Try again!" << endl << endl;
	}

	view(ptrA, size);
	view(ptrB, size);
	view(ptrC, size);

	cout << "\nYou are lucky!" << endl;

	return 0;
}

int random(int a, int b)
{
	if (a > 0) return a + rand() % (b - a);
	else return a + rand() % (abs(a) + b);
}

void view(const int* X, int size) {
	
	for (int i = 0; i < size; i++) {
		cout << X[i] << '\t';
	}
	cout << endl;
}

void createVect(int*& X, int size, int a, int b)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		X[i] = random(a, b);
	}
}

bool check(int*& X, int size, int n)
{
	bool value = false;
	for (int i = 0; i < size; i++)
	{
		if (X[i] == n)
		{
			value = true;
		}
	}

	return value;
}