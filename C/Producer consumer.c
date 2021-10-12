#include<stdio.h>
int n=0, buffersize = 0, currentsize = 0;
void producer()
{
	printf("enter the number of elements to be produced");
	scanf("%d",&n);
	if(0<=(buffersize-(currentsize+n)))
	{
		currentsize+=n;
		printf("%d elements produced where buffersize is %d",currentsize,buffersize);
	}
	else
		printf("buffer is not sufficient");
}
void consumer()
{
	int x;
	printf("enter the number of elements to be consumed");
	scanf("%d",&x);
	if(currentsize>=x)
	{
		currentsize = x;
		printf("%d elements produced whereconsume and remaining %d",x,currentsize);
	}
	else
		printf("not poss");
}
int main()
{
	int c;
	
	printf("enter the buffersize");
	scanf("%d",&buffersize);
	do{

	printf("1pro2con3exit");
	printf("enter choice");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			if(buffersize<=currentsize)
			printf("cannod produce");
			else
			producer();
			break;
				case 2:
			if(currentsize<=0)
			printf("cannod consume");
			else
			consumer();
			break;
			default:
				break;
	}
	}while(c!=3);
	return 0;
}