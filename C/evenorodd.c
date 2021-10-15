//C Program to Find Even or Odd Using if else or Modulus Operator 

#include<stdio.h>
void main()
{
 // variable Declaration
    int x;  

//input number
    printf("Enter a number\n");
    scanf("%d",&x);

 //Checking Whether a Number is Even or Odd 
    if(x%2==0)   // Modulus (%) returns remainder
        printf("Even number");
    else
        printf("Odd number");

}
