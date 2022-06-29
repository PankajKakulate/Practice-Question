/*
Function name : SearchLastOcc()
Description   : Returns Last occurence of given number from linked list
Input         : Struct * ,Integer
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

int SearchLastOcc(PNODE head,int no){
     int iCnt=0,iLastOcc=0;
    if(head==NULL){
        return 0;
    }else{
        
        while (head!=NULL)
        {
            iCnt++;
            if(head->data==no){
                iLastOcc=iCnt;
            }
            head=head->next;
        }
        return iLastOcc;
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
    int ret=0,no=0;

   
    insertFirst(&first,70);
    insertFirst(&first,30);
    insertFirst(&first,50);
    insertFirst(&first,40);
    insertFirst(&first,30);
    insertFirst(&first,20);
    insertFirst(&first,10);
    Display(first);
    printf("Total Node are : %d\n",Count(first));

    printf("enter the element to search :\n");
    scanf("%d",&no);

    ret=SearchLastOcc(first,no);
    printf("Last occurence of %d is : %d\n",no,ret);
    return 0;
}

/*
input           : 10 20 30 40 50 30 70 
output          : 6
Time Complexity :O(N)
*/