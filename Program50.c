// loop kami karaycha

#include<stdio.h>
void DisplayFactors(int iNo)
{
    int iCnt = 0; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt =1; iCnt <= (iNo/2); iCnt++)
{
   if((iNo % iCnt) == 0)
   {
    printf("%d\n",iCnt);
   }
}
// Time Complexity : 0(N\2)   
   
}
int main()
{   
    int iValue = 0;
    

    printf("Enter Number");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    

    


    return 0;
}
