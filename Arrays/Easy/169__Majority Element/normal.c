#include <stdio.h>

int main() {
    int nums[100], numsSize;
    int candidate = 0;
    int count = 0;
    int i;

    printf("Enter array size: ");
    scanf("%d", &numsSize);

    printf("Enter array elements: ");
    for(i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < numsSize; i++) {

        if(count == 0) {
            candidate = nums[i];
        }

        if(nums[i] == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    printf("Majority element: %d", candidate);

    return 0;
}
