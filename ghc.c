#include <stdio.h>
#define N 100

int main(void){
    int books; //number of books
    int num_libraries;
    int days; //total amount of available days
    
    int books_score[N];

    int libraries[N][N];
    int Avg_Lib_Score[N]; //sum of book scores by total number of books

    int num_books_per_library[N];
    int max_scanned[N]; //maximum books that can be scanned per day
    int signup_days[N]; //days required to sign up  all books


    FILE *fptr;
    fptr = fopen("a_example.txt","r");
    fscanf(fptr, "%d %d %d", &books, &num_libraries, &days);
    for(int i = 0; i < books; i++){
        fscanf(fptr, "%d ", &books_score[i]);
    }
    for(int i = 0; i < num_libraries; i++){
        fscanf(fptr, "%d %d %d", &num_books_per_library[i], &signup_days[i], &max_scanned[i]);
        for(int j = 0; j < num_books_per_library[i]; j++){
            fscanf(fptr, "%d ", &libraries[i][j]);
        }
    }
    fclose(fptr);

    for(int i=0;i<num_libraries;i++){
        for(int j=0;j<num_books_per_library[i];i++){
            Avg_Lib_Score[i]=books_score[i]/num_books_per_library[i];
            Avg_Lib_Score[i+1]=books_score[i+1]/num_books_per_library[i+1];
            if( (Avg_Lib_Score*max_scanned[i]-signup_days[i]) < (Avg_Lib_Score*max_scanned[i+1]-signup_days[i+1]) ){

            }
        }
    }  
}

