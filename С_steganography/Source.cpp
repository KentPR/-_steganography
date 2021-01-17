#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define OFFSET 1078
#define DATA 1102

typedef struct {
	int size;   /*size of message in bytes*/
	int lenght; /*size of message in symbols*/
} SLENGHT;

void open(FILE* image, FILE* message)
{
	
	image = fopen("BMP-24.bmp", "rb"); //bmp picture
	if (image == NULL)   //assert error
	{
		printf("Error opening image!\nexecution stopped...");
	}
	message = fopen("message.txt", "rb"); //message to hide in bmp picture
	if (message == NULL) //assert error
	{
		printf("Error opening message!\nexecution stopped...");
		return;
	}
	printf("Opening successfull!\n");
	return;
}

void main(void)
{
	FILE* bmpin=NULL; //bmp picture
	FILE* msgin=NULL; //message to hide in bmp picture
	open(bmpin, msgin); //files opening
}

