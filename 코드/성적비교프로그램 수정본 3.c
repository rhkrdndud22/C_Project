#pragma warning(disable:4996)
#include <stdio.h>
#include <windows.h>
int yo = 0;//제목 효과 반복 변수
int a[5][7];//2학기 성적표 배열
int pasta[5][7] =//1학기 성적표 배열
{ 60,60,70,70,100,360,72,
 55,65,100,30,50,300,60,
 90,80,90,70,60,390,78,
 100,100,60,90,90,440,88,
};
int newa[5][7];// 비교 성적표 배열 

int b, c, d;//d는 b와 c의 총합 b와c는 배열의 크기를 정하기 위한 변수
int avr;//평균값 변수
int savr;//과목 평균값 변수
int sum;//과목 총합 변수
int suk;//등급표를 위한 변수

void effect(void);//제목 효과
void input(void);// 입력문
void NumberSum_avr(void);//입력문의 합과 평균
void Number_Subject_avr(void);// 과목평균값
void print_a(void);// 2학기 성적표에 대한 출력문
void Print_past_a(void);// 1학기 성적표 에 대한 출력문
void Print_new_a(void);// 비교 성적표 에 대한 출력문
void Print_Result(void);// 비교했을때 나오는 결과
void finish(void);// 마무리 효과

