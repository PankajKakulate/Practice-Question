/*
Function name : MaximumNumber()
Description   : FInd Largest number in Linked List
Input         : Struct * 
Output        : Integer
Date          : 22/05/2022
Author        : Pankaj Keda Kakulate
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next;
};
typedef struct node NODE ;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int MaximumNumber(PNODE head){
     int iMax=0;

    if(head==NULL){
        return 0;
    }else{
        iMax=head->data;
        while (head!=NULL)
        {
            if(iMax<(head->data)){
                iMax=head->data;
            }
            head=head->next;
        }
        return iMax;
    }
}

void insertFirst(PPNODE head,int no){
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if ((*head)==NULL)
    {
        *head=newn;
    }else{
        newn->next=(*head);
        (*head)=newn;
    }
    

}

void Display(PNODE head){
    if(head==NULL){
        return;
    }else{
        printf("LL Node are as below :\n ");
        while (head!=NULL)
        {
            printf("%d  ",head->data);
            head=head->next;
        }
        printf("\n");
    }
}

int Count(PNODE head){
    int iCnt=0;
    if(head==NULL){
        return 0;
    }else{
        
        while (head!=NULL)
        {
            iCnt++;
            head=head->next;
        }
        return iCnt;
    }
}



int main(){
    
    PNODE first=NULL;
    int ret=0;
;
    insertFirst(&first,240);
    insertFirst(&first,320);
    insertFirst(&first,230);
    insertFirst(&first,110);
    Display(first);
    printf("Total Node are : %d\n",Count(first));

    

    ret=MaximumNumber(first);
    printf("Largest Node is : %d\n",ret);
    return 0;
}

/*
input           : 110 230 320 240
output          : 320
Time Complexity :O(N)
*/