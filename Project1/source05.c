#include "Header.h"

// ����) ���� ������ �ڵ带 �ۼ����ּ���
//0���� 100������ ������ �Է��մϴ�
//�Է��� ������ 60�� �̻��� ��� "�հ�"
//60�� �̸��� ��� "���հ�"�� ����մϴ�


//int main()
//{
//	int point = 60;
//
//	if (point >= 60)
//	{
//		printf("�հ�\n");
//
//		if (point < 60)
//		{
//			printf("���հ�\n");
//		}
//		else (point < 60)
//		{
//			printf("���հ�\n");
//		}
//	}
//	return 0;
//}



int main()

//{
//	int score;
//
//	printf("0 ~ 100������ ���ڸ� �Է����ּ��� >>");
//	scanf("%d", &score);
//	if (score >= 60)
//	{
//		printf("�հ�\n");
//	}
//	else
//	{
//		printf("���հ�\n");
//	}
//}

{
	int menu;
	int money;
	
		printf("�޴��� ��ȣ�� �Է����ּ��� >>");
		scanf("%d", &menu);
		if (menu >=1 && menu <=20)
		{
			printf("������ �ִ� �ݾ��� �Է����ּ��� >>");
			scnaf("d%", &money);
			if (money >= 10000)
			{
				printf("�ش� �޴��� �����Ͻ� �� �ֽ��ϴ�\n");
			}
			else
			{
				printf("�� �޴��� �����Ͻ� �� �����ϴ�\n");
			}
		return 0;
	}