#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int temp[n], idx = 0;
    for (int i = 0; i < n; i++) {
        int duplicate = 0;
        for (int j = 0; j < idx; j++) {
            if (arr[i] == temp[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate)
            temp[idx++] = arr[i];
    }
    for (int i = 0; i < idx; i++)
        arr[i] = temp[i];
    n = idx;

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
