 /* 
Alorithm

START
      Accept first no as NO1
      Accept second no as NO2
      If the input is negative then convert it into positive
      Perform Addition of NO1 & No2
      Display the addition on screen

STOP      
*/

/////////////////////////////////////////////////////////////////
//
//Required Header Files
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name:  AdditionTwoNumbers  
//  Description:    It is use to perform addition
//  Input:          Float,Float
//  Output:         Float
//  Author:         Vaishali Ganesh Shinde
//  Date:           09/10/2025
//
//////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                           float fNo1,              //First input
                           float fNo2               //Second input
                        )
{
    float fSum = 0.0f;                              //To Store the result

    if(fNo1 < 0.0f)                                //Updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)                                //Updator
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                            //Business logic
    return fSum;

}   //End of AdditionTwoNumbers
/////////////////////////////////////////////////////////////////
//
//Entry point for the aaplication
//
/////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;         //To accept use input              
     float fRet = 0.0f;                            //To store the result
    
    printf("Enter first number:\n");
    scanf("%f",&fValue1);
     
    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    
    fRet = AdditionTwoNumbers(fValue1,fValue2);    //Method call


    printf("Addition is : %f\n",fRet);             
    
    return 0;
}   //End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases sucessfully handled by the aaplication
//
//Input1:   10.5        Input2 : 3.2      Output:13.7
//Input1:   -10.5       Input2 : 3.2      Output:13.7
//Input1:   10.5        Input2 : -3.2     Output:13.7
//Input1:   -10.5       Input2 : -3.2     Output:13.7
//Input1:   10.5        Input2 : 0.0      Output:13.7
//
/////////////////////////////////////////////////////////////////