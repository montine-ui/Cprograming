#include "Header.h"

int main()
{
	//�޴��� ����
	int menu1 = 1000;
	int menu2 = 2000;
	int menu3 = 3000;

	// ȭ�� ���
	printf("1. A  %d\n", menu1);
	printf("2. B  %d\n", menu2);
	printf("3. C  %d\n", menu3);


	// ����ڰ� �Է�
	int menu_select;
	printf("�޴��� �Է����ּ��� >>");
	scanf("%d", &menu_select);


	int money = 2000; //������� ������ ���� ����
	int cost = 0; //�����ؾ��ϴ� ���

	if (menu_select == 1)
	{
		cost = menu1;
	}
	else if (menu_select == 2)
	{
		cost = menu2;
	}
	else
	{
		cost = menu3;
	}
	if (money >= cost)
	{
		money -= cost;
		printf("������ �����߽��ϴ�.");
	}
	else
	{
		printf("�ܾ��� �����մϴ�.");
	}
	return 0;
}