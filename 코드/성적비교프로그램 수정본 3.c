#pragma warning(disable:4996)
#include <stdio.h>
#include <windows.h>
int yo = 0;//���� ȿ�� �ݺ� ����
int a[5][7];//2�б� ����ǥ �迭
int pasta[5][7] =//1�б� ����ǥ �迭
{ 60,60,70,70,100,360,72,
 55,65,100,30,50,300,60,
 90,80,90,70,60,390,78,
 100,100,60,90,90,440,88,
};
int newa[5][7];// �� ����ǥ �迭 

int b, c, d;//d�� b�� c�� ���� b��c�� �迭�� ũ�⸦ ���ϱ� ���� ����
int avr;//��հ� ����
int savr;//���� ��հ� ����
int sum;//���� ���� ����
int suk;//���ǥ�� ���� ����

void effect(void);//���� ȿ��
void input(void);// �Է¹�
void NumberSum_avr(void);//�Է¹��� �հ� ���
void Number_Subject_avr(void);// ������հ�
void print_a(void);// 2�б� ����ǥ�� ���� ��¹�
void Print_past_a(void);// 1�б� ����ǥ �� ���� ��¹�
void Print_new_a(void);// �� ����ǥ �� ���� ��¹�
void Print_Result(void);// �������� ������ ���
void finish(void);// ������ ȿ��

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

	system("tiTle �����������α׷�");
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



	printf("\n\n���� ���� ���� ���� ���� ������ �Է��ϼ���\n");
}
void input(void)
{
	//�Է¹�
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
	printf("\t\t2�б� ����ǥ\n\n");
	printf("\t����\t����\t����\t��ȸ\t����\t����\t���\t���\t��\n");

	
		for (int b = 0; b < 5; b++)
		{
			if (b == 0)
				printf("�μ�:\t");
			else if (b == 1)
				printf("����:\t");
			else if (b == 2)
				printf("����:\t");
			else if (b == 3)
				printf("ö��:\t");
			else
				printf("���� ���:");


			for (int c = 0; c < 7; c++)

			

				printf("%d\t", a[b][c]);
			
			d = a[b][c];
			suk = d; 
			if (suk >= 400)
				printf("A\t ���߾��");

			else if (suk >= 300)
				printf("B\t �����ؿ�");
			else if (suk >= 200)
				printf("C\t �й��ϼ���");
			else
				printf("F\t �����Դϴ�");

			printf("\n");
		}
		printf("\n");
		printf("\n");
		printf("\n");
	
}
void Print_past_a(void)
{
	printf("\t\t1�б� ����ǥ\n\n");
	printf("\t����\t����\t����\t��ȸ\t����\t����\t���\t���\t��\n");
	for (int b = 0; b < 4; b++)
	{

		if (b == 0)
			printf("�μ�:\t");
		else if (b == 1)
			printf("����:\t");
		else if (b == 2)
			printf("����:\t");
		else if (b == 3)
			printf("ö��:\t");
		else
			printf("���� ���:");

		for (int c = 0; c < 7; c++)



			printf("%d\t", pasta[b][c]);
		d = pasta[b][c];
		suk = d;
		if (suk >= 400)
			printf("A\t ���߽��ϴ�");

		else if (suk >= 300)
			printf("B\t ����մϴ�");
		else if (suk >= 200)
			printf("C\t �й��ϼ���");
		else
			printf("F\t�����Դϴ�");

		

		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
}
void Print_new_a(void)
{
	printf("\t\t�� ����ǥ\n\n");
	printf("\t����\t����\t����\t��ȸ\t����\t����\t���\n");
	for (int b = 0; b < 4; b++)
	{


		if (b == 0)
			printf("�μ�:\t");
		else if (b == 1)
			printf("����:\t");
		else if (b == 2)
			printf("����:\t");
		else if (b == 3)
			printf("ö��:\t");
		else
			printf("���� ���:");

		for (int c = 0; c < 7; c++)
		{
			newa[b][c] = a[b][c] - pasta[b][c];
			if (newa[b][c] < 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				printf("%d��\t", newa[b][c]);
			}
			
			else if (newa[b][c] > 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				printf("%d��\t", newa[b][c]);
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
			printf("\n�μ���\t");
		else if (b == 1)
			printf("������\t");
		else if (b == 2)
			printf("������\t");
		else if (b == 3)
			printf("ö����\t");
		else
			printf("���� ���:");

		for (int c = 0; c < 7; c++)
		{
			if (c == 0)
				printf("�������");
			else if (c == 1)
				printf("�������");
			else if (c == 2)
				printf("���м�����");
			else if (c == 3)
				printf("��ȸ������");
			else if (c == 4)
				printf("���м�����");
			else if (c == 5)
				printf("������");
			else 
				printf("����� ");
			newa[b][c] = a[b][c] - pasta[b][c];
			if (newa[b][c] < 0)
				printf(" %d�����������ϴ�\n", newa[b][c]);
			else if (newa[b][c] > 0)
				printf(" %d���ö����ϴ�\n", newa[b][c]);

			else
				printf("�Ȱ����ϴ�\n", newa[b][c]);
			}
		
		{
			
			if (newa[b][6] > 0)


			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				printf("�����մϴ� �������Ǿ����ϴ�");
			}
			else if (newa[b][6] < 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
				printf("�ƽ��׿� ������ ���������ϴ�");
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

				printf("�Ȱ��׿�");
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
		printf("\n\t\t\t\t\t\ �١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ�");
		printf("\n\t\t\t\t\t\ �١ڡ١ڡ١ڡ١����α׷��ڡ١ڡ١ڡ١�");
		printf("\n\t\t\t\t\t\ �١ڡ١ڡ١ڡ١ڳ������ϴ�.�١ڡ١ڡ١ڡ�");
		printf("\n\t\t\t\t\t\ �١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١١١١�");
		system("color 2d");
		Sleep(100);
		system("cls");
		printf("\n\t\t\t\t\t\ �١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ�");
		printf("\n\t\t\t\t\t\ �١ڡ١ڡ١ڡ١����α׷��ڡ١ڡ١ڡ١�");
		printf("\n\t\t\t\t\t\ �١ڡ١ڡ١ڡ١ڳ������ϴ�.�١ڡ١ڡ١ڡ�");
		printf("\n\t\t\t\t\t\ �١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١١١١�\n\n");
		system("color 2e");
		Sleep(100);
	}
}








