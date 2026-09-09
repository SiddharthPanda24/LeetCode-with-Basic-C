#include <stdio.h>

int main() {
    int nums[100], n, target;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (nums[i] + nums[j] == target) {
                printf("Indices are: %d, %d", i, j);
                return 0;
            }
        }
    }

    printf("No Pairs found.");

    return 0;
}
