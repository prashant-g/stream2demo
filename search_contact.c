#include<stdio.h>
#include<string.h>
#include "contact.h"

extern int numberofcontacts;

int searchContact( contact *start,const char *sname)
{
	if(numberofcontacts == 0)
	{
		printf("Phone book is empty\n");
		return 0;
	}
	else
	{
		for(int i=0;i<numberofcontacts;i++)
		{
			if(strcmp((start+i)->name, sname)==0)
			{
				printf("Name :: %s\n",(start+i)->name);
				printf("Phone :: %d\n",(start+i)->phone_num);
				printf("Email ::  %s\n",(start+i)->email);
				printf("Alternate Phone :: %d\n",(start+i)->alternate_phone_num);
				return 1;
			}
		}
		return 0;
	}
}

