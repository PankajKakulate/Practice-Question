/////////////////////////////////////////////////////////////////
// Function name : SumOfEvenNumbers()
// Description   : sum of even numbers in Linked List
// Input         : Struct * 
// Output        : int
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


int SumOfEvenNumbers(PNODE head){
     int iMin=0;
     int isum=0;

    if(head==NULL){
        return 0 ;
    }else{
        
        while (head!=NULL)
        {
            if(((head->data)%2)==0)
            {
                isum=isum+(head->data);
                
            }
            head=head->next;
        }
        
    }
    return isum;
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

  
    insertFirst(&first,41);
    insertFirst(&first,32);
    insertFirst(&first,20);
    insertFirst(&first,11);
    Display(first);
    printf("Total Node are : %d\n",Count(first));

    

   ret=SumOfEvenNumbers(first);
    printf("The Summation of Even  Numbers is : %d\n",ret);
    return 0;
}
/*
input           : 11 20 32 41
output          : 52
Time Complexity : O(N)
*/