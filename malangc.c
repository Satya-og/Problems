#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max, min;

    // Input number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min to the first element of the array
    max = arr[0];
    min = arr[0];

    // Traverse the array to find the max and min values
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if current element is greater
        }
        if (arr[i] < min) {
            min = arr[i];  // Update min if current element is smaller
        }
    }

    // Output the results
    printf("The maximum value in the array is: %d\n", max);
    printf("The minimum value in the array is: %d\n", min);
}

