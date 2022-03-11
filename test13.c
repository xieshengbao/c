/////指针数组
#include <stdio.h>
//void test(int  arr1[])////传来的是首地址 arr1 的类型 int *
//{
//	int a = sizeof(arr1);
//	int b =sizeof(arr1[0]);
//	printf("%d\n",a/b);
//}
//int main()
//{
//	int arr[10] = { 1,2,3 };
//	int a = sizeof(arr);
//	test(arr);
//	return 0;
//}


//int main()
//{
//	char arr[] = "abd";
//	char* pc = &arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	printf("%c\n", *pc);
//	return 0;
//}

/////



//int main()
//{
//	char* p = "abcdef";//////常量字符串 ，把a的地址付给了p
//	printf("%c\n", *p);
//	printf("%s\n", p);//以%s打印，直接给首地址，遇到\0停止
//	return 0;
//}


////////////////////
//int main()
//{
//	char arr1[] = "abc";//+		arr1	0x0000007ea476f7b4 "abc"	char[4]
//	char arr2[] = "abc";//+		arr2	0x000000758faffad4 "abc"	char[4]
//	char* p1 = "abc";//-		p1	0x00007ff665689bb0 "abc"	char *
//	char* p2 = "abc";//-		p2	0x00007ff665689bb0 "abc"	char *
//	return 0;
//
//}

///////////////

//int main()
//{
//	char arr1[3] = "abc";///字符数组
//	int arr2[4] = { 1,2,3,4 };//整型数组
//	int* arr3[4];//指针数组
//
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr4[] = { &a,&b,&c,&d };//指针数组，其类型为int *[4]
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 2,3,4,5 };
//	int arr3[] = { 3,4,5,6 };
//
//	int* arrp[] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(arrp[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


/////////////////////数组指针
/////////////////////是个指针

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p1)[10] = &arr;//p1就是数组指针 p1的类型为int[10] *    
//	/////////&arr+1==p1+1
//	printf("%p\n", &arr + 1);
//	printf("%p\n", p1 + 1);
//	int* p = &arr;
//	
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*p)[5] = &arr;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;/////*p==arr  arr是首地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p + i));
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;///p==arr
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		printf("%d ", p[i]);
//	}
//	return 0;
//}
/////////////////////////////////

//void print1(int arr[3][5], int x, int y)///arr类型为int [5] *  是一个数组指针
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void print2(int(*p)[5] , int x, int y)////p类型为int [5] *  是一个数组指针 每次+1跳过一个1*5的数组
//{
//	int i = 0;
//	int j = 0;
//	*p;////*p 是一个int 5类型即一行元素
//	p[0];////p[0]也是一个int 5 类型
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			/*printf("%d ", (*p)[i] + j);*/
//			//printf("%d ", *(*(p + i) + j));////p+i  每次跳过i行   
//			//printf("%d ", (*(p + i))[j]);
//			printf("%d ",  p[i][j]);
//		}
//		printf("\n");
//	}
//}


//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	arr;
//	print1(arr, 3, 5);//本质上传过去的是首元素(第一行)地址,即一个一维数组的地址
//	print2(arr, 3, 5);
//	return 0;
//}



//////////////////////////函数指针
//////////////////////////指向函数的指针


int add(int x, int y)
{
	int z = 0;
	return z = x + y;
}
int main()
{
	int a = 1;
	int b = 2;

	add(a, b);
	int (*pa)(int,int)=& add;
	(* pa)(2, 3);
	printf("%p\n", &add);
	printf("%p\n", add);////&函数和函数名都是函数的地址
	return 0;
}