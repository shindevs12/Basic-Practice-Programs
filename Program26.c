//Dynamic function
#include<stdio.h>    
    
void Display(int iFrequancy)
{
         int iCnt=0;
          for(iCnt = 1; iCnt <= iFrequancy; iCnt++);
          {
           printf("Jay Ganesh...\n");
           }

}
   
    
int main()
{
    
    int iCount = 0;

    printf("Enter the frquency\n");
    sacnf("%d",&iCount);

    Display(iCount);
    
    return 0;
}


