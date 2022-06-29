/////////////////////////////////////////////////////////////////
// Function name : Reverse()
// Description   : display reverse of digits in Linked List
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

int ReversesDigi(int no){
    int iDigit=0;
    int iRev=0;
    while(no!=0){
        iDigit=no%10;
        iRev=iRev*10+iDigit;
        no=no/10;
    }
    return iRev;
}
void Reverse(PNODE head){
    if(head==NULL){
        return ;
    }else{
        
        while (head!=NULL)
        {
            head->data = ReversesDigi(head->data);   
            head=head->next;
        }
        
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
    Reverse(first);
    Display(first);
    printf("Total Node are : %d\n",Count(first));
    return 0;
}
/*
input           : 11 28 17 41 6 89
output          : 11 82 71 14 6 98
Time Complexity : O(2N)
*/iSum
iSum
iSum