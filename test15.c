#define _CRT_SECURE_NO_WARNINGS
////////////////////////��̬�ڴ����
////////////malloc free  calloc  realloc
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//struct S
//{
//	char name;
//	int arr[];///���������Ա
//};
//int main()
//{
//	int* p = (int *)malloc(10 * sizeof(int));///����40���ֽ�(10������)�Ŀռ�
//	///����̬����Ŀռ䲻��ʹ��ʱ����Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//
//
//
//
//	int * p1=(int*)calloc(10, sizeof(int));//����10��Ԫ�أ�ÿ��Ԫ�ص��ֽ�Ϊ4���һ��Ԫ�س�ʼ��Ϊ0
//	free(p1);
//	p1 = NULL;
//
//
//
//
//	int *p2= (int*)malloc(10 * sizeof(int));//////realloc ������̬�����ڴ�Ĵ�С
//	if (p2 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int* p3 = (int*)realloc(p2, 80);
//	///////////////////////////////////֮ǰp2�ռ�����㹻�Ļ�����ԭp2׷��40���ֽڣ������Ļ����¿���p3
//	///////////////////////////////////����p2��ǰ40���ֽڣ��һ�free(p2)
//	return 0;
//}

int main()
{
	int a = 10000;
	FILE* pf = fopen("D:\\Project\\VS\\test.txt", "wb");////write binary
	fwrite(&a, 4, 1, pf);//4���ֽڣ�1�����ݣ��Ž�pf��ָ���ļ�(д10000)
	fclose(pf);
	pf = NULL;
	return 0;
}
////////////..��ʾ�ϼ�·��   ..\\test.txt

/////�򿪷�ʽ��"r"ֻ��  "rb"
////////////// "w"ֻд  "wb"
////////////// "a"׷��   "ab"
///////////////"r+"  Ϊ�˶���д ��һ���ı��ļ�
///////////////"w+"  Ϊ�˶���д���½�һ���µ��ļ�
///////////////"a+"  ��һ���ļ������ļ�β���ж�д
///////////////"rb+" Ϊ�˶���д��һ���������ļ�
///////////////"wb+" Ϊ�˶���д���½�һ���µĶ������ļ�
///////////////"ab+" ��һ���������ļ������ļ�β���ж�д



//////////////////fgetc  fputc fgets fputs fscanf  fprintf  fread fwrite