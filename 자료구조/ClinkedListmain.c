#include <stdio.h>
#include "CLinkedList.h"

int main(void){
	//���� ���� ����Ʈ�� ���� �� �ʱ�ȭ
	
	List list;
	int data, i, nodeNum;
	ListInit(&list);
	
	//����Ʈ�� 5���� �� ���� 
	LInsert(&list, 3); 
	LInsert(&list, 4);
	LInsert(&list, 5);
	LInsertFrnt(&list, 2);
	LInsertFrnt(&list, 1);
	
	//����Ʈ�� ����� �����͸� ���� 3ȸ ���
	if(LFirst(&list, &data)){
		printf("%d ", data);
		
		for(i=0;i<LCount)
	} 
}
