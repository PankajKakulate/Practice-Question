/////////////////////////////////////////////////////////////////
// Function name : SecondMaximum()
// Description   : display second maximum number in Linked List
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


int SecondMaximum(PNODE head){
     int iMin=0;
     int iMax=(head->data);
     int iSecondMax=0;
     PNODE temp=head;

    if(head==NULL){
        return 0 ;
    }else{
        
        while (head!=NULL)
        {
            if((iMax<(head->data)))
            {
                iMax=(head->data);
                
            }
            head=head->next;
        }
        while (temp!=NULL)
        {
            if((temp->data)==iMax)
            {
                temp=temp->next;
            }
            if((iSecondMax<(temp->data)))
            {
                iSecondMax=(temp->data);
                
            }
            temp=temp->next;
        }
    }
    return iSecondMax;
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

  
    insertFirst(&first,240);
    insertFirst(&first,320);
    insertFirst(&first,230);
    insertFirst(&first,110);
    Display(first);
    printf("Total Node are : %d\n",Count(first));

    

   ret=SecondMaximum(first);
    printf("The Second Maximum Number is : %d\n",ret);
    return 0;
}
/*
input           : 110 230 320 240
output          : 240
Time Complexity : O(N)
*/