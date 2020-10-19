#ifndef __AB_STACK_H__
#define __AB_STACK_H__

#define TURE 1
#define FALSE 0 
#define STACK_LEN 100

typedef int Data;

typedef struct_arrayStack
{
	Data StackArr[STACK_LEN];
	int topIndex;
}ArrayStack;

typedef ArratStack Stack;

void StackInit(Stack * pstack);  //������ �ʱ�ȭ  
int SIsEmpty(Stack * pstack);   // ������ ������� Ȯ�� 

void SPush(Stack * pstack , Data data);		// ������ push ����  
Data Spop(Stack * pstack );					//������ pop ���� 
Data SPeek(Stack * pstack);					//������ peek ���� 

#endif

