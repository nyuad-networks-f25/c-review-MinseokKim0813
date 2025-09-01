#include <stdio.h>


int main() {
    
    // Arbitrary array
    int arr[5] = {3,2,1,5,4};
    // Bubble sort
    for (int j=sizeof(arr)/sizeof(arr[0]); j>=0; j--) {
        

        for (int i=1; i<j; i++) {
            if (arr[i-1] > arr[i]) {
                int temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
            }
        }
    }
    printf("Sorted array: %d, %d, %d, %d, %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    return 0;
}