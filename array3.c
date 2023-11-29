//2nd largest.
#include <stdio.h>

int main() {
    int n, i, max, second_max;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    second_max = -1;
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if(arr[i] > second_max && arr[i] < max) {
            second_max = arr[i];
        }
    }
    if(second_max == -1)
        printf("There is no second maximum element\n");
    else
        printf("The second maximum element in the array is: %d\n", second_max);
    return 0;
}