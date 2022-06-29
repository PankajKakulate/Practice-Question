/////////////////////////////////////////////////////////////////
// Function name : FindPerfectNumbers()
// Description   : Find Perfect numbers in Linked List
// Input         : Struct * 
// Output        : void
// Date          : 21/06/2022
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

bool cheackPerfect(int iNo){
    int iCnt=0;
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for ( iCnt = 1; iCnt <iNo; iCnt++)
    {
            if((iNo%iCnt)==0)
            {
                iSum=iSum+iCnt;
            }
    }
    
    if(iNo==iSum){
        return true;
    }else{
        return false;
    }
}
void FindPerfectNumbers(PNODE head){
     int iMin=0;

    if(head==NULL){
        return ;
    }else{
        printf("Perfect numbers from list are below: \n");
        while (head!=NULL)
        {
            if((cheackPerfect(head->data))==true)
            {
                printf("%d ",head->data);
                
            }
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

    insertFirst(&first,89);
    insertFirst(&first,6);
    insertFirst(&first,41);
    insertFirst(&first,17);
    insertFirst(&first,28);
    insertFirst(&first,11);
    Display(first);
    printf("Total Node are : %d\n",Count(first));

    

    FindPerfectNumbers(first);
    
    return 0;
}
/*
input           : 11 28 17 41 6 89
output          : 6 28
Time Complexity : O(N)
*/