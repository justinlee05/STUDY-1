#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SungjukList.h"

void InItList(List *plist) { //�ʱ�ȭ 
	Ldata Head = (Node*)malloc(sizeof(Node));
	plist->Head = Head;
	plist->Head->Next=NULL;
	plist->numOfData=0;
	plist->comp=NULL;
}

void LPrint(List *plist){ //��� 

	Ldata pdata=plist->Head->Next;
	
	while(pdata) {
		printf("%c, %2d, %2d, %2d, %2d, %3d, %2d\n", pdata->N, pdata->K, 
		pdata->E, pdata->M, pdata->C, pdata->S, pdata->R);
		pdata = pdata->Next;
	}
	
	printf("\n");
}

void SInsert(List *plist ,Ldata pdata){ //�����ؼ� ���� 
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
		pdata->Next = plist->Head->Next;
		plist->Head->Next = pdata;
	}
	LPrint(plist);
	plist->NumOfData++;
}

//���� �˰��� �����ϱ� 
void Sorting(List *plist){
	int a,su=0;
	Ldata Tmp, Addr[100];
	
	Tmp = plist->Head;
	while(Tmp=Tmp->Next){ // ù ��° �ڷ���� ��� �ڷ��� �����͸� 
		Addr[su++]=Tmp; //�迭�� ���� 
	}
	
	plist->Head->Next->Next=NULL; // ù �ڷ��� Next�� Null�� ���� 
	plist->NumOfData = 1;
	
	for(a=1; a<su;a++){	//�� ��° �ڷ� ���ĺ��� ��� �ڷḦ  
		Addr[a]->Next=0; //Next �����͸� NULL�� ���� 
		LInsert(plist,Addr[a]); // ����Ʈ�� �߰� 
	}
}

int LFirst(List *plist, Ldata pdata){ // ù �ڷᰡ �ִ°� ? 
	if(plist->Head->Next){// ù �ڷᰡ ������ 
		plist->Before = plist->Head; 
		plist->Cur = plist->Head->Next;  // ù �ڷ� ���븦 �� ��ġ�� ���� 
		
		return 1;		// ù�ڷ� ���� 
	}
	
	return 0;  // ����� �ڷᰡ ���� 
}

int LNext(List *plist , Ldata pdata){
	if(plist->Cur->Next){
		plist->Before=plist->Cur;
		plist->Cur=plist->Cur->Next;
		
		return 1;
	}
	return 0;
} 

Ldata LRemove(List *plist){
	if(plist->NumOfData){
		Ldata rpos = plist->Cur;
		
		plist->Before->Next = rpos->Next;
		plist->Cur = plist->Before;
		plist->numOfData--;
	}
}
