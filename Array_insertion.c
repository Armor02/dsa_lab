#include <stdio.h>

int main() {
    int arr[100], n, i, value, pos, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Insert at Beginning");
    printf("\n2. Insert at Middle");
    printf("\n3. Insert at End");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    if (choice == 1) {
        // Insert at beginning
        for (i = n; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = value;
        n++;
    }

    else if (choice == 2) {
        // Insert at middle
        printf("Enter position: ");
        scanf("%d", &pos);

        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        arr[pos - 1] = value;
        n++;
    }

    else if (choice == 3) {
        // Insert at end
        arr[n] = value;
        n++;
    }

    else {
        printf("Invalid choice!");
        return 0;
    }

    printf("\nArray after insertion:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
