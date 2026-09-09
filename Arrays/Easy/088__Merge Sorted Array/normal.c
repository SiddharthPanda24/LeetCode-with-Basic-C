#include <stdio.h>

int main() {
    int nums1[100], nums2[100];
    int nums1Size, nums2Size, m, n;
    int i, j, temp;

    printf("Enter size of nums1: ");
    scanf("%d", &nums1Size);

    printf("Enter number of actual elements in nums1: ");
    scanf("%d", &m);

    printf("Enter nums1 elements: ");
    for(i = 0; i < nums1Size; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of nums2: ");
    scanf("%d", &nums2Size);

    printf("Enter number of elements in nums2: ");
    scanf("%d", &n);

    printf("Enter nums2 elements: ");
    for(i = 0; i < nums2Size; i++) {
        scanf("%d", &nums2[i]);
    }

    // Add nums2 into nums1
    for(i = 0; i < nums2Size; i++) {
        nums1[m + i] = nums2[i];
    }

    // Sort the complete nums1 array
    for(i = 0; i < m + n - 1; i++) {

        for(j = 0; j < m + n - 1 - i; j++) {

            if(nums1[j] > nums1[j + 1]) {

                temp = nums1[j];
                nums1[j] = nums1[j + 1];
                nums1[j + 1] = temp;
            }
        }
    }

    printf("Merged array: ");
    for(i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }

    return 0;
}
