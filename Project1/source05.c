#include "Header.h"

// 연습) 다음 조건의 코드를 작성해주세요
//0부터 100사이의 점수를 입력합니다
//입력한 점수가 60점 이상일 경우 "합격"
//60점 미만일 경우 "불합격"을 출력합니다


//int main()
//{
//	int point = 60;
//
//	if (point >= 60)
//	{
//		printf("합격\n");
//
//		if (point < 60)
//		{
//			printf("불합격\n");
//		}
//		else (point < 60)
//		{
//			printf("불합격\n");
//		}
//	}
//	return 0;
//}



int main()

//{
//	int score;
//
//	printf("0 ~ 100사이의 숫자를 입력해주세요 >>");
//	scanf("%d", &score);
//	if (score >= 60)
//	{
//		printf("합격\n");
//	}
//	else
//	{
//		printf("불합격\n");
//	}
//}

{
	int menu;
	int money;
	
		printf("메뉴의 번호를 입력해주세요 >>");
		scanf("%d", &menu);
		if (menu >=1 && menu <=20)
		{
			printf("가지고 있는 금액을 입력해주세요 >>");
			scnaf("d%", &money);
			if (money >= 10000)
			{
				printf("해당 메뉴를 구입하실 수 있습니다\n");
			}
			else
			{
				printf("그 메뉴를 구입하실 수 없습니다\n");
			}
		return 0;
	}