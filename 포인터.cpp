/*#include <stdio.h>

int main()
{
	int i,a[10]={0,1,2,3,4,5,6,7,8,9}, *ap=a;
	for(i=0;i<10;i++){
		a[i]+=1;
		printf("%d ", *ap+i);
	} 
	
	printf("\n");
	printf("%d\t, %p\n", a[0], &a);
	printf("%d\t, %p\t %p\n", *ap, ap, &ap);
	
	ap=&i;
	printf("%d\t, %p\t", i, &i);
	printf("%d\t, %p\t, %p\n", *ap, ap, &ap);
}*/

/*#include <stdio.h>

int main()
{
	char sarr[12]="It'sString";
	char *sptr;
	sptr=sarr;
	printf("���� sarr[0]�� %p\n", &sarr[0]);
	printf("���� sarr�� �ּҴ� %p\n", sarr);
	printf("���� sptr�� ���� %s\n", sptr);
	printf("���� sptr�� ���� %p\n", sptr);
	printf("���� sptr�� �ּҴ� %p\n", &sptr);
}*/

/*���̰� 10�� int �� �迭 arr �� 1~10���� �ʱ�ȭ �� ����, �迭�� ù ���� ��Ҹ� 
����Ű�� ������ ����(p) �� ���� �Ѵ�. p�� �̿��Ͽ� ��� �迭����� ���� 2�� ������Ű�� ����غ���.*/ 

/*#include <stdio.h>

int main()
{
	int i,arr[10]={1,2,3,4,5,6,7,8,9,10}, *p=arr;
	
	for( i=0;i<10;i++){
		p[i]+=2;
		printf("%d ", *(p+i));	
	}	
}*/

#include <stdio.h>

int main()
{
	int i, arr[10]={1,2,3,4,5,6,7,8,9,10}, temp;
	int *p = arr;
	int *t = &arr[9];
	for(i=0;i<5;i++){
		temp = *(p+i);
		*(p+i)= *(t-i);
		 *(t-i)=temp;
	}
	for(i=0;i<10;i++)
	printf("%d ", *(p+i));
} 
 

 //#include <stdio.h>
//
//int main()
//{
//	char[25]={A,}
//}
