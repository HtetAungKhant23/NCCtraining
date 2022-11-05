//
// Created by fatfat on 11/5/2022.
//

#include "stdio.h"
#include "stdlib.h"
int main(){
    int number=0;
    char c;
    char cArr[100];
    char searchArr[100];
    int index=0;
    int tempIdx=0;

    FILE *fptr;
    fptr = fopen("ncc.txt","r");
    if(fptr==NULL){
        printf("File cannot open!");
        exit(1);
    }
    printf("\n");
    while (true){
        c = getc(fptr);
        cArr[index] = c;
        if(c == EOF){
            break;
        } else{
            printf("%c",c);
        }
        index++;
    }
    fclose(fptr);
    printf("\n\n");

    for (int i = 0; i < index+1; i++) {
        printf("%c",cArr[i]);
    }

    printf("\n\n");

    for (int ii = 0; ii < index+1; ii++) {
        if (cArr[ii] == ' ') {
            tempIdx = ii;
            if(cArr[tempIdx+1]=='G' && cArr[tempIdx+2]=='r' && cArr[tempIdx+3]=='e' && cArr[tempIdx+4]=='e' && cArr[tempIdx+5]=='n'){
                for(int j=0; j<5; j++){
                    searchArr[j]=cArr[tempIdx+j+1];
                }
                break;
            } else{
                continue;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%c",searchArr[i]);
    }
    printf("\n");
    return 0;
}
