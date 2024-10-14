#include <iostream>
#include <string>
using namespace std;


template<typename T>
int linearSearch(T arr[], int size, T key) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return i; 
		}
	}
	return -1; 
}


void printSearchResult(int index, int key) {
	if (index != -1) {
		cout << "Element " << key << " found at index: " << index << endl;
	}
	else {
		cout << "Element " << key << " not found in the array." << endl;
	}
}


void printSearchResult(int index, float key) {
	if (index != -1) {
		cout << "Element " << key << " found at index: " << index << endl;
	}
	else {
		cout << "Element " << key << " not found in the array." << endl;
	}
}


void printSearchResult(int index, const string& key) {
	if (index != -1) {
		cout << "Element " << key << " found at index: " << index << endl;
	}
	else {
		cout << "Element " << key << " not found in the array." << endl;
	}
}

int main() {
	// Test with an integer array of size 5
	int intArray[5] = { 64, 25, 12, 22, 11 };
	int intKey = 12;
	int intIndex = linearSearch(intArray, 5, intKey);
	printSearchResult(intIndex, intKey);

	// Test with a float array of size 4
	float floatArray[4] = { 3.14f, 2.71f, 1.62f, 0.57f };
	float floatKey = 1.62f;
	int floatIndex = linearSearch(floatArray, 4, floatKey);
	printSearchResult(floatIndex, floatKey);

	// Test with a string array of size 4
	string stringArray[4] = { "apple", "orange", "banana", "grape" };
	string stringKey = "banana";
	int stringIndex = linearSearch(stringArray, 4, stringKey);
	printSearchResult(stringIndex, stringKey);

	system("pause");
	return 0;
}
