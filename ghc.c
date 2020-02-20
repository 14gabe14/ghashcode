#include <stdio.h>
#define N 100000

int main(void){
    int books; //number of books
    int num_libraries;
    int days; //total amount of available days
    int books_score[N];
    int num_books_per_library[N];
    int libraries[1000][N];

    FILE *fptr;
    fptr = fopen("a_example.txt","r");
    fscanf(fptr, "%d %d %d", &books, &num_libraries, &days);
    printf("%d", books);
    fclose(fptr);
}