#define _CRT_SECURE_NO_WARNINGS
////////////////////////动态内存分配
////////////malloc free  calloc  realloc
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//struct S
//{
//	char name;
//	int arr[];///柔性数组成员
//};
//int main()
//{
//	int* p = (int *)malloc(10 * sizeof(int));///开辟40个字节(10个整型)的空间
//	///当动态申请的空间不再使用时，就应该还给操作系统
//	free(p);
//	p = NULL;
//
//
//
//
//	int * p1=(int*)calloc(10, sizeof(int));//开辟10个元素，每个元素的字节为4，且会把元素初始化为0
//	free(p1);
//	p1 = NULL;
//
//
//
//
//	int *p2= (int*)malloc(10 * sizeof(int));//////realloc 调整动态开辟内存的大小
//	if (p2 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	int* p3 = (int*)realloc(p2, 80);
//	///////////////////////////////////之前p2空间后面足够的话就在原p2追加40个字节，不够的话重新开辟p3
//	///////////////////////////////////复制p2的前40个字节，且会free(p2)
//	return 0;
//}

int main()
{
	int a = 10000;
	FILE* pf = fopen("D:\\Project\\VS\\test.txt", "wb");////write binary
	fwrite(&a, 4, 1, pf);//4个字节，1个数据，放进pf所指的文件(写10000)
	fclose(pf);
	pf = NULL;
	return 0;
}
////////////..表示上级路径   ..\\test.txt

/////打开方式："r"只读  "rb"
////////////// "w"只写  "wb"
////////////// "a"追加   "ab"
///////////////"r+"  为了读和写 打开一个文本文件
///////////////"w+"  为了读和写，新建一个新的文件
///////////////"a+"  打开一个文件，在文件尾进行读写
///////////////"rb+" 为了读和写打开一个二进制文件
///////////////"wb+" 为了读和写，新建一个新的二进制文件
///////////////"ab+" 打开一个二进制文件，在文件尾进行读写



//////////////////fgetc  fputc fgets fputs fscanf  fprintf  fread fwrite