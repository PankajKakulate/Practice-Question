/////////////////////////////////////////////////////////////////
// Program to print 5 to 1 numbers on screen.
/////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////
//Function Name : Display
//Description   : print 5 to 1 numbers on screen 
//input         : Nothing
//output        : Nothing
//Date          : 24/04/2022
//Author        : Pankaj Keda Kakulate 
/////////////////////////////////////////////////////////////////
void Display(){
    int i=0;
    for ( i = 5; i >= 1; i--)
    {
        printf("%d ",i);
    }
    printf("\n");    
}

int main(){
    Display();
    return 0;
}