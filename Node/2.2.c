#include <stdio.h>    
#include <conio.h>    
#include <stdlib.h>  
 
typedef struct Node
{
    int Data;
    struct Node *Next;
} Node;
 
Node *Head, *Last;
 
 
void themDau(int giatri)
{	if(giatri<0)
	{
    Node *p = (Node *)malloc(sizeof(Node));    
	p->Data = giatri;                     
	p->Next = Head;                          
	Head = p;                               
	}
}
 

 void hienThiDS()
{
    Node *p = Head;
    while (p != NULL)
    {
        printf("%d ", p->Data);        
        p = p->Next;
    }
}

int Boi_so(int number)
{
    Node *p = Head; 
	int count =0;
    while (p != NULL)
    {	
        if(p->Data%number ==0)
        	count++;
        p = p->Next;
    }
    return count;
}
 
 
int main()
{	
	int m;
    Head = NULL; Last = NULL;
    themDau(-1);
    themDau(-22);
    themDau(-4);
    themDau(-6);
    themDau(-8);
   	printf("\nDanh sach ban dau: "); hienThiDS();
   	printf("\nNhap vao so nguyen M: ");
   	scanf("%d",&m);
    printf("\nTong so phan tu la boi so cua M la: %d",Boi_so(m)); 
    return 0;
}

