#include<stdio.h>
//struct  stu
//{
//	char name[20];////ע���Ƿֺ�
//	int age;
//	int id[20];
//}s3,s4;
//
//struct stu s5;////s3,s4,s5 ȫ�ֽṹ�����
//
//
//
//struct 
//{
//	char name[20];
//} x;////�����ṹ�����ͣ�ֻ���ں���ֱ�Ӵ�������
//
//struct
//{
//	char name[20];
//} * pa;////�����ṹ��ָ�����ͣ�pa�ŵ��ǽṹ���ַ
//
//
//
//typedef struct ss
//{
//	int a;
//}node;///�����ض��� node=struct ss
//
//int main()
//{
//	struct stu s1;
//	struct stu s2;///�ֲ��ṹ�����
//
//	return 0;
//}

/// <summary>
/// /////////////////////////////////�ڴ����
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


//////////////////λ��
//////////////////һ���Ա������ͬ������Ϊint char  unsigned int
//////////////////������λ
//////////////////λ����4����һ���ֽ�Ϊ��λ���ٿռ�
//struct A
//{
//	int a : 1;///aֻ��Ҫ1��������λ
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

///////////////////////////////////////ö��


//enum day
//{
//	Mon,
//	Tues,
//	Wed=4,
//	Thur,
//	Fri,
//	Sat,
//	Sun//////////////ö�ٳ���
//
//};
//
//int main()
//{
//	enum day s=Mon;
//	s = Tues;
//	//s = 4;//���Ͻ���s��ö�����ͣ���ֵһ��int��
//	printf("%d %d %d %d\n", Mon,Wed,Thur,s);
//	printf("%d\n", sizeof(s));
//	return 0;
//}

/////////////////////////////////////////������
/////////////////////////////////////////������
/////////////////////////////////////////��Ա����ͬһ��ռ�
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

