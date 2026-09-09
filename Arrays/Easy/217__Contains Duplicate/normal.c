#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int nums[100], numsSize;
    int i;

    printf("Enter array size: ");
    scanf("%d", &numsSize);

    printf("Enter array elements: ");
    for(i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    qsort(nums, numsSize, sizeof(int), compare);

    for(i = 1; i < numsSize; i++) {
        if(nums[i] == nums[i - 1]) {
            printf("Duplicate element found: %d", nums[i]);
            return 0;
        }
    }

    printf("No duplicate element found.");

    return 0;
}
