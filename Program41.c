//Short Hand Operater

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo; iCnt+=2) //Short Hand Assignment Operator icnt+=2
    {
        printf("%d\t",iCnt);
         
    }
    printf("\n");
}

// Time Complexity : 0(N\2)

int main()
{   
    int iValue = 0;

    printf("Please enter frequancy :");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}