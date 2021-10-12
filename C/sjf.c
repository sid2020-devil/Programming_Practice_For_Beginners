#include<stdio.h>
 int main()
{
    int p[20],bt[20],wt[20],tat[20];
    int n,i,j,total=0,pos,temp;
    float avg_wt,avg_tat;
    int t_tat=0,t_wt=0;
    
    printf("\nEnter number of process:");
    scanf("%d",&n);
  
   printf("\n Enter Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;         
    }
  
   //sorting of burst times
    for(i=0;i<n;i++)
    {
        pos=i;
        
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
  
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
  
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
   
    wt[0]=0;            
	for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
  
        total+=wt[i];
    }
  
    avg_wt=(float)total/n;      
    total=0;
  
    printf("\nProcess\t    Burst Time \t\tWaiting Time \t Turnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];   
        total+=tat[i];
        printf("\np[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
        
        t_tat = t_tat + tat[i];
	 t_wt = t_wt + wt[i];
    }
  
    avg_tat=(float)total/n;    
    
    printf("\n\nTotal Turn Around Time:%d",t_tat);
    printf("\nTotal Waiting Time:%d",t_wt);
    printf("\n\nAverage Turnaround Time=%f",avg_tat);
    printf("\nAverage Waiting Time=%f",avg_wt);

	
}
