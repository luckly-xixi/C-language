#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//计算的1/1-1/2+1/3-1/4+1/5.....+1/99-1/100值，打印出结果
//int main()
//{
//	int n = 0;
//	double sum = 0;
//	int flag = 1;
//		for (n = 1; n <= 100; n++)
//		{
//			sum += 1.0 / n;
//			flag = -flag;
//		}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//求10个整数中最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//打印乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}


//猜数字游戏
//1.电脑生成一个随机数
//2.猜数字
//
#include<stdlib.h>
//#include<time.h> 
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("****     1.play     0.exit   ****\n");
//	printf("*********************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret=rand()%100+1;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//				game();//猜数字游戏
//				break;
//		case 0:
//				printf("退出游戏\n");
//				break;
//		default:
//			printf("选择错误\n");
//				break;
//			printf("输入错误\n");
//				break;
//		}
//	} while (input);
//
//	return 0;
//}


//goto 语句实现的关机程序

#include<string.h>
int main()
{

	char input[10] = { 0 };
	system("shutdown-s-t 60");
again:
	printf("电脑将在1分钟之内关机，如果输入：我是猪，就取消关机！\n");
	scanf("%s", &input);
	if (0 == strcmp(input, "我是猪"))
	{
		system("shoutdown-a");
	}
	else
	{
		goto again;
	}
	return 0;

}