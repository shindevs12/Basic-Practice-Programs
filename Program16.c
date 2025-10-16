///////////////////////////////////////////////////////
//
//Rqquired Header Files
//
///////////////////////////////////////////////////////
#include<stdio.h>           //Fot Input output
#include<stdbool.h>         //fot bool datatype

///////////////////////////////////////////////////////
//
//Function name: CheckEvenOdd
//Description:   It is use to check even or odd
//Input          Integer
//Output         Boolean
//Author         Vaishali Ganesh Shinde
//Date:          10/10/2025
///////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
int iRem = 0;

  iRem = iNo % 2;

  if(iRem == 0)
  {
     return true;    

  } 
  else
  {
     return false;  
  }
}
///////////////////////////////////////////////////////
//
//Entry point function of the application
//
///////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    bool bRet = false;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {   printf("%d is Even Number",iValue); }
    else
    {  printf("%d is Odd Number",iValue);   }

    printf("Result is : %d\n",bRet);



    return 0;
}
///////////////////////////////////////////////////////
//
//
//
//
///////////////////////////////////////////////////////