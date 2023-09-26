#include <stdio.h>


void reverse_array(int* arr, int n) {
	// Initialize two pointers, start_ptr and end_ptr, to the beginning and end of the array.
	int* start_ptr = arr;            // Points to the first element of the array.
	int* end_ptr = arr + n - 1;      // Points to the last element of the array.
	int temp;                        // Temporary variable for swapping elements.

	// Continue swapping elements until start_ptr crosses or meets end_ptr.
	while (start_ptr < end_ptr) {
		temp = *start_ptr;            // Store the value pointed to by start_ptr in the temp variable.
		*start_ptr = *end_ptr;        // Assign the value pointed to by end_ptr to start_ptr.
		*end_ptr = temp;              // Assign the value stored in temp to end_ptr.

		// Move start_ptr one position forward and end_ptr one position backward.
		start_ptr++;
		end_ptr--;
	}
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6 , 7, 8, 9};
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Original order: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	};

	reverse_array(arr, n);

	printf("\nNew order: \n");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}