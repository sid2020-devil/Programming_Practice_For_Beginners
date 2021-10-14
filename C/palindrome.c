#include<stdio.h>
#include<string.h>

int main(){
  char a[100];
  int c=0;
  printf("Enter the word:");
  scanf("%s",a);
  int n=strlen(a);
  for(int i=0;a[i]!='\0';i++)
    printf("%c",a[i]);
  /*for(int i=0;a[i]!='\0';i++)
    if(strcmp(*a[i],*a[n-1-i])!=0)
      c=1;*/
  if(c==0)
    printf("The given word is a palindrome");
  else
    printf("The given word is a palindrome.");
  return(0);
}
