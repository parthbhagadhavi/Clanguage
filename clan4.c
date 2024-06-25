#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100  


struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[MAX_BOOKS];
    int n; 


    printf("Enter the number of books: ");
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]s", books[i].title);  
        printf("Author: ");
        scanf(" %[^\n]s", books[i].author);  
        printf("Price: ");
        scanf("%f", &books[i].price);
    }


    printf("\nDetails of the Books:\n");
    for (int i = 0; i < n; i++) {
        printf("Book %d\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: $%.2f\n", books[i].price);
        printf("\n");
    }

    return 0;
}