// #include<stdio.h>
// #include<string.h>

// struct Books
// {
//     char isbn[15];
//     char title[50];
//     char author[50];
//     float price;
// };

// int main()
// {
//     struct Books book1;
//     struct Books book2;

//     strcpy(book1.isbn,"078-0131103627");
//     strcpy(book1.title,"The C Programing Language");
//     strcpy(book1.author,"Dennis M. Ritchie");
//     book1.price = 52.89;

//     strcpy(book2.isbn,"078-0131103627");
//     strcpy(book2.title,"The C Programing Language");
//     strcpy(book2.author,"Dennis M. Ritchie");
//     book2.price = 24.32;
//     printf("Book 1 isbn: %s\n",book1.isbn);
//     printf("Book 1 title: %s\n",book1.title);
//     printf("Book 1 author: %s\n",book1.author);
//     printf("Book 1 price: %.2f\n",book1.price);

//     printf("Book 2 isbn: %s\n",book2.isbn);
//     printf("Book 2 title: %s\n",book2.title);
//     printf("Book 2 author: %s\n",book2.author);
//     printf("Book 2 price: %.2f\n",book2.price);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

struct Books
{
    char isbn[15];
    char title[51];
    char author[51];
    float price;
};

void printBook(struct Books book);
struct Books getBook();
void getString(char *str, int length);
void printLine();
void printTitle();

int main()
{
    struct Books book[3] =
        {
            {"9780131103627", "The C Programing Language", "Dennis Ritchie", 52.89},
            {"9780789752980", "C programing for beginer", "Dean Miller", 24.32}};
    int i, cnt = 3;
    printf("Input book 3:\n");
    book[2] = getBook();
    printTitle();

    for (i = 0; i < cnt; i++)
    {
        printBook(book[i]);
    }
    printLine();
    return 0;
}

struct Books getBook()
{
    struct Books book;
    printf("Input book isbn: ");
    getString(book.isbn, 14);
    printf("Input Book title: ");
    getString(book.title, 50);
    printf("Input Book author: ");
    getString(book.author, 50);
    printf("Input Book price: ");
    scanf("%f", &book.price);
    return book;
}

void printBook(struct Books book)
{
    printf("| %-14s | %-26s | %-20s | %6.2f |\n", book.isbn, book.title, book.author, book.price);
}
void printLine()
{
    printf("+-%-14s-+-%-26s-+-%-20s-+-%-6s-+\n", "--------------", "--------------------------", "--------------------", "------");
};

void printTitle()
{
    printLine();
    printf("| %-14s | %-26s | %-20s | %-6s |\n ", "isbn", "Title", "Author", "Price");
    printLine();
}
void getString(char *str, int length)
{
    fseek(stdin, 0, SEEK_END);
    fflush(stdin);
    fgets(str, length, stdin);
    str[strlen(str) - 1] = '\0';
    fseek(stdin, 0, SEEK_END);
    fflush(stdin);
}
