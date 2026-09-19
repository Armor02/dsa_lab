#include <stdio.h>

int main() {
    int arr[100], n, i, pos, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Delete from Beginning");
    printf("\n2. Delete from Middle");
    printf("\n3. Delete from End");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Delete from beginning
        for (i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;
    }

    else if (choice == 2) {
        // Delete from middle
        printf("Enter position to delete: ");
        scanf("%d", &pos);

        if (pos < 1 || pos > n) {
            printf("Invalid position!");
            return 0;
        }

        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;
    }

    else if (choice == 3) {
        // Delete from end
        n--;
    }

    else {
        printf("Invalid choice!");
        return 0;
    }

    printf("\nArray after deletion:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}