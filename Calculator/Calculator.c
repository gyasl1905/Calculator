#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

int add(int i1, int i2);
char get_choice(void);
char get_first_char(void);

int main()
{
	int i1=0, i2=0;
	//int anwser;

	printf("Enter your integer :");
	scanf("%d %d", &i1, &i2);

	int Menu_choice;

	while ((Menu_choice = get_choice()) != 'q')
	{
		switch (Menu_choice)
		{
		case 'a':
			add(i1,i2);
			break;
		/*case 'b':
			minus();
			break;
		case 'c':
			multiply();
			break;
		case 'd':
			divide();
			break;
		default:
			printf("Error with %d/\n", Menu_choice);
			exit(1);
				break;
				*/
		}
	}

	return 0;

}

int add(int i1 ,int i2)
{
	int n, j;
	int sum;

	sum = i1 + i2;

	printf("%d", sum);

	return i1,i2;

	
}

char get_choice(void)
{
	int Menu_input;

	printf("please Menu choice\n");
	printf("a. add\tb. Minus\n");
	printf("c. Multiply\td. Divide\n");
	printf("q. Quit\n");

	Menu_input = get_first_char();;

	while ((Menu_input < 'a' || Menu_input>'d') && Menu_input != 'q')
	{
		printf("Please try again.\n");
		Menu_input = get_first_char();
	}

	return Menu_input;

}

char get_first_char(void)
{
	char ch;
	
	ch = getchar();
	while (getchar() != '\n')
		continue;

	return ch;
}