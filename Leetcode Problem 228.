#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the array size:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the array element:");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int start = arr[0];

    char result[n][20];
    int count = 0;

    for(i = 0; i < n - 1; i++) {
        if(arr[i + 1] - arr[i] > 1) {

            if(start == arr[i])
                sprintf(result[count], "%d", start);
            else
                sprintf(result[count], "%d->%d", start, arr[i]);

            count++;

            start = arr[i + 1];
        }
    }

    // Last range
    if(start == arr[n - 1])
        sprintf(result[count], "%d", start);
    else
        sprintf(result[count], "%d->%d", start, arr[n - 1]);

    count++;

    // Print output array
    printf("\nOutput array: [");
    for(i = 0; i < count; i++) {
        printf("\"%s\"", result[i]);

        if(i < count - 1)
            printf(", ");
    }
    printf("]\n");

    return 0;
}
