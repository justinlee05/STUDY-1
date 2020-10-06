#ifndef _NODEPOINT_LIST_H
#define _NODEPOINT_LIST_H

typedef struct _node{
	char N;
	int K,E, M, C, S, R;
	struct _node *Next;
	
}Node;

typedef Node* Ldata;

typedef struct _list{
	Ldata Head;
	Ldata Cur;
	Ldata Before;
	int NumOfData;
	int (*func)(Ldata, Ldata); //����Ʈ �ӿ� � �Լ��� �ִ� 
}LinkedList;

typedef LinkedList List;

void  InItList(List*) ; //����Ʈ�� �ʱ�ȭ

void  LInsert(List*, Ldata); //�ڷ� ����

int LFirst(List*); //ù �ڷᰡ �ִ°�?

int LNext(List*); //���� �ڷᰡ �ִ°� ?

Ldata LRemove(List*); // �ڷ� ����

void LPrint(List*); //����Ʈ �ڷ��� ���

void SetSortRule(List*, int (*comp)(Ldata, Ldata)); 

void PNode(Ldata);

#endif
