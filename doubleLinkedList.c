// Created by Htet Aung Khant on 12/8/2022.
//
#include "stdio.h"
#include "stdlib.h"
struct node{
    double data;
    struct node* next1;
    struct node* next2;
};
void printData(struct node* myNode){
    struct node* little = myNode;
    if(myNode == NULL){
        printf("node is null\n");
        return;
    }
    while (myNode != NULL){
        for(int i=1; i<=6; i++){
            printf("%2lf\n",little->data);
            little = little->next1;
        }
        myNode = myNode->next2;
        little = myNode;
        printf("\n");
    }
}

void print(struct node* myNode){

    struct node* head = myNode;

    if(myNode == NULL){
        printf("node is null\n");
        return;
    }

    while (head != NULL){
        printf("%2lf\t",head->data);
        head = head -> next2;
    }
    printf("\n");



//    struct node* one = myNode;
    struct node* temp = myNode;
    struct node* child = temp->next1;
    struct node* two= myNode->next1;
//    struct node* three= myNode->next1;

//    while (one != NULL){
        for(int i=1; i<=5; i++) {
//            while (two != NULL) {
//                printf("\nla u 2\n");
//                while (temp != NULL) {
                  for(int j=0; j<5; j++) {
                      printf("%2lf\t", child->data);
                      if(j<4) {
                          temp = temp->next2;
                          if(i==1){
                              child = temp->next1;
                          } else if(i==2){
                              child = temp->next1->next1;
                          } else if(i==3){
                              child = temp->next1->next1->next1;
                          } else if(i==4){
                              child = temp->next1->next1->next1->next1;
                          } else if(i==5){
                              child = temp->next1->next1->next1->next1->next1;
                          }
                      }
                  }

//                }
                printf("\n");
                two = two->next1;
                child = two;
                temp = myNode;
            }
//        }
//        one = one->next2;
//        two = one->next1;
//    }

}

void addingData(struct node* myNode,float data,float data1,float data2,float data3,float data4,float data5){
    int count=0;
    struct node* child = myNode->next1;
    if(myNode == NULL){
        printf("node is null\n");
        return;
    }
    while (count==0){
        myNode->data = data;
        while (child != NULL){
            if(count==0) {
                child->data = data1;
                child = child->next1;
            } else if(count==1){
                child->data = data2;
                child = child->next1;
            } else if(count==2){
                child->data = data3;
                child = child->next1;
            } else if(count==3){
                child->data = data4;
                child = child->next1;
            } else if(count==4){
                child->data = data5;
                child = child->next1;
                break;
            }
            count++;
        }
    }
}
void takeMal(struct node* myNode){
    if(myNode == NULL){
        printf("node is null\n");
        return;
    }
    while (myNode != NULL){
        if(myNode) {
            for (int i = 0; i < 5; i++) {
                struct node *child1 = (struct node *) malloc(sizeof(struct node));
                struct node *child2 = (struct node *) malloc(sizeof(struct node));
                struct node *child3 = (struct node *) malloc(sizeof(struct node));
                struct node *child4 = (struct node *) malloc(sizeof(struct node));
                struct node *child5 = (struct node *) malloc(sizeof(struct node));
                child1->next1=child2;
                child1->next2=NULL;
                child2->next1=child3;
                child2->next2=NULL;
                child3->next1=child4;
                child3->next2=NULL;
                child4->next1=child5;
                child4->next2=NULL;
                child5->next1=NULL;
                child5->next2=NULL;
                myNode->next1 = child1;
            }
        }
        myNode = myNode->next2;
    }
}
int main(){
    struct node* one = (struct node*) malloc(sizeof(struct node));
    struct node* two = (struct node*) malloc(sizeof(struct node));
    struct node* three = (struct node*) malloc(sizeof(struct node));
    struct node* four = (struct node*) malloc(sizeof(struct node));
    struct node* five = (struct node*) malloc(sizeof(struct node));
    one->next2 = two;
    two->next2 = three;
    three->next2 = four;
    four->next2 = five;
    five->next2 = NULL;
    takeMal(one);
    addingData(one,1,1.1,1.2,1.3,1.4,1.5);
    addingData(two,2,2.1,2.2,2.3,2.4,2.5);
    addingData(three,3,3.1,3.2,3.3,3.4,3.5);
    addingData(four,4,4.1,4.2,4.3,4.4,4.5);
    addingData(five,5,5.1,5.2,5.3,5.4,5.5);
    print(one);
    return 0;
}
