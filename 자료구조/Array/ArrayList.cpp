#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"

List* InitList(void){
	List* plist=(List *) malloc(sizeof(List));
	
	memset(plist->Array, 0, sizeof(Ldata)*LEN_List);
	plist->comp=NULL;
	plist->NIMOfData=0;
}

void LInsert(List *plist, Ldata pdata){
	if(plist->NuOfData >=LEN_List){
		printf("����Ʈ�� ������ �ڷḦ �߰��� �� �����ϴ�.\n");
		return 0;
	}
	plist->Array[plist->NumOfData++]=pdata;
}
