#include <iostream>
using namespace std;

int main() {
	int number = 100;
	int* ptr = &number;
	int** dptr = &ptr;

	cout << dptr << " - " << *dptr << " - " << **dptr << endl;

	return 0;
}