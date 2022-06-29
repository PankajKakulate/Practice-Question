/*
Function name : SummationOfAllNodes()
Description   : Returns Summation of all nodes
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

int SummationOfAllNodes(PNODE head){
     int iSum=0;
    if(head==NULL){
        return 0;
    }else{
        
        while (head!=NULL)
        {
            
            iSum=iSum+head->data;
            head=head->next;
        }
        return iSum;
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
    insertFirst(&first,40);
    insertFirst(&first,30);
    insertFirst(&first,20);
    insertFirst(&first,10);
    Display(first);
    printf("Total Node are : %d\n",Count(first));

    

    ret=SummationOfAllNodes(first);
    printf("Summation of all Nodes is : %d\n",ret);
    return 0;
}

/*
input           : 10 20 30 40 
output          : 100
Time Complexity :O(N)
*/