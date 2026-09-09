#include <stdio.h>
#include <stdbool.h>

int main() {
    int nums[100], numsSize, k;
    int i, j;

    printf("Enter array size: ");
    scanf("%d", &numsSize);

    printf("Enter array elements: ");
    for(i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    for(i = 0; i < numsSize; i++) {
        for(j = i + 1; j < numsSize; j++) {

            if(nums[i] == nums[j] && (j - i) <= k) {
                return true;
            }
        }
    }

    return false;
}
