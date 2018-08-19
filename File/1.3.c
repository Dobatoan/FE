#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int SoHoanHao(int number)
{	
	int i,sum=0;
    for (i = 1; i < number; i ++)
        if (number%i==0)
        	sum+=i;
    if(sum==number)
    	return 1;
return 0;
}
void Write_file()
{
	int i, x, y;
	time_t t;
	srand((unsigned) time(&t));
	
	FILE *f;
	f = fopen("BAI1.INT", "w");
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d",&x)	;
	fprintf(f, "%d\n",x);
	for(i=0;i<x;i++)
	{	
		y= rand()%50;
		printf("%d\t",y);
		fprintf(f,"%d\t",y);
	}
	fclose(f);
}

void Read_file()
{	int i, n, x=0;
	FILE *f;
	f = fopen("BAI1.INT", "r");
	fscanf(f,"%d\n",&n);
	int arr[n];
	int arr_nt[n];
	for(i=0;i<n;i++)
	{
		fscanf(f,"%d\t",&arr[i]);
	}
		fclose(f);
	
	for(i=0;i<n;i++)
	{
		if(SoHoanHao(arr[i])==1)
		{	arr_nt[x] = arr[i];
			x++;
		}
	}
	f = fopen("BAI1.OUT","w");
	
	fprintf(f, "%d\n",x);
	for(i=0;i<x;i++)
		fprintf(f, "%d\t",arr_nt[i]);
	fclose(f);
}
int main() {
	Write_file();
	Read_file();
	
	return 0;
}

