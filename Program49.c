#include<stdio.h>
void DisplayNonFactors(int iNo)
{
    int iCnt = 0; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt =1; iCnt < iNo; iCnt++)
{
   if((iNo % iCnt) != 0)
   {
    printf("%d\n",iCnt);
   }
}
// Time Complexity : 0(N)   
   
}
int main()
{   
    int iValue = 0;
    

    printf("Enter Number");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);
    

    


    return 0;
}
