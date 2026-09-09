#include <stdio.h>
int main() {
    int arr[100], i, n;
    printf("Enter your array size:");
    scanf("%d", &n);
    printf("Enter your array element:");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Convert array into digit
    int digit = 0;
    int oldLength = 0;
    for(i = 0; i < n; i++) {
        digit = digit * 10 + arr[i];
        oldLength++;
    }
    printf("Your digit is:%d\n", digit);
    printf("Old digit length is:%d\n", oldLength);
    // Add 1
    int newdigit = digit + 1;
    printf("Your new digit is:%d\n", newdigit);
    // Calculate new digit length
    int newLength = 0;
    int temp = newdigit;
    while(temp > 0) {
        newLength++;
        temp = temp / 10;
    }
    printf("New digit length is:%d\n", newLength);
    // If both lengths are same
    if(oldLength == newLength) {
        for(i = n - 1; i >= 0; i--) {
            arr[i] = newdigit % 10;
            newdigit = newdigit / 10;
        }
        printf("Your array after plus one:");
        for(i = 0; i < n; i++) {
            printf("%d", arr[i]);
        }
    }
    // If new number has more digits
    else {
        int newArr[100];
        for(i = newLength - 1; i >= 0; i--) {
            newArr[i] = newdigit % 10;
            newdigit = newdigit / 10;
        }
        printf("Your array after plus one:");
        for(i = 0; i < newLength; i++) {
            printf("%d", newArr[i]);
        }
    }
    return 0;
}
