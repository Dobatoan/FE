#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Write_File()
{	char s[50];
	printf("Nhap vao chuoi ki tu: ");
	gets(s);
	FILE *f;
	f = fopen("BAI1.INT","w");
	fprintf(f,"%d\n",strlen(s));
	fputs(s,f);
	fclose(f);
}

void Read_FILE()
{
	int n,i,count = 0;
	char *key = "a";
	FILE *f;
	f = fopen("BAI1.INT","r");
	fscanf(f,"%d\n",&n);
	int arr[n];
	char s[n];
	fgets(s,n+1,f);
	puts(s);
	fclose(f);
	for(i=0;i<n;i++)
	{
		if(s[i]==57)
		{
			arr[count] = i;
			count++;
		}
	}
	f = fopen("BAI1.OUT","w");
	fprintf(f,"%d\n",count);
	for(i=0;i<count;i++)
		fprintf(f,"%d\t",arr[i]);
	fclose(f);
}
int main() {
	Write_File();
	Read_FILE();
	return 0;
}

