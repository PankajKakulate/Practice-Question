/////////////////////////////////////////////////////////////////
// Function name : SumDigit()
// Description   : display addtion of digits in Linked List
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

int sumDigits(int no){
    int iDigit=0;
    int iSum=0;
    while(no!=0){
        iDigit=no%10;
        iSum+=iDigit;
        no=no/10;
    }
    return iSum;
}
void SumDigit(PNODE head){
    
     
     PNODE temp=head;

    if(head==NULL){
        return ;
    }else{
        printf("Sum of digits in linked list are: ");
        while (head!=NULL)
        {
            printf("%d ",(sumDigits((head->data))));   
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

  
    insertFirst(&first,640);
    insertFirst(&first,240);
    insertFirst(&first,20);
    insertFirst(&first,230);
    insertFirst(&first,110);
    Display(first);
    printf("Total Node are : %d\n",Count(first));

    

    SumDigit(first);
    
    return 0;
}
/*
input           : 110 230 20 240 640
output          : 2 5 2 6 10
Time Complexity : O(N)
*/