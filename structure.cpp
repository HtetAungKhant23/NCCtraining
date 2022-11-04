//
// Created by fatfat on 11/4/2022.
//

#include "stdio.h"

struct Mystruct{
  char name[20];
  char fname[20];
  char hobby[20];
  int age=0;
};

void getName(struct Mystruct myData){
    printf("name : %s\n",myData.name);
    printf("hobby : %s\n",myData.hobby);
    printf("age : %d\n",myData.age);
}

int main(){
    struct Mystruct man1;
    struct Mystruct man2;
    printf("enter your name for man1 : ");
    scanf("%s",&man1.name);
    printf("enter your hobby for man1 : ");
    scanf("%s",&man1.hobby);
    printf("enter age for man1 : ");
    scanf("%d",&man1.age);
    printf("enter your name for man2 : ");
    scanf("%s",&man2.name);
    printf("enter your hobby for man2 : ");
    scanf("%s",&man2.hobby);
    printf("enter age for man2 : ");
    scanf("%d",&man2.age);
    getName(man1);
    getName(man2);

    printf(" man1 age is = %d",man1.age);

    return 0;
}
