#include<stdio.h>
#include<memory.h>
#include<string.h>
//#include "SungjukList.h"

int main()
{
	FILE *fp;
	char file_buff[100];

	fp = fopen("Data_����.txt", "r");

	if (fp == NULL) printf("���Ͽ��� ����\n");
	else printf("���Ͽ��� ����\n");

	while(fgets(file_buff, sizeof(file_buff), fp) != NULL){
		printf("%s", file_buff);
		memset(file_buff, 0, sizeof(file_buff));
	}
	fclose(fp);

	return 0;
}
