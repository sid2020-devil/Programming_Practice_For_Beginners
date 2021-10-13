#include<stdio.h>
int mat[10][8];
float avg_tt=0,avg_wt=0;
void swap(int *a,int *b) //function to swap two values
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Sorts processes according to their arrival time
void arrangeArrival(int num,int mat[][8])
{
    int tmp;
    for(int i=0; i<num; i++) {
        for(int j=0; j<num-i-1; j++) {
            if(mat[j][1] > mat[j+1][1]) {
                for(int k=0; k<8; k++)
                    swap(&mat[j][k], &mat[j+1][k]);
            }
        }
    }
    for(int i=0;i<num-1;i++) {
        if(mat[i][1]==mat[i+1][1]) {
            if(mat[i+1][6]<mat[i][6]) {
                for(int k=0; k<8; k++)
                    swap(&mat[i][k], &mat[i+1][k]);
            }
        } 
    }
}

//Sort processes according to Process No
void arrangeProcessno(int num)
{
    int tmp; 
    for(int i=0; i<num; i++) {
        for(int j=0; j<num-i-1; j++) {
            if(mat[j][0] > mat[j+1][0]) {
                for(int k=0; k<8; k++)
                    swap(&mat[j][k], &mat[j+1][k]);
            }
        }
    }
}

//Calculates Waiting and Turnaround Time
void calculate(int n, int sum_bt)
{
    int largest;
    for(int time=mat[0][1];time<sum_bt;) {
        largest=9;
        for(int i=0;i<n;i++) {
            if(mat[i][1]<=time && mat[i][7]!=1 && mat[i][6]>mat[largest][6])
                largest=i;
        }
        time+=mat[largest][2];
        mat[largest][3]=time;
        mat[largest][4]=mat[largest][3]-mat[largest][1]-mat[largest][2];
        mat[largest][5]=mat[largest][3]-mat[largest][1];
        mat[largest][7]=1;
        avg_wt+=mat[largest][4];
        avg_tt+=mat[largest][5];
    }
    avg_tt/=n;
    avg_wt/=n;
}

void main()
{
    int num,i,time_sum=0;
    printf("Enter number of Process: ");
    scanf("%d",&num);
    printf("\nEnter the ProcessName, Arrival Time, Burst Time & Priority:\n");
    for(i=0; i<num; i++) {
        printf("P");
        scanf("%d%d%d%d",&mat[i][0],&mat[i][1],&mat[i][2],&mat[i][6]);
        time_sum+=mat[i][2];
        mat[i][7] = 0;
    }
    arrangeArrival(num, mat);
    calculate(num,time_sum);
    arrangeProcessno(num);
    printf("\nProcess  Burst Time  Arrival Time  Priority  Waiting Time  Turnaround Time");
    for(int i=0; i<num; i++) 
        printf("\n  P%d\t%6d\t\t%3d\t%7d\t%11d\t%11d",mat[i][0],mat[i][2],mat[i][1],mat[i][6],mat[i][4],mat[i][5]);
    printf("\n\nAverage Waiting time: %.3f",avg_wt);
    printf("\nAverage Turn Around Time: %.3f\n\n",avg_tt);
}