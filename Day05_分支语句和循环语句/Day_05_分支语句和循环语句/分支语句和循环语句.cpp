#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>//strlen ����ͷ�ļ�
#include <windows.h>//Sleep ����ͷ�ļ�
#include <stdlib.h>//rand ����ͷ�ļ�
#include <time.h>//time ����ͷ�ļ�

//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	printf("��ȷ�����루Y/N����");
	//��������
	//getchar();//���� '\n'
	//�����������ж���ַ�
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int  i = 0;//��ʼ��
//	while (i <= 10)//�жϲ���
//	{
//		printf("%d", i);
//
//		i++;//��������
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			//break;
//			continue;
//		}
//		printf("%d\t", i);
//	}
//	return 0;
//}

// ����
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
	//�жϲ���ʡ�� - �жϲ��ֺ�Ϊ�� - ��ѭ��
	//for (;;) 
	//{
	//	printf("Hello\n");
	//}
	//int i = 0;
	//int j = 0;
	//for (; i < 3; i++)
	//{
	//	for (; j < 3; j++)
	//	{
	//		printf("Hello\n");
	//	}
	//}
//	return 0;
//}

//int main()
//{
	//��ѭ�����ж�
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			//break;
//			continue;
//		}
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//��ϰһ - ���� n �Ľ׳�
//int main()
//{
//	int ret = 1;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//		for ( i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		printf("%d", ret);
//
//	return 0;
//}

//��ϰ�� - n �Ľ׳��ۼӺ�
//int main()
//{
//	int sum = 0;
//	int ret = 1;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//		for ( i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//			sum = ret + sum;
//		}
//		printf("%d", sum);
//
//	return 0;
//}

//��ϰ�� - �۰����\���ֲ���
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 7;//Ҫ���ҵ�����
//	//�� arr �������������в���k��7����ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//	int left = 0;//����±�
//	int right = sz - 1;//�ұ��±�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�м��±�
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ����±��ǡ�: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//��ϰ�� - ��ʾ����ַ��������ƶ������м���
//int main()
//{
//	char arr1[] = "Welcome come to China!!!";
//	char arr2[] = "########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//��ϰ�� - ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
//ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
//int main()
//{
//	int i = 0;
//	//������ȷ���������ַ�����123456��
//	char password[20] = {0};
//	for ( i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		//�����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ�� strcmp - ��Ӧ�ַ��Ƚϣ���ȷ���ֵΪ 0
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������.����������\n");
//		}
//		if (i == 3)
//		{
//			printf("����������������,�˳�����\n");
//		}
//	}
//	return 0;
//}

//��ϰ�� - ��������Ϸ

//1.�Զ�����һ�� 1-100 ֮��������
//2.������
//�¶��� - ��ϲ�㣬��Ϸ����
//�´��� - ������´��˻��ǲ�С�ˣ������£�֪���¶�
//3.��Ϸһֱ���У������˳���Ϸ
void menu()//��ӡ�˵�����
{
	printf("*******************************\n");
	printf("*********  1. play  ***********\n");
	printf("*********  2. exit  ***********\n");
	printf("*******************************\n");
}
void game()//��Ϸ����
{
	//��������Ϸ��ʵ��
	//1.���������
	//rand ����������һ�� 0-32767 ֮�����
	//ʱ�� - ʱ���
	int ret = rand() % 100  + 1;//%100 �������� 0-99��Ȼ�� +1����Χ���� 0-100
	//printf("%d\n", ret);
	//2.������
	while (1)
	{
		int guess = 0;
		printf("������֣�");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}

