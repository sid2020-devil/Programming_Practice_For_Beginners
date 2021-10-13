#include<stdio.h>
#include<string.h>

int main()
{
int count=0;
  char sen[20],let;
  printf("Enter the sentence(limit 20) :");
  scanf("%s",&sen);
  printf("Enter the letter :");
  scanf("%c",&let);
  for(int i=0;i<20;i++)
  {
    if(strcmp(sen[i],let)==0)
      count++;
  }
  printf("The letter count is %d",count);
  return 0;
}
