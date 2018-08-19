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
{	if(kiemtra(giatri)==1)
	{
    Node *p = (Node *)malloc(sizeof(Node));    
	p->Data = giatri;                     
	p->Next = Head;                          
	Head = p; 
	printf("\nThem %d vao danh sach thanh cong.",giatri);                              
	}
	else
	{
		printf("\n%d da co trong danh sach, khong duoc them vao danh sach",giatri);
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

int kiemtra(int number)
{
    Node *p = Head;
    while (p != NULL)
    {
        if(p->Data == number)
			return 0;        
        p = p->Next;
    }
return 1;
}
 
 int Dem_Node()
{
    Node *p = Head; int dem = 0;
    while (p != NULL)
    {
        dem++;
        p = p->Next;
    }
    return dem;
}

int main()
{	
    Head = NULL; Last = NULL;
    themDau(1);
    themDau(2);
    themDau(3);
    themDau(4);
    themDau(5);
    themDau(5);
   	printf("\nDanh sach ban dau: "); hienThiDS();
	printf("\nSo phan tu cua danh sach: %d",Dem_Node());
    return 0;
}

