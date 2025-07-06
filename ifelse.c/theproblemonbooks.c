#include <stdio.h>
#include <stdlib.h>//file handling 
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100

typedef struct {
    int id;
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int year;
} Book;

void addBook(Book *library, int *count);
void displayBooks(const Book *library, int count);
void searchBookByTitle(const Book *library, int count, const char *title);
void saveLibraryToFile(const Book *library, int count, const char *filename);
void loadLibraryFromFile(Book *library, int *count, const char *filename);

int main() {
    Book library[MAX_BOOKS];
    int bookCount = 0;
    int choice;
    char title[MAX_TITLE_LENGTH];
    const char *filename = "library.dat";

    loadLibraryFromFile(library, &bookCount, filename);

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book by Title\n");
        printf("4. Save and Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(library, &bookCount);
                break;
            case 2:
                displayBooks(library, bookCount);
                break;
            case 3:
                printf("Enter the title to search: ");
                scanf(" %[^\n]", title);
                searchBookByTitle(library, bookCount, title);
                break;
            case 4:
                saveLibraryToFile(library, bookCount, filename);
                printf("Library saved. Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

void addBook(Book *library, int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Library is full.\n");
        return;
    }
    Book newBook;
    newBook.id = *count + 1;
    printf("Enter title: ");
    scanf(" %[^\n]", newBook.title);
    printf("Enter author: ");
    scanf(" %[^\n]", newBook.author);
    printf("Enter year: ");
    scanf("%d", &newBook.year);
    library[*count] = newBook;
    (*count)++;
    printf("Book added successfully.\n");
}

void displayBooks(const Book *library, int count) {
    if (count == 0) {
        printf("No books in the library.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("ID: %d\nTitle: %s\nAuthor: %s\nYear: %d\n\n", library[i].id, library[i].title, library[i].author, library[i].year);
    }
}

void searchBookByTitle(const Book *library, int count, const char *title) {
    for (int i = 0; i < count; i++) {
        if (strcmp(library[i].title, title) == 0) {
            printf("Book found: ID: %d\nTitle: %s\nAuthor: %s\nYear: %d\n", library[i].id, library[i].title, library[i].author, library[i].year);
            return;
        }
    }
    printf("Book not found.\n");
}

void saveLibraryToFile(const Book *library, int count, const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(&count, sizeof(int), 1, file);
    fwrite(library, sizeof(Book), count, file);
    fclose(file);
}

void loadLibraryFromFile(Book *library, int *count, const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file for reading. Starting with an empty library.\n");
        *count = 0;
        return;
    }
    fread(count, sizeof(int), 1, file);
    fread(library, sizeof(Book), *count, file);
    fclose(file);
}
 