int main(void)
{
	effect();
	input();
	NumberSum_avr(); 
	Number_Subject_avr();
	print_a();
	Print_past_a();
	Print_new_a();
	Print_Result();
	//Sleep(5000);
	//finish();

	return 0;
}
void effect(void)
{

	system("tiTle 성적관리프로그램");
	{

		for (yo = 0; yo < 7; yo++)
		{
			system("cls");
			printf("           #          #   ##############          #       ###########   #        ############     # \n");
			printf("         #  #   #######      #    #               #                 #   #                   #     # \n");
			printf("       #     #       #     #       #    ###########           #     #   #        ############     # \n");
			printf("                         #           #            #           #         #        #                # \n");
			printf("             ###                                  #    #######################   ############     # \n");
			printf("           #    #             #####################                     #                         # \n");
			printf("             ##                                   #      ##                                       # \n");
			printf("                                                         ###############                          # \n");
			printf("                                                                                                     \n");
			printf("            ###########     ############             #################          #############   #    # \n");
			printf("              #     #                  #                             #                      #   #    #\n");
			printf("           ###########     #############                            #           #############   ######\n");
			printf("                           #                                       #           #                #    #\n");
			printf("                           #############                                      ###############   #    #\n");
			printf("        ################        #              ############################       ################### \n");
			printf("                         ##################                                       #                 #\n");
			printf("                                                                                  ##################\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			Sleep(100);
			system("cls");
			printf("           #          #   ##############          #       ###########   #        ############     # \n");
			printf("         #  #   #######      #    #               #                 #   #                   #     # \n");
			printf("       #     #       #     #       #    ###########           #     #   #        ############     # \n");
			printf("                         #           #            #           #         #        #                # \n");
			printf("             ###                                  #    #######################   ############     # \n");
			printf("           #    #             #####################                     #                         # \n");
			printf("             ##                                   #      ##                                       # \n");
			printf("                                                         ###############                          # \n");
			printf("                                                                                                     \n");
			printf("            ###########     ############             #################          #############   #    # \n");
			printf("              #     #                  #                             #                      #   #    #\n");
			printf("           ###########     #############                            #           #############   ######\n");
			printf("                           #                                       #           #                #    #\n");
			printf("                           #############                                      ###############   #    #\n");
			printf("        ################        #              ############################       ################### \n");
			printf("                         ##################                                       #                 #\n");
			printf("                                                                                  ##################\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
			Sleep(100);
			system("cls");
			printf("           #          #   ##############          #       ###########   #        ############     # \n");
			printf("         #  #   #######      #    #               #                 #   #                   #     # \n");
			printf("       #     #       #     #       #    ###########           #     #   #        ############     # \n");
			printf("                         #           #            #           #         #        #                # \n");
			printf("             ###                                  #    #######################   ############     # \n");
			printf("           #    #             #####################                     #                         # \n");
			printf("             ##                                   #      ##                                       # \n");
			printf("                                                         ###############                          # \n");
			printf("                                                                                                     \n");
			printf("            ###########     ############             #################          #############   #    # \n");
			printf("              #     #                  #                             #                      #   #    #\n");
			printf("           ###########     #############                            #           #############   ######\n");
			printf("                           #                                       #           #                #    #\n");
			printf("                           #############                                      ###############   #    #\n");
			printf("        ################        #              ############################       ################### \n");
			printf("                         ##################                                       #                 #\n");
			printf("                                                                                  ##################\n");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
			Sleep(100);

		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	}



	printf("\n\n국어 영어 수학 사학 과학 점수를 입력하세요\n");
}
void input(void)
{
	//입력문
	for (b = 0; b < 4; b++)
	{
		for (c = 0; c < 5; c++)

			scanf("%d", &a[b][c]);
		printf("\n");

	}
}//
void NumberSum_avr(void)
{
	for (int b = 0; b < 6; b++)
	{
		d = 0; avr = 0;
		for (int c = 0; c < 5; c++)
			d += a[b][c];
		avr = (d) / 5.0;
		a[b][5] = d;
		a[b][6] = avr;



	}
}
void Number_Subject_avr(void)
{
	for (int b = 0; b < 7; b++)
	{
		sum = 0;
		for (int c = 0; c < 4; c++)
		{
			sum += a[c][b];
			savr = (sum) / 4;
		}
		a[4][b] = savr;
	}
}
void print_a(void)
{
	printf("\t\t2학기 성적표\n\n");
	printf("\t국어\t영어\t수학\t사회\t과학\t총점\t평균\t등급\t평가\n");

	
		for (int b = 0; b < 5; b++)
		{
			if (b == 0)
				printf("민수:\t");
			else if (b == 1)
				printf("영희:\t");
			else if (b == 2)
				printf("지민:\t");
			else if (b == 3)
				printf("철수:\t");
			else
				printf("과목 평균:");


			for (int c = 0; c < 7; c++)

			

				printf("%d\t", a[b][c]);
			
			d = a[b][c];
			suk = d; 
			if (suk >= 400)
				printf("A\t 잘했어요");

			else if (suk >= 300)
				printf("B\t 무난해요");
			else if (suk >= 200)
				printf("C\t 분발하세요");
			else
				printf("F\t 낙제입니다");

			printf("\n");
		}
		printf("\n");
		printf("\n");
		printf("\n");
	
}
void Print_past_a(void)
{
	printf("\t\t1학기 성적표\n\n");
	printf("\t국어\t영어\t수학\t사회\t과학\t총점\t평균\t등급\t평가\n");
	for (int b = 0; b < 4; b++)
	{

		if (b == 0)
			printf("민수:\t");
		else if (b == 1)
			printf("영희:\t");
		else if (b == 2)
			printf("지민:\t");
		else if (b == 3)
			printf("철수:\t");
		else
			printf("과목 평균:");

		for (int c = 0; c < 7; c++)



			printf("%d\t", pasta[b][c]);
		d = pasta[b][c];
		suk = d;
		if (suk >= 400)
			printf("A\t 잘했습니다");

		else if (suk >= 300)
			printf("B\t 평범합니다");
		else if (suk >= 200)
			printf("C\t 분발하세요");
		else
			printf("F\t낙제입니다");

		

		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
}
void Print_new_a(void)
{
	printf("\t\t비교 성적표\n\n");
	printf("\t국어\t영어\t수학\t사회\t과학\t총점\t평균\n");
	for (int b = 0; b < 4; b++)
	{


		if (b == 0)
			printf("민수:\t");
		else if (b == 1)
			printf("영희:\t");
		else if (b == 2)
			printf("지민:\t");
		else if (b == 3)
			printf("철수:\t");
		else
			printf("과목 평균:");

		for (int c = 0; c < 7; c++)
		{
			newa[b][c] = a[b][c] - pasta[b][c];
			if (newa[b][c] < 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				printf("%d↓\t", newa[b][c]);
			}
			
			else if (newa[b][c] > 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				printf("%d↑\t", newa[b][c]);
			}
			else
				
				printf("%d\t", newa[b][c]);


		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		printf("\n");
	}

















}
void Print_Result(void)
{
	for (int b = 0; b < 4; b++)
	{
		if (b == 0)
			printf("\n민수의\t");
		else if (b == 1)
			printf("영희의\t");
		else if (b == 2)
			printf("지민의\t");
		else if (b == 3)
			printf("철수의\t");
		else
			printf("과목 평균:");

		for (int c = 0; c < 7; c++)
		{
			if (c == 0)
				printf("국어성적이");
			else if (c == 1)
				printf("영어성적이");
			else if (c == 2)
				printf("수학성적이");
			else if (c == 3)
				printf("사회성적이");
			else if (c == 4)
				printf("과학성적이");
			else if (c == 5)
				printf("총점이");
			else 
				printf("평균이 ");
			newa[b][c] = a[b][c] - pasta[b][c];
			if (newa[b][c] < 0)
				printf(" %d점떨어졌습니다\n", newa[b][c]);
			else if (newa[b][c] > 0)
				printf(" %d점올랐습니다\n", newa[b][c]);

			else
				printf("똑같습니다\n", newa[b][c]);
			}
		
		{
			
			if (newa[b][6] > 0)


			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				printf("축하합니다 성적향상되었습니다");
			}
			else if (newa[b][6] < 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
				printf("아쉽네요 성적이 떨어졌습니다");
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

				printf("똑같네요");
			}
			
				printf("\n");
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		

		printf("\n");

	}
}
void finish(void)
{
	for (yo = 0; yo < 3; yo++)
	{
	
		system("cls");
		printf("\n\t\t\t\t\t\ ☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
		printf("\n\t\t\t\t\t\ ☆★☆★☆★☆★프로그램★☆★☆★☆★");
		printf("\n\t\t\t\t\t\ ☆★☆★☆★☆★끝났습니다.☆★☆★☆★☆");
		printf("\n\t\t\t\t\t\ ☆★☆★☆★☆★☆★☆★☆★☆☆☆☆★");
		system("color 2d");
		Sleep(100);
		system("cls");
		printf("\n\t\t\t\t\t\ ☆★☆★☆★☆★☆★☆★☆★☆★☆★☆");
		printf("\n\t\t\t\t\t\ ☆★☆★☆★☆★프로그램★☆★☆★☆★");
		printf("\n\t\t\t\t\t\ ☆★☆★☆★☆★끝났습니다.☆★☆★☆★☆");
		printf("\n\t\t\t\t\t\ ☆★☆★☆★☆★☆★☆★☆★☆☆☆☆★\n\n");
		system("color 2e");
		Sleep(100);
	}
}








