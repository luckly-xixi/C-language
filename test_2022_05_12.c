#define _CRT_SECURE_NO_WARNINGS
#pragma once

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	//while ((ch = getchar())!=EOF)
//	//{
//	//	//EOF-end of file �ļ�������־\0
//
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	int passworld[20] = {0};
//	printf("����������:>");
//		scanf("%s", passworld);//�������룬�������passworld��
//	//���뻺������ʣ��һ��'/n'
//	//��ȡһ��'/n
//	while((ch=getchar())!='\');
//	{
//		;
//	}
//	//��getchar���������е��ַ�ȫ����ȡ��
//	printf("��ȷ��(Y/N):>");
//		ret = getchar();//Y/N
//	if (ret =='Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȡ��ȷ��");
//	}
//return 0;
//}


//����n�Ľ׳�(������������)
//
//#include<stdio.h>
//
//int main()
//{
//	int n, i, x=1;
//	scanf("%d", &n);
//		for (i = 1; i <= n; i++)
//		{
//			x = x* i;
//		}
//		printf("%d\n", x);
//return 0;
//}


//����1��+2��....+10��
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int i = 0;
//	int sum = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		b = 1;
//		for (i = 1; i <= a; i++)
//		{
//			b = b * i;
//		}
//		sum = sum + b;
//	}
//		printf ("sum=%d\n", sum);
//return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int ret = 1;
//		int n = 0;
//		int sum = 0;
//		for (n = 1; n <= 3; n++)
//		{
//			ret = ret * n;
//			sum = sum + ret;
//		}
//		printf("sum=%d", sum);
//	return 0;
//}


//��һ�����������в��Ҿ��������n��
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break;
//		}
//
//	}
//	if (i == sz)
//			printf("�Ҳ���\n");
//	
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;//���±�
//	int k = 7;
//		int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//		int right = sz - 1;
//		int mid = (left + right) / 2;
//		while (left<=right)
//		{
//			if (arr[mid] > k)
//			{
//				right = mid - 1;
//			}
//			else if (arr[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				pritf("�ҵ���\n", mid);
//				break;
//			}
//		}
//		return 0;
//}
//
