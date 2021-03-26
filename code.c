#include <stdio.h>
int main()
{
     char operator;
     float num1,num2,result;
     printf("Enter the operator(+,-,/,*) :");
     scanf("%c",&operator);
     printf("Enter the numbers :");
     scanf("%f%f",&num1,&num2);
       
       switch (operator)
         {
           case '+':
              result=num1+num2;
              break;
           case '-':
               result=num1-num2;
               break;
            case '/':
               result=num1/num2;
               break;
             case '*':
               result=num1*num2;
               break;
          default:
              printf("Enter the correct operator :");
          }
          printf("\n Result of %.2f and %.2f = %.2f",num1,operator,num2,result);
  return 0;
  }
