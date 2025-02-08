#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the elements of the array
    printf("The elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in the array are:\n");
    for (int i = 0; i < n; i++) {
        int isUnique = 1; // Flag to check if the element is unique

        // Check if arr[i] is unique
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0; // Found a duplicate
                break;
            }
        }

        // If the element is unique, print it
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    int n1, n2;

    // Input the size of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];

    // Input elements for the first array
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Input the size of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];

    // Input elements for the second array
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // Create a third array to hold the merged result
    int merged[n1 + n2];

    // Copy elements from the first array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements from the second array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print the merged array
    printf("The merged array is:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n;

    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Read elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Initialize the maximum and second maximum
    int max = INT_MIN; // Set to the smallest possible integer
    int second_max = INT_MIN; // Set to the smallest possible integer

    // Find the maximum and second maximum
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            second_max = max; // Update second max before updating max
            max = arr[i]; // Update max
        } else if (arr[i] > second_max && arr[i] < max) {
            second_max = arr[i]; // Update second max
        }
    }

    // Check if the second maximum was found
    if (second_max == INT_MIN) {
        printf("There is no second maximum element in the array.\n");
    } else {
        printf("The second maximum element is: %d\n", second_max);
    }

    return 0;
}