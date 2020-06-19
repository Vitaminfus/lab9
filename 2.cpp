#include <iostream>
#include <time.h>
#include <vector>
#include <iomanip>

using namespace std;

//init funcs
void view(const int*, int);
void createVect(int*&, int);

//show elems of array
void view(const int* X, int size) 
{
	
	for (int i = 0; i < size; i++) 
	{
		cout << setw(4) << X[i];
	}
	cout << endl << endl;
}



//random elems in array
void createVect(int*& X, int size) 
{
	srand((time(NULL)));
	for (int i = 0; i < size; i++) 
	{
		X[i] = rand() % 20 - 10;
	}
}


void selNum(int*& X, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (X[i] % 2 != 0)
		{
			cout << setw(4) << X[i];
		}
		
	}

	cout << endl << endl;
}


void minElem(int*& X, int size)
{
	int min = 100;
	for (int i = 0; i < size; i++)
	{
		if (X[i] < min)
		{
			min = X[i];
		}
	}

	cout << "Min element: " << min << endl << endl;
}


void posNum(int*& X, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (X[i] < 0)
		{
			X[i] = 0;
		}
	}
}


int main() 
{
	int n;
	int* pA, * pB, * pC;

	cout << "Enter number of elements -> ";
	cin >> n;

	//memory allocation
	pA = new int[n];
	pB = new int[n];
	pC = new int[n];

	//call func which creates array
	createVect(pA, n);

	//call func which shows elems of array
	cout << "Array: " << endl;
	view(pA, n);
	
	//call funcs which create and show vector with odd elems
	cout << "Odd elements:" << endl;
	selNum(pA, n);
	
	
	minElem(pA, n);
	//view(pA, n);

	//call funcs which replaces negative numbers with 0 and show the modified array
	cout << "Negative numbers is 0 now: \n";
	posNum(pA, n);
	view(pA, n);

	cout << "Enter number of elements -> ";
	cin >> n;

	//call func which creates array
	createVect(pB, n);

	//call func which shows elems of array
	cout << "Array: " << endl;
	view(pB, n);

	//call funcs which create and show vector with odd elems
	cout << "Odd elements:" << endl;
	selNum(pB, n);
	

	minElem(pB, n);
	//view(pB, n);

	//call funcs which replaces negative numbers with 0 and show the modified array
	cout << "Negative numbers is 0 now: ";
	posNum(pB, n);
	view(pB, n);

	cout << "Enter number of elements -> ";
	cin >> n;

	//call func which creates array
	createVect(pC, n);

	//call func which shows elems of array
	cout << "Array: " << endl;
	view(pC, n);

	//call funcs which create and show vector with odd elems
	cout << "Odd elements:" << endl;
	selNum(pC, n);
	

	minElem(pC, n);
	//view(pC, n);
	
	//call funcs which replaces negative numbers with 0 and show the modified array
	cout << "Negative numbers is 0 now: ";
	posNum(pC, n);
	view(pC, n);


	//free memory
	delete[]pA;
	delete[]pB;
	delete[]pC;
	//system("pause");

	return 0;
}
