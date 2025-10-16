/*
Step1: Understand the problem Statement
Step2:Write the algorithm 
Step3:Decide the peogramming language
Step4:Write the program
Step5:Test the program
*/ 

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

#include<stdio.h>

float AdditionTwoNumbers(float fNo1,float fNo2)
{
    float fSum = 0.0f;

    if(fNo1 < 0.0f) //Updator
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f) //Updator
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2; //Business Logic
    return fSum;

}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;
    
    printf("Enter first number:\n");
    scanf("%f",&fValue1);
     
    printf("Enter second number:\n");
    scanf("%f",&fValue2);

    
    fRet = AdditionTwoNumbers(fValue1,fValue2);


    printf("Addition is : %f\n",fRet);
    
    return 0;
}