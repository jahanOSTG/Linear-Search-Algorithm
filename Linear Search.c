#include <stdio.h>

int main() {
    int n, i, search_data, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the value to search: ");
    scanf("%d", &search_data);

    for (i = 0; i < n; i++) {
        if (a[i] == search_data) {
            printf("Data found at location: %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Data not found.\n");
    }

    return 0;
}
