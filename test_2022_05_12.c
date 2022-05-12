#define _CRT_SECURE_NO_WARNINGS
#pragma once

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	//while ((ch = getchar())!=EOF)
//	//{
//	//	//EOF-end of file 文件结束标志\0
//
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	int passworld[20] = {0};
//	printf("请输入密码:>");
//		scanf("%s", passworld);//输入密码，并存放在passworld中
//	//输入缓冲区还剩下一个'/n'
//	//读取一个'/n
//	while((ch=getchar())!='\');
//	{
//		;
//	}
//	//让getchar将缓冲区中的字符全部读取走
//	printf("请确认(Y/N):>");
//		ret = getchar();//Y/N
//	if (ret =='Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("取消确认");
//	}
//return 0;
//}


//计算n的阶乘(不考虑溢出情况)
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


//计算1！+2！....+10！
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


//在一个有序数组中查找具体的数字n。
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
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//
//	}
//	if (i == sz)
//			printf("找不到\n");
//	
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;//左下标
//	int k = 7;
//		int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
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
//				pritf("找到了\n", mid);
//				break;
//			}
//		}
//		return 0;
//}
//
