#include <stdio.h>

int main() {
    int arr[100], n, i, Unique_element = 0;

    printf("Enter array size:");
    scanf("%d", &n);

    printf("Enter array elements:");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    arr[Unique_element] = arr[0];
    Unique_element++;

    for(i = 1; i < n; i++) {
        if(arr[i] != arr[i - 1]) {
            arr[Unique_element] = arr[i];
            Unique_element++;
        }
    }

    printf("Array after removing:");
    for(i = 0; i < Unique_element; i++) {
        printf(" %d", arr[i]);
    }

    printf("\nNumber of unique element are: %d", Unique_element);

    return 0;
}
