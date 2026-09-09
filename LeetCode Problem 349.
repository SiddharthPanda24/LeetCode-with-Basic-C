#include <stdio.h>

int main() {
    int m, n;

    printf("Enter your 1st array size: ");
    scanf("%d", &m);

    printf("Enter your 2nd array size: ");
    scanf("%d", &n);

    int nums1[m], nums2[n];

    printf("Enter your 1st array Element: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter your 2nd array Element: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int count = 0;
    int result[m];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            if (nums1[i] == nums2[j]) {

                // Check if already present in result
                int duplicate = 0;

                for (int k = 0; k < count; k++) {
                    if (result[k] == nums1[i]) {
                        duplicate = 1;
                        break;
                    }
                }

                if (duplicate == 0) {
                    result[count] = nums1[i];
                    count++;
                }

                break;
            }
        }
    }

    printf("Your final intersection array is: ");

    for (int i = 0; i < count; i++) {
        printf("%d", result[i]);

        if (i < count - 1) {
            printf(",");
        }
    }

    return 0;
}
