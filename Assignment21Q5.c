/////////////////////////////////////////////////////////////////
// Function name : DisplayLarge()
// Description   : display Smallest digits in Linked List
// Input         : Struct * 
// Output        : void
// Date          : 22/06/2022
// Author        : Pankaj Keda Kakulate
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
    int data ;
    struct node *next;
};
typedef struct node NODE ;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int DisplayLargeDigi(int no){
    int iDigit=0;
    int iLarge=(no%10);
    
    while(no!=0){
        iDigit=no%10;
        if(iLarge<iDigit)
        {
            iLarge=iDigit;
        }
        no=no/10;
    }
    return iLarge;
}
void DisplayLarge(PNODE head){
    if(head==NULL){
        return ;
    }else{
        printf("Largest digits in nodes are: ");
        while (head!=NULL)
        {
            
            printf("%d ",DisplayLargeDigi(head->data));
            head=head->next;
        }
        printf("\n");
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

    
    insertFirst(&first,419);
    insertFirst(&first,532);
    insertFirst(&first,250);
    insertFirst(&first,11);
    Display(first);
    printf("Total Node are : %d\n",Count(first));
    DisplayLarge(first);
    
    return 0;
}
/*
input           : 11 250 532 419 
output          : 1 0 2 1
Time Complexity : O(2N)
*/