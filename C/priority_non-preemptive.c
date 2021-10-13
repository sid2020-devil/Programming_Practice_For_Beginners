
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of process: ");
    scanf("%d",&n);
    int bt[n],at[n],p[n],ct[n],tat[n],wt[n],rt[n],p2[n],temp=0;
    float ttat=0,twt=0;
    
    printf("\nEnter priority: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
        if(i!=0)
            p2[i]=p[i];
    }
        
    printf("\nEnter Burst Time: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
        ct[i]=0;
    }
        
    printf("\nEnter Arrival Time: ");
    for(int i=0;i<n;i++)
        scanf("%d",&at[i]);
        
          
    for(int i=1;i<n-1;i++)
    {
        int maxi = i;
        for(int j=i+1;j<n;j++)
        {
            if(p2[maxi]<p2[j])
                maxi=j;
        }
        temp=p2[i];
        p2[i]=p2[maxi];
        p2[maxi]=temp;
    }

    ct[0]=bt[0];
    int ctemp=ct[0];
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        if(p2[i]==p[j])
        {
            ct[j]=bt[j]+ctemp;
            ctemp=ct[j];
        }
    }
    
    for(int i=0;i<n;i++)
    {
        tat[i]= ct[i]-at[i];
        wt[i]= tat[i]-bt[i];
        
        ttat = ttat + tat[i];
        twt = twt + wt[i];
    }
    
    printf("\nProcess\tPT\tBT\tAT\tCT\tTAt\tWT\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d",i+1,p[i],bt[i],at[i],ct[i],tat[i],wt[i]);
        printf("\n");
    }
    printf("\nAverage Turn Around Time: %f\n",ttat/n);
    printf("Average Wating Time: %f",twt/n);
    return 0;
}
