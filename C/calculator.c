#include<stdio.h>
#include<stdlib.h>
void add()
{
  int a,b;
  printf("\n");
  printf("Enter the value of a:");
  scanf("%d",&a);
  printf("\nEnter the value of b:");
  scanf("%d",&b);
  printf("\nThe sum is :%d",a+b);
  return;
}

void sub()
{
  int a,b;
  printf("\n");
  printf("Enter the value of a:");
  scanf("%d",&a);
  printf("\nEnter the value of b:");
  scanf("%d",&b);
  printf("\nThe difference is: %d",a-b);
  return;
}

void product()
{
  int a,b;
  printf("\n");
  printf("Enter the value of a:");
  scanf("%d",&a);
  printf("\nEnter the value of b:");
  scanf("%d",&b);
  printf("\nThe product is : %d",a*b);
  return;
}

void divide()
{
  int a,b;
  printf("\n");
  printf("Enter the value of a:");
  scanf("%d",&a);
  printf("\nEnter the value of b:");
  scanf("%d",&b);
  printf("\nThe quotient is : %d",a/b);
  return;
}

int main()
{
    int ch,a=0,b=0,c=0;
    do {
    printf("Enter the choice");
    printf("\n1.Add two numbers\n2.Find the difference\n3.Find the product\n4.Divide\n5.Exit");
    scanf("%d",&ch);
    switch (ch) {
      case 1:
        add();
        break;
      case 2:
        sub();
        break;
      case 3:
        product();
        break;
      case 4:
        divide();
        break;
      case 5:
        exit(0);
      default:
        {
          printf("Enter valid option!\n");
          continue;
        }
    }
  } while(ch<=5);
    return 0;

}
