#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   int num1, num2, res;
   char choice;

   do
   {
      printf("1. Addition\n");
      printf("2. Subtraction\n");
      printf("3. Multiplication\n");
      printf("4. Division\n");
      printf("5. Modulus\n");
      printf("6. Exit\n");

      printf("Enter your choice (1-6): ");
      scanf("%c", &choice);

      switch(choice)
      {
         case '1' :
            printf("Enter the two number: ");
            scanf("%d%d", &num1, &num2);
            res = num1 + num2;
            printf("%d + %d = %d",num1, num2, res);
            break;

         case '2' :
            printf("Enter the two number: ");
            scanf("%d%d", &num1, &num2);
            res = num1 - num2;
            printf("%d - %d = %d",num1, num2, res);
            break;

         case '3' :
            printf("Enter the two number: ");
            scanf("%d%d", &num1, &num2);
            res = num1 * num2;
            printf("%d * %d = %d",num1, num2, res);
            break;

         case '4' :
            printf("Enter the two number: ");
            scanf("%d%d", &num1, &num2);
            res = num1/num2;
            printf("%d / %d = %d",num1, num2, res);
            break;

         case '5' :
            printf("Enter the two number: ");
            scanf("%d%d", &num1, &num2);
            res = num1%num2;
            printf("%d %% %d = %d",num1, num2, res);
            break;

         case '6' : exit(0);
            break;

         default : printf("Wrong choice..!!\n");
      }
      printf("\n..........................\n");

   }while(choice!=6 && choice!=getchar());

   getch();
}
