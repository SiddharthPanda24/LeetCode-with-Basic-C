#include <stdio.h>

int main() {
    int i, n;

    printf("Enter your array size:");
    scanf("%d", &n);

    int nums[n];

    printf("Enter your array elements:");
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int sum = 0;

    for(i = 0; i < n; i++) {
        sum += nums[i];
    }

    int total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}
