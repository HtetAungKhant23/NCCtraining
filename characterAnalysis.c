#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define SIZE 1000
#define CHARSIZE 26
int count[CHARSIZE];
char arr[CHARSIZE];
void randCharToFile();
void charToFile();
int main(){
    srand(time(NULL));
    for(int i=0; i<CHARSIZE; i++){
        arr[i]=97+i;
        count[i]=0;
    }
    randCharToFile();
    return 0;
}
void randCharToFile(){
    FILE *fptr;
    fptr = fopen("character.txt","a");
    for (int i = 0; i < SIZE ; i++) {
        char randChar = rand() % 26 + 97;
        fprintf(fptr,"%c",randChar);
        for(int a =0; a<CHARSIZE; a++){
            if(randChar==arr[a]){
                count[a]++;
                break;
            }
        }
    }
    fclose(fptr);
    charToFile();
}
void charToFile(){
    int largest=0;
    for(int i=0; i<CHARSIZE; i++){
        if(largest<count[i]){
            largest=count[i];
        }
    }
    FILE *fptr;
    fptr = fopen("character.txt","w");
    fclose(fptr);
    FILE *fptr2;
    fptr2 = fopen("character.txt","a");
    for(int x=0; x<CHARSIZE; x++){
        fprintf(fptr2,"%c",(65+x));
        for(int s=0; s<4; s++) {
            fprintf(fptr2, "%c", ' ');
        }
    }
    fprintf(fptr2,"%c",'\n');
    for(int j=0; j<largest; j++){
        for(int k=0; k<CHARSIZE; k++){
                if(count[k]<=0){
                    fprintf(fptr2,"%c",' ');
                    for(int s=0; s<4; s++) {
                        fprintf(fptr2, "%c", ' ');
                    }
                } else {
                    fprintf(fptr2, "%c", arr[k]);
                    count[k]--;
                    for (int s = 0; s < 4; s++) {
                        fprintf(fptr2, "%c", ' ');
                    }
                }
        }
        fprintf(fptr2,"%c",'\n');
    }
    fclose(fptr2);
}
