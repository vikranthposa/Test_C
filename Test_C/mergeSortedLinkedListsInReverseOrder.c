//
//  mergeSortedLinkedLists.c
//  Test_C
//
//  Created by Vikranth Posa on 02/12/15.
//  Copyright (c) 2015 Vikranth Posa. All rights reserved.
//

#include <stdio.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * link;
};

void printLinkedList(struct node * head)
{
    while (head!=NULL) {
        printf("%d -> ",head->data);
        head = head->link;
    }
    printf("NULL\n");
}

struct node * newNode(int data)
{
    
    struct node * new = (struct node *)malloc(sizeof(struct node *));
    new->link = NULL;
    new->data =data;
    return (new);
};

struct node * Reverse(struct node ** head)
{
    struct node * cur, * next, *prev=NULL;
    struct node *last = *head;
    cur = *head;
    while (cur!=NULL) {
        next = cur->link;
        cur->link = prev;
        prev = cur;
        cur = next;
    }
    *head = prev;
    return last ;
}


struct node * MergeReverseLinkedLists(struct node *n1,struct node * n2)
{
    struct node * temp, *prev=NULL;
    if (n1 == NULL) {
        return Reverse(&n2);
    }
    if (n2 == NULL) {
        return Reverse(&n1);
    }
    
    if (n1->data > n2->data) {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }//always keep first list which starts with lower value
    
    while (n1!=NULL && n2!=NULL) {
        if (n2->data < n1->data) {
            temp = n2;
            n2 = n2->link;
            temp->link = prev;
            prev = temp;
            continue;
        } else {
            temp = n1;
            n1 = n1->link;
            temp->link = prev;
            prev = temp;
        }
    }
    if (n2 == NULL) {
        temp = Reverse(&n1);
        temp->link = prev;
        return n1;
    } else {
        //(n1 == NULL)
        temp = Reverse(&n2);
        temp->link = prev;
        return n2;
    }
    
}

/*
int main()
{
    struct node * n1 = newNode(2);
    n1->link = newNode(10);
    n1->link->link = newNode(20);
    n1->link->link->link = newNode(30);
    n1->link->link->link->link = newNode(40);
    
    struct node * n2 = newNode(15);
    n2->link = newNode(35);
    n2->link->link = newNode(55);
    n2->link->link->link = newNode(75);
    
    printLinkedList(n1);
    printLinkedList(n2);
    
    struct node *n3 = MergeReverseLinkedLists(n1,n2);
    
    printLinkedList(n3);
    
    return 0;
}
*/