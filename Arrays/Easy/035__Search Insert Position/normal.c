#include <stdio.h>

int main() {
    int nums[100], numsSize, target;
    int i;
    int upperbound, lowerbound, mid;

    printf("Enter array size: ");
    scanf("%d", &numsSize);

    printf("Enter array elements in ascending order: ");
    for(i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    upperbound = numsSize - 1;
    lowerbound = 0;

    while(lowerbound <= upperbound) {

        mid = (upperbound + lowerbound) / 2;

        if(nums[mid] == target) {
            printf("Target found at index: %d", mid);
            return 0;
        }

        if(nums[mid] < target) {
            lowerbound = mid + 1;
        }
        else {
            upperbound = mid - 1;
        }
    }

    printf("Target should be inserted at index: %d", lowerbound);

    return 0;
}
