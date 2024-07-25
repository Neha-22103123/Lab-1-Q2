#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int n, i;
    int arr[MAX_SIZE];
    double sum = 0.0, average;
    
    // Input the number of elements
    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &n);
    
    // Input the elements of the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    // Calculate the average
    average = sum / n;
    
    // Display the average
    printf("Average of the integers entered is: %.2f\n", average);
    
    return 0;
}
