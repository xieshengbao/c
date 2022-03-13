#include<stdio.h>
//struct  stu
//{
//	char name[20];////注意是分号
//	int age;
//	int id[20];
//}s3,s4;
//
//struct stu s5;////s3,s4,s5 全局结构体变量
//
//
//
//struct 
//{
//	char name[20];
//} x;////匿名结构体类型，只能在后面直接创建变量
//
//struct
//{
//	char name[20];
//} * pa;////匿名结构体指针类型，pa放的是结构体地址
//
//
//
//typedef struct ss
//{
//	int a;
//}node;///类型重定义 node=struct ss
//
//int main()
//{
//	struct stu s1;
//	struct stu s2;///局部结构体变量
//
//	return 0;
//}

/// <summary>
/// /////////////////////////////////内存对齐
/// </summary>
//struct S1
//{
//	char b;
//	int a;
//	
//	char c;
//
//};
//
//struct S2
//{
//	char a;
//	char b;
//	int c;
//};
//struct S3
//{
//	char a;
//	char b;
//	char d;
//	char e;
//	char f;
//	int c;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//	struct S3 s3 = { 0 };
//	int ret1 = sizeof(s1);///12
//	int ret2 = sizeof(s2);////8
//	int ret3= sizeof(s3);////12
//	return 0;
//}


//////////////////位段
//////////////////一般成员类型相同，常见为int char  unsigned int
//////////////////二进制位
//////////////////位段以4个或一个字节为单位开辟空间
//struct A
//{
//	int a : 1;///a只需要1个二进制位
//	int b : 2;
//	int c : 3;
//};
//
//int main()
//{
//	struct A s={0};
//	s.a = 0;
//	s.b = 2;
//	int ret = sizeof(s);
//	return 0;
//}

///////////////////////////////////////枚举


//enum day
//{
//	Mon,
//	Tues,
//	Wed=4,
//	Thur,
//	Fri,
//	Sat,
//	Sun//////////////枚举常量
//
//};
//
//int main()
//{
//	enum day s=Mon;
//	s = Tues;
//	//s = 4;//不严谨，s是枚举类型，赋值一个int型
//	printf("%d %d %d %d\n", Mon,Wed,Thur,s);
//	printf("%d\n", sizeof(s));
//	return 0;
//}

/////////////////////////////////////////联合体
/////////////////////////////////////////共用体
/////////////////////////////////////////成员公用同一块空间
//union un
//{
//	char c;
//	int a;
//};
//
//int main()
//{
//	union  un u;
//	printf("%d\n", sizeof(u));
//	printf("%d\n", sizeof(union un));
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.a));
//	return 0;
//}

