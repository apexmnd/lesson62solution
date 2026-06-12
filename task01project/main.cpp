#include "util.h"
#include "logic.h"

int main() {
	int size;

	cout << "Input size of array: ";
	cin >> size;

	int* array = new int[size];

	init_random(array, size, 0, 10);

	print(convert(array, size));

	int size_out;
	int* result = zip(array, size, &size_out);

	print("\nResult zip srray:\n");
	print(convert(result, size_out));

	delete[] array;
	delete[] result;

	return 0;
}