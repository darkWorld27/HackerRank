#include <stdio.h>
#include <stdlib.h>

int main() {
    int target;
    int arr[4] = {2, 7, 11, 15};

    printf("Enter target: ");
    scanf("%d", &target);

    // Nested loops to find pairs
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", i, j);
            }
        }
    }

    return 0;
}
