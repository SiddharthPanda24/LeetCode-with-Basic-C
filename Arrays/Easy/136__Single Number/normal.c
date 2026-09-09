#include <stdio.h>

int main() {
    int nums[100], numsSize;
    int count;
    int i, j;

    printf("Enter array size: ");
    scanf("%d", &numsSize);

    printf("Enter array elements: ");
    for(i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < numsSize; i++) {
        count = 0;

        for(j = 0; j < numsSize; j++) {
            if(nums[i] == nums[j]) {
                count++;
            }
        }

        if(count == 1) {
            printf("Single number: %d", nums[i]);
            return 0;
        }
    }

    printf("No single number found.");

    return 0;
}
