#include <stdio.h>

int main() {
    int nums[100], numsSize;
    int i, j = 0;
    int temp;

    printf("Enter array size: ");
    scanf("%d", &numsSize);

    printf("Enter array elements: ");
    for(i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < numsSize; i++) {
        if(nums[i] != 0) {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }

    printf("Array after moving zeroes: ");
    for(i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
