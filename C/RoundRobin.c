#include<stdio.h>
#include<conio.h>
int TRUE = 0;
int FALSE = -1;

int tbt[30],bt[30],wt[30],tat[30];
int i,n=0,qt=0,tqt=0,time=0,lmore;
int t_tat=0,t_wt=0;
int main()
{

printf("\n Enter no. of process:");
scanf("%d",&n);

printf("\n Enter Quantum Time:");
scanf("%d",&qt);

for(i=0;i<n;i++)
{
	printf("\nEnter Burst Time of Processor[%d]:",i+1);
	scanf("%d",&bt[i]);
	tbt[i] = bt[i];
	wt[i] = tat[i] = 0;
}
lmore = TRUE;
while(lmore == TRUE)
{
	lmore = FALSE;
	for(i=0;i<n;i++)
	{
		if(bt[i] != 0)
		wt[i] = wt[i] + (time - tat[i]);
		tqt = 1;

		while((tqt <= qt)&&(bt[i] !=0))
		{
			lmore = TRUE;
			bt[i] = bt[i] -1;
			tqt++;
			time++;
			tat[i] = time;
		}
	}
}
printf("\nProcess \tBurstTime\tTurnAroundTime\tWaitingTime\n");
for(i=0;i<n;i++)
{
	printf("Process%d\t\t%d\t\t%d\t\t%d\n",i+1,tbt[i],tat[i],wt[i]);
	t_tat = t_tat + tat[i];
	t_wt = t_wt + wt[i];
}
printf("\nTotal Turn Around Time:%d",t_tat);
printf("\nAverage Turn Around Time:%d",t_tat/n);
printf("\nTotal Waiting Time:%d",t_wt);
printf("\nAverage Waiting Time:%d",t_wt/n);
getch();
return 0;
}

