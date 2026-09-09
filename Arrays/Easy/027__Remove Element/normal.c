#include <stdio.h>

int main() {
    int nums[100], numsSize, val;
    int i, j = 0;

    printf("Enter array size: ");
    scanf("%d", &numsSize);

    printf("Enter array elements: ");
    for(i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter value to remove: ");
    scanf("%d", &val);

    for(i = 0; i < numsSize; i++) {
        if(nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }

    printf("Array after removing %d: ", val);
    for(i = 0; i < j; i++) {
        printf("%d ", nums[i]);
    }

    printf("\nNumber of elements left: %d", j);

    return 0;
}
