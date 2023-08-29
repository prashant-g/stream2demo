#include<stdio.h>
#include "contact.h"
extern int numberofcontacts;

void displayContacts( contact *start)
{
	if(numberofcontacts == 0)
	{
		printf("No contacts to display\n");
		printf("Phone book is empty\n");
	}
	else
	{
		for(int i=0;i<numberofcontacts;i++)
		{
		printf("Name = %s\n",(start+i)->name);
		printf("Phone = %d\n",(start+i)->phone_num);
		printf("Email = %s\n",(start+i)->email);
		printf("Alternate Phone = %d\n",(start+i)->alternate_phone_num);
		printf("*****************************************\n");
		}

	}
}

