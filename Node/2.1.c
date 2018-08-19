#include <stdio.h>    
#include <conio.h>    
#include <stdlib.h>  
 
typedef struct Node
{
    int Data;
    struct Node *Next;
} Node;
 
Node *Head, *Last;
 
 
void themLast(int Data)
{
    Node *p = (Node *)malloc(sizeof(Node));    
    p->Data = Data;                     
    p->Next = NULL;  
    if (Head == NULL)                        
        Head = p;
    else
        Last->Next = p;
    Last = p;                               
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

int Sum_Node()
{
    Node *p = Head; 
	int sum = 0;
    while (p != NULL)
    {	
        sum+= p->Data;
        p = p->Next;
    }
    return sum;
}
 
 
int main()
{
    Head = NULL; Last = NULL;
    themLast(1);
    themLast(2);
    themLast(3);
    themLast(4);
    themLast(5);
   	printf("\nDanh sach ban dau: "); hienThiDS();
    printf("\nTong cua danh sach: %d",Sum_Node()); 
    return 0;
}
