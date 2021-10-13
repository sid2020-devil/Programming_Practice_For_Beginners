#include<stdio.h>
#include<string.h>
int main()
{
  char sen[20],let;
  int count=0;
  printf("Enter the sententce (Limit 20)");
  scanf("%s",&sen);
  printf("Enter the letter :");
  scanf("%c",&let);
  for(int i=0;i<20;i++)
    if(strcmp(sen[i],let)==0)
      count++;
  printf("Count of letter %c is :%d",let,count);
  return 0;
}
