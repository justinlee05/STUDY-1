#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "NodePointList.h"

void InItList(List *plist) {
	Ldata Head = (Point*)malloc(sizeof(Point));
	plist->Head = Head;
	plist->Head->Next=NULL;
	plist->numOfData=0;
	plist->comp=NULL;
}

void PNode(Ldata pnode){
	printf("(%d, %d)", pnode->x, pnode->y);
}

void LPrint(List *plist){
	Ldata pdata=plist->Head->Next;
	
	while(pdata) {
		PNode(pdata);
		pdata = pdata->Next;
	}printf("\n");
}
void SInsert(List *plist ,Ldata pdata){
	Ldata Before =plist->Head;
	while(Before->Next && plist->comp(pdata, Before->Next)){
		Before = Before->Next;
	}
	pdata->Next = Before->Next;
	Before->Next=pdata;

}

void LInsert(List *plist, Ldata pdata) {
	if(plist->comp){
		SInsert(plist, pdata);
	}
	else{
		pdata->Next =plist->Head->Next;
		plist->Head->Next=pdata;
	}
	LPrint(plist);
	plist->numOfData++;
}

//���� �˰��� �����ϱ� 
void Sorting(List *plist){
	int a,su=0;
	Ldata Tmp, Addr[100];
	
	Tmp=plist->Head;
	while(Tmp=Tmp->Next){ // ù ��° �ڷ���� ��� �ڷ��� �����͸� 
		Addr[su++]=Tmp; //�迭�� ���� 
	}
	
	plist->Head->Next->Next=NULL; // ù �ڷ��� Next�� Null�� ���� 
	plist->numOfData=1;
	
	for(a=1; a<su;a++){	//�� ��° �ڷ� ���ĺ��� ��� �ڷḦ  
		Addr[a]->Next=0; //Next �����͸� NULL�� ���� 
		LInsert(plist,Addr[a]); // ����Ʈ�� �߰� 
	}
} 




