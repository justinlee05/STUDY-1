#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "SungjukList.h"
#define NN	10 

Ldata NewPoint(char name, int k, int e, int m, int c) 
{
	Node *Npoint = (Node*)malloc(sizeof(Node));
	Npoint->N=name;
	Npoint->K=k;
	Npoint->E=e;
	Npoint->M=m;
	Npoint->C=c;
	Npoint->S=k+e+m+c;
	Npoint->R=1;
	return Npoint;
}

void SetSortRule(List* plist, int (*comp)(Ldata, Ldata))
{
	plist->func = comp;
}

int WhoIsPred(Ldata d1, Ldata d2) 
{
	if(d1->S < d2->S) return 1;
	else if(d1->S == d2->S){
		if(d1->N < d2->N)return 0;
		else return 1;
	}
	else return 0;
}
//���� �ϱ� 
void Sorting(List *plist){
	int a,su=0;
	Ldata Tmp, Addr[100];
	
	Tmp=plist->Head;
	while(Tmp=Tmp->Next){ // ù ��° �ڷ���� ��� �ڷ��� �����͸� 
		Addr[su++]=Tmp; //�迭�� ���� 
	}
	
	plist->Head->Next->Next=NULL; // ù �ڷ��� Next�� Null�� ���� 
	plist->NumOfData=1;
	
	for(a=1; a<su;a++){	//�� ��° �ڷ� ���ĺ��� ��� �ڷḦ  
		Addr[a]->Next=0; //Next �����͸� NULL�� ���� 
		LInsert(plist,Addr[a]); // ����Ʈ�� �߰� 
	}
} 

void Ranking(List* plist){
	Ldata pdata = plist->Head->Next; 
	int r=1;
	
	while(pdata->Next){
		if(pdata->S == pdata->Next->S) //���� pdata �� ������ pdata ������ ������ ���ٸ� 
			pdata->Next->R = pdata->R; // ������ ������ pdata �� ����� �����Ѵ� 
		else						   // �ƴϸ� 
			pdata->Next->R=r+1;		// ����� 1 �ø� �� 
		r++;
		pdata = pdata->Next; 		 
	}
}

void Delete(List* plist){
	Ldata pdata = plist->Head->Next; //������ ������ �� 
	
	while(pdata->Next){
		if(pdata->R == pdata->Next->R) //���� pdata �� ����� pdata ������ ����� ���ٸ� 
		{
			plist->Cur = pdata->Next; // ����� �Q������ �ڿ� �ִ� ���� ������ �ϱ� ������ plist�� �������� ���־���� cur �� �������� 
			plist->Before = pdata; 
			LRemove(plist);
			 pdata = plist->Before; 	// ���ο� pdata�� plist�� Before�� �Ǿ���� 
		}
		pdata = pdata->Next;
	}
}

int main()
{
	int k,e,m,c, num=1;
	char name;
	FILE *fp;
	
//����Ʈ ����  
	List *SjList = (List *)malloc(sizeof(List));
	InItList(SjList); //�ʱ�ȭ 

	Ldata ND;
	
	fp = fopen("Data_����.txt", "r");
	
	if (fp == NULL) printf("���Ͽ��� ����\n");
	else printf("--------------------------------\nName Kor Eng Mat Com Sum Rnk\n--------------------------------\n");
	
	SetSortRule(SjList, WhoIsPred);
	for(int i=0; i<=NN; i++){
		fscanf(fp, "%c %d %d %d %d\n", &name, &k, &e, &m, &c);
		ND = NewPoint(name , k, e, m, c);
		LInsert(SjList, ND);
		
		PNode(ND);//���� �� �� 
	}printf("\n");
	fclose(fp); 	

	Sorting(SjList);//���� 
	LPrint(SjList);  
	
	Ranking(SjList); //��ũ 
	LPrint(SjList);
	
	Delete(SjList); //������ ���� 
	LPrint(SjList);
	
	
	//��ũ 
/*	Node *Cdata = SjList->Head->Next;
	Cdata->R = 1;
	
	while(Cdata->Next != NULL){
		num++;
		if(Cdata->Next->S < Cdata->S){
			if(Cdata->R != num){
				Cdata->Next->R = num;
			} 
			Cdata->Next->R++;
		}
	}*/
	
	return 0;
}
