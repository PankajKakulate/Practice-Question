/////////////////////////////////////////////////////////////////
// Function name : DisplayPalindrome()
// Description   : display Palindrome numbers in Linked List
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

bool DisplayPalindromesDigi(int no){
    int iDigit=0;
    int iRev=0;
    int iOrignal=no;
    while(no!=0){
        iDigit=no%10;
        iRev=iRev*10+iDigit;
        no=no/10;
    }
    if(iOrignal==iRev){
        return true;
    }else{
        return false;
    }
}
void DisplayPalindrome(PNODE head){
    if(head==NULL){
        return ;
    }else{
        printf("Palindrome Numbers are: ");
        while (head!=NULL)
        {
            if(DisplayPalindromesDigi(head->data)==true){
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
    insertFirst(&first,414);
    insertFirst(&first,17);
    insertFirst(&first,28);
    insertFirst(&first,11);
    Display(first);
    printf("Total Node are : %d\n",Count(first));
    DisplayPalindrome(first);
    
    return 0;
}
/*
input           : 11 28 17 414 6 89
output          : 11 414 6
Time Complexity : O(2N)
*/