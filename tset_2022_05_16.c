#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//�����1/1-1/2+1/3-1/4+1/5.....+1/99-1/100ֵ����ӡ�����
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
//��10�����������ֵ
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

//��ӡ�˷��ھ���
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


//��������Ϸ
//1.��������һ�������
//2.������
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
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//				game();//��������Ϸ
//				break;
//		case 0:
//				printf("�˳���Ϸ\n");
//				break;
//		default:
//			printf("ѡ�����\n");
//				break;
//			printf("�������\n");
//				break;
//		}
//	} while (input);
//
//	return 0;
//}


//goto ���ʵ�ֵĹػ�����

#include<string.h>
int main()
{

	char input[10] = { 0 };
	system("shutdown-s-t 60");
again:
	printf("���Խ���1����֮�ڹػ���������룺��������ȡ���ػ���\n");
	scanf("%s", &input);
	if (0 == strcmp(input, "������"))
	{
		system("shoutdown-a");
	}
	else
	{
		goto again;
	}
	return 0;

}