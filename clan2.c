#include <stdio.h>

int main() {
    int array[100]; 
    int n, i, sum = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    
    for (i = 0; i < n; i++) {
        sum += array[i];
    }

    printf("Sum of the elements: %d\n", sum);

    return 0;
}