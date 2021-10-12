#include<stdio.h>
int alloc[100][100];
int max[100][100];
int need[100];
int avail[100];
int n,r;
void input()
{
  int i,j;
  printf("\nEnter number of process ");
  scanf("%d",&n);
  printf("\nenter number of resources ");
  scanf("%d",&r);
  printf("\nENTER allocation matrix ");
  for( i = 0;i<n;i++)
  {
    for( j =0;j<r;j++)
    {
      scanf("%d",&alloc[i][j]);
    }
  }
  printf("\nenter max matrix");
  for( i = 0;i<n;i++)
  {
    for( j =0;j<r;j++)
    {
      scanf("%d",&max[i][j]);
    }
  }
  printf("\nenter available resources");

    for(int j =0;j<r;j++)
    {
      scanf("%d", &avail[j]);
    }
}
  void show()
  {
    int i,j;
    printf("\nProcess \t Allocation \t max \t available");
    for(i=0;i<n;i++)
    {
      printf("\nP%d\t",i+1);
      printf("\t\t");
      for(j =0;j<r;j++)
      {
        printf("%d",alloc[i][j]);
      }
      printf("\t\t");
      for(j = 0;j<r;j++)
      {
        printf("%d",max[i][j]);
      }
      printf("\t\t");
      if(i==0)
      {
        for(j =0;j<r;j++)
        {
          printf("%d",avail[j]);
        }
      }

    }
  }
void cal()
{
  int finish[100],temp,need[100][100],flag = 1,k ,cl =0;
  int safe[100];
  int i ,j;
  for(i=0;i<n;i++)
  {
    finish[i]=0;
  }
  for( i = 0;i<n;i++)
  {
    for( j =0;j<r;j++)
    {
      need[i][j] = max[i][j] - alloc[i][j];
    }
  }
  printf("\n");
  while(flag)
  {
    flag =0;
    for(i=0;i<n;i++)
    {
      int c =0;
      for(j = 0;j<r;j++)
      {
        if(finish[i]==0 && need[i][j]<=avail[j])
        {
          c++;
          if(c==r)
          {
            for(k = 0;k<r;k++)
            {
              avail[k]+=alloc[i][j];
              finish[i] = 1;
              flag = 1;
            }
            printf("p%d",i);
            if(finish[i] == 1)
            {
              i =n;
            }
          }
        }
      }
    }
  }
  for(i = 0;i<n;i++)
  {
    if(finish[i]==1)
    {
      cl++;
    }
    else
    {
      printf("p%d",i+1);
    }
  }
  if(cl==n)
  {
    printf("\nThe system is in safe state");
  }
  else
  {
    printf("\nprocess  are in dead lock");
    printf("\nSysstem is in unsafe state");
  }
}

int main()
{
  printf("\nBANKERS ALGORITHM");
  input();
  show();
  cal();
  return 0;
}
