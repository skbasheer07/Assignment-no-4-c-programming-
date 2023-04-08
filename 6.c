#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    char title[50];
    char author[50];
    int id;
};

struct Library {
    struct Book books[MAX_BOOKS];
    int count;
};

void add_book(struct Library *library) {
    if(library->count == MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    struct Book book;
    printf("\nEnter book details:\n");

    printf("Title: ");
    scanf("%s", book.title);

    printf("Author: ");
    scanf("%s", book.author);

    printf("ID: ");
    scanf("%d", &book.id);

    library->books[library->count] = book;
    library->count++;

    printf("\nBook added successfully.\n");
}

void display_books(struct Library *library) {
    int i;

    printf("\nList of books in the library:\n");

    for(i = 0; i < library->count; i++) {
        printf("%d. %s by %s\n", library->books[i].id, library->books[i].title, library->books[i].author);
    }
}

void list_books_by_author(struct Library *library) {
    char author[50];
    int i, count = 0;

    printf("\nEnter author name: ");
    scanf("%s", author);

    printf("\nList of books by %s:\n", author);

    for(i = 0; i < library->count; i++) {
        if(strcmp(library->books[i].author, author) == 0) {
            printf("%d. %s\n", library->books[i].id, library->books[i].title);
            count++;
        }
    }

    if(count == 0) {
        printf("No books found by %s.\n", author);
    }
}

void list_book_count(struct Library *library) {
    printf("\nNumber of books in the library: %d\n", library->count);
}

int main() {
    struct Library library;
    library.count = 0;

    int choice;

    do {
        printf("\nLibrary Management System\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                add_book(&library);
                break;
            case 2:
                display_books(&library);
                break;
            case 3:
                list_books_by_author(&library);
                break;
            case 4:
                list_book_count(&library);
                break;
            case 5:
                printf("\nThank you for using the Library Management System.\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while(choice != 5);

    return 0;
}

