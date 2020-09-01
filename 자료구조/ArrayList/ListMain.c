#include <stdio.h>
#include "ArrayList.c"

int main(void)
{
	//ArrayList�� ���� �� �ʱ�ȭ// 
	List list; // ����Ʈ�� ���� 
	int data; 
	ListInit(&list); // ����Ʈ�� �ʱ�ȭ  
	
	//5���� ������ ����// 
	LInsert(&list, 11);
	LInsert(&list, 11);
	LInsert(&list, 22);
	LInsert(&list, 22); 
	LInsert(&list, 33);
	
	//����� �������� ��ü ���
	printf("���� �������� ��: %d\n", LCount(&list));
	
	if(LFirst(&list, &data)) //ù ��° ������ ��ȸ , ù��° �����͸� ���� data���� ����  
	{ 
		printf("%d", data);
		
		while(LNext(&list, &data))// �� ��° ������ �����͸� ����  data�� �� �� 
		{
			printf("%d", data);
		}
		
	}	 
	printf("\n\n");	
	
	if(LFirst(&list, &data))
	{
		if(data==22){
			LRemove(&list); // ���� Lfirst   �Լ��� ���� ������ ������ ���� !! 
		}
		
		while(LNext(&list, &data)){
			if(data==22){
				LRemove(&list); // ���� Lfirst   �Լ��� ���� ������ ������ ���� !! 
			}
		}
	}
	
	printf("���� �������� �� : %d \n", LCount(&list));
	
	if(LFirst(&list, &data)){
		printf("%d", data);
		
		while(LNext(&list, &data)){
			printf("%d", data);
		}
		
	}
	
	printf("\n\n");
	return 0;
}

 
