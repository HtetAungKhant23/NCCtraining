//
// Created by Htet Aung Khant on 12/12/2022.
//

#ifndef MINIDBWITHLL1_MINIDBWITHLL_H
#define MINIDBWITHLL1_MINIDBWITHLL_H

#include "stdio.h"
#include "stdlib.h"

struct node{
    int data;
    struct node* next1;
    struct node* next2;
};

struct node* takeMal(struct node* myNode){
    myNode = (struct node*) malloc(sizeof (struct node));
    return myNode;
}

struct node* takeAndLink(int data){
    struct node* parent = takeMal(parent);
    parent->data = 1;
    parent->next1 = NULL;
    parent->next2 = NULL;
    struct node* toReturn = parent;
    struct node* forPar = parent;
    struct node* forChild;
    for(int a=1; a<=data; a++){
        struct node* child = takeMal(child);
        child->data = a;
        forPar->next1 = child;
        child->next1 = NULL;
        child->next2 = NULL;
        forPar = forPar->next1;
    }

    struct node* previous = parent->next1;
//    struct node* previousForChild = parent->next1;
    struct node* previousForChild = previous;

    for(int i=2; i<=data; i++){
        struct node* child = takeMal(child);
        child->data = i;
        parent->next2 = child;
        child->next1 = NULL;
        child->next2 = NULL;

        parent = parent->next2;
        forChild = parent;

        for(int a=1; a<=data; a++){
            struct node* child1 = takeMal(child1);
            child1->data = a;
            forChild->next1 = child1;
            previousForChild->next2 = forChild->next1;
            previousForChild = previousForChild->next1;
            child1->next1 = NULL;
            child1->next2 = NULL;
            forChild = forChild->next1;
        }

        previous = previous->next2;
        previousForChild = previous;


    }

    return toReturn;

}

void print(struct node* myNode){
    if(myNode==NULL){
        printf("node is null");
        return;
    } else{
        while (myNode != NULL){
            if(myNode->data == 97){
                printf("data is = %d",myNode->data);
                break;
            } else{
                myNode = myNode->next2;
            }
        }
    }
}














#endif //MINIDBWITHLL1_MINIDBWITHLL_H
