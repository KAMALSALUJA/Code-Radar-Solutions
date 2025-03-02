#include <stdio.h>

// Function to left rotate array by d positions
// Repeat the rotation d times
void rotateArr(int arr[], int n, int d) {
    for (int i = 0; i <d; i++) {
      
        // Left rotate the array by one position
        int first = arr[j];
        for (int j = 0; j < n - 1; j++) {
             arr[j + 1]=arr[j];
        }
        arr[n - 1] = first;
    }
}

int main() {
    int arr[] = { 5,1, 2, 3, 4};
    int d = 2;
    int n = sizeof(arr);// / sizeof(arr[0]);

    rotateArr(arr, n, d);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
