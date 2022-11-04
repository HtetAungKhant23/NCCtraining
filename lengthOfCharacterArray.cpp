//
// Created by fatfat on 11/4/2022.
//

#include "stdio.h"

int main(){
    int index = 0;
    char arr[]={'n','c','c','t','r','a','i','n','i','n','g'};

    while (true){

        if(arr[index] == '\0'){
            printf("\nwe get length of char array %d\n",index-1);
            break;
        }
        index++;
    }
    return 0;
}
