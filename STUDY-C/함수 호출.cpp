/*#include <stdio.h>

void Swap1(int n1, int n2)
{
	int temp=n1;
	n1=n2;
	n2=temp;
	printf("Swap1���� %d %d\n", n1, n2);
}

int main()
{
	int num1=10;
	int num2=20;
	printf("�ʱⰪ : %d %d\n", num1, num2);
	Swap1(num1, num2);
	printf("Swap1 �� %d %d\n", num1, num2);// �Լ����� ������ ������ ����� ���� �� ���·� ���ƿ´�.
	//������ �ּҷ� ������ ������ �����ͷ� ������ �ùٸ��� �ȴ�. 
}*/

/*#include <stdio.h>

void Swap1(int *n1, int *n2)
{
	int temp=*n1;
	*n1=*n2;
	*n2=temp;
	printf("Swap1���� %d %d\n", *n1, *n2);
}

int main()
{
	int num1=10;
	int num2=20;
	printf("�ʱⰪ : %d %d\n", num1, num2);
	Swap1(&num1, &num2);
	printf("Swap1 �� %d %d\n", num1, num2);
}*/

/*#include <stdio.h>

void kop(int *num)
{
	int temp=*(num)*(*(num));
	
	printf("%d", temp);
}

int main()
{
	int n;
	scanf("%d", &n);
	kop(&n);
		
} */

/*#include <stdio.h>

void Swap(int *n1, int *n2, int *n3)
{
	int temp=*n1;
	*n1=*n3;
	*n3=*n2;
	*n2=temp;
	printf("Swap �� : %d %d %d", *n1, *n2, *n3);
	
}

int main()
{
	int num1=10, num2=20, num3=30;
	printf("�ʱ� �� : %d %d %d\n", num1, num2, num3);
	Swap(&num1, &num2, &num3);
	
}*/

#include <stdio.h>

int main()
{
		
} 
