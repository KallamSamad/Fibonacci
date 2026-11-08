// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <crtdbg.h>
using namespace std;



int* allocateMemory(const int noofsteps) {
	int* steps = (int*)malloc(sizeof(int) * noofsteps);
	return steps;
}
void determineSequence(const int noofsteps, int* steps) {
	steps[0] = 0;
	steps[1] = 1;
	for (int x = 2; x < noofsteps; x++) {
		steps[x] = steps[x - 1] + steps[x - 2];
	}
}
void displaySequence(const int noofsteps, const int* steps) {

	for (int y = 0; y < noofsteps; y++) {
		cout << steps[y] << "\n";
	}
}

int main()

{
	int steps = 0;
	cout << "How many steps?" << "\n";
	cin >> steps;
#ifdef _DEBUG
	//_CrtSetBreakAlloc(87);
	_onexit(_CrtDumpMemoryLeaks);
#endif
	// create space for 10 integers
	int* array = allocateMemory(steps);
	determineSequence(steps, array);
	displaySequence(steps, array);


	free(array);
	array = nullptr;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
