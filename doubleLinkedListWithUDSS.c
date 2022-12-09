// Created by Htet Aung Khant on 12/8/2022.
//
#include "stdio.h"
#include "stdlib.h"
struct node{
    double data;
    struct node* next1;
    struct node* next2;
};
void print(struct node* myNode,float data){
    int found = 0;
    struct node* head = myNode;
    struct node* temp = myNode;
    struct node* child = temp->next1;
    struct node* two= myNode->next1;
        for(int i=1; i<=5; i++) {
            while (head != NULL){
                if(head->data == 32){
                    printf("%c\t\t", child->data);
                    if (child->data == data) {
                        found = 1;
                    }
                } else {
                    printf("%2lf\t", head->data);
                    if (head->data == data) {
                        found = 1;
                    }
                }
                head = head -> next2;
            }
            if(i==1){printf("\n");}
                  for(int j=0; j<5; j++) {
                      if(child->data==32){
                          printf("%c\t\t", child->data);
                          if (child->data == data) {
                              found = 1;
                          }
                      } else {
                          printf("%2lf\t", child->data);
                          if (child->data == data) {
                              found = 1;
                          }
                      }
//                      if(j<4) {
//                          temp = temp->next2;
//                          child = temp->next1;
//                      }
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
            printf("\n");
            two = two->next1;
            child = two;
            temp = myNode;
        }
        if(found==1){
            printf("we found %2lf",data);
        } else{
            printf("we not found %2lf",data);
        }
}
void addingData(struct node* myNode,float data,float data1,float data2,float data3,float data4,float data5){
    int count=0;
    struct node* child = myNode->next1;
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
struct node* oneMal(struct node* myNode){
    myNode = (struct node*) malloc(sizeof (struct node));
    return myNode;
}
void takeMal(struct node* myNode){
    while (myNode != NULL){
        if(myNode) {
            for (int i = 0; i < 5; i++) {
                struct node *child1 = oneMal(child1);
                struct node *child2 = oneMal(child2);
                struct node *child3 = oneMal(child3);
                struct node *child4 = oneMal(child4);
                struct node *child5 = oneMal(child5);
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

struct node* searchData(struct node* myNode, float data){
    struct node* head = myNode;
    struct node* temp = myNode;
    struct node* child = temp->next1;
    struct node* two= myNode->next1;
    for(int i=1; i<=5; i++) {
        while (head != NULL){
            
            if(head->data == data){
                myNode = head;
                return myNode;
            }
            head = head -> next2;
        }
        if(i==1){printf("\n");}
        for(int j=0; j<5; j++) {
            if(child->data == data){
                myNode = child;
                return myNode;
            }
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
        two = two->next1;
        child = two;
        temp = myNode;
    }
}

struct node* updateData(struct node* myNode,float oldData,float newData){
    struct node* upData = searchData(myNode,oldData);
    upData->data = newData;
    return myNode;
}

struct node* deleteData(struct node* myNode,float delData){
    struct node* del = searchData(myNode,delData);
    del->data = ' ';
    return myNode;
}

int main(){
    struct node* one = oneMal(one);
    struct node* two = oneMal(two);
    struct node* three = oneMal(three);
    struct node* four = oneMal(four);
    struct node* five = oneMal(five);
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
    struct node* upD = updateData(one,1,16.7);
    struct node* delData = deleteData(upD,3.5);
    print(delData,2.3);
    return 0;
}
