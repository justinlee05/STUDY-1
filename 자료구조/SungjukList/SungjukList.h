#ifndef _NODEPOINT_LIST_H
#define _NODEPOINT_LIST_H

typedef struct _node{
	char N;
	int K,E, M, C, S;
	struct _node *Next;
	
}Node;

typedef Node* Ldata;

typedef struct _list{
	Ldata Head;
	Ldata Cur;
	Ldata Before;
	int NumOfData;
	int (*comp)(Ldata, Ldata);
}LinkedList;

typedef LinkedList List;

void  InItLsit(List*) ; //����Ʈ�� �ʱ�ȭ

void  LInsert(List*, Ldata); //�ڷ� ����

int LFirst(List*, Ldata ); //ù �ڷᰡ �ִ°�?

int LNext(List*, Ldata); //���� �ڷᰡ �ִ°� ?

Ldata LRmove(List*); // �ڷ� ����

void Lprint(List*); //����Ʈ �ڷ��� ���

void SetSortRule(List*, int (*comp)(Ldata, Ldata)); 

#endif
