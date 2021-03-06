// This program demonstrates the binarySearch function, which
// performs a binary search on an integer array.
#include <iostream>
using namespace std;

// Function prototype
int binarySearch(const int [], int, int);
const int SIZE = 5;

int main()
{
	// Array with employee IDs sorted in ascending order.
	int idNums[SIZE] = {101, 142, 147, 189, 199};
	int results; // To hold the search results
	int empID; // To hold an employee ID

	// Get an employee ID to search for.
	cout << "Enter the employee ID you wish to search for: ";
	cin >> empID;

	// Search for the ID.
	results = binarySearch(idNums, SIZE, empID);

	// If results contains −1 the ID was not found.
	if (results == -1)
		cout << "That number does not exist in the array. \n";
	else
	{
		// Otherwise results contains the subscript of
		// the specified employee ID in the array.
		cout << "That ID is found at element " << results;
		cout << " in the array.\n";
	}
	return 0;
}

int binarySearch(const int array[], int n, int value) {
	int first = 0, last = n - 1, middle, position;
	bool found = false;

	while(!found && first <= last) {
		middle = (first + last)/2;

		if (array[middle] == value) {
			found = true;
			position = middle;
		}
		else if (array[middle] > value) {
			last = middle - 1;
		}
		else {
			first = middle + 1;
		}
	}
	return position;
}
