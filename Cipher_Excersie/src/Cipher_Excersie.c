/*
 ============================================================================
 Name        : Cipher_Excersie.c
 Author      : Fredrik Blomgren
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "header.h"

int main(void) {
	char User_Input[MAX_INPUT];
	char Input_Corrected[CHAR_MAX];
	setbuf(stdout,NULL);
	printf(" Enter 1 or 2 depending on your choice in the menu: \n 1. Encrypt \n 2. Decrypt \n ");
	char choice = getchar();
	char disregard = getchar();
	int Position = 0;
	if(choice == '1')
	{
		printf(" Enter the text to be encrypted: ");
		fgets(User_Input,CHAR_MAX,stdin);

		for(int i=0;User_Input[i] !='\n';i++)
		{
			if(islower(User_Input[i]))
			{
				Input_Corrected[Position] = User_Input[i];
				Position++;
			}
			if(isdigit(User_Input[i]))
			{
				Input_Corrected[Position] = User_Input[i];
				Position++;
			}
			if(User_Input[i]==' ')
			{
				Input_Corrected[Position] = User_Input[i];
				Position++;
			}
		}

		Input_Corrected[Position] = '\0';
		Encrypt(Input_Corrected);
	}
	if(choice == '2')
	{

	}



	// Encrypt


	return EXIT_SUCCESS;
}
