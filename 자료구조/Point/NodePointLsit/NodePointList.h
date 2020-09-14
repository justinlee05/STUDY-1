#ifndef _NODEPOINT_LIST_H
#define _NODEPOINT_LIST_H

typedef struct _point{
	int x;
	int y;
	struct _point *Next;
}Point;

typedef Point *Ldata;

typedef struct _pointlist {
	Ldata Head;
	Ldata Before;
	Ldata Cur;
	int numOfData;
	int (*comp)(Ldata, Ldata);
}PointList;

typedef PointList List;

void  InItLsit(List*) ; //����Ʈ�� �ʱ�ȭ

void  LInsert(List*, Ldata); //�ڷ� ����

int LFirst(List*, Ldata ); //ù �ڷᰡ �ִ°�?

int LNext(List*, Ldata); //���� �ڷᰡ �ִ°� ?

Ldata LRmove(List*); // �ڷ� ����

void Lprint(List*); //����Ʈ �ڷ��� ���

void SetSortRule(List*, int (*comp)(Ldata, Ldata)); // ���� ��Ģ ����

#endif
