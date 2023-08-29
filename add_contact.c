#include<stdio.h>
#include "contact.h"
#define MAX 20
extern int numberofcontacts;
int addContact(contact *start)
{
	if(numberofcontacts  < MAX)
	{
		printf("Enter name of the Contact to add :: ");
		scanf("%s",(start+numberofcontacts)->name);
		printf("Enter phone number :: ");
		scanf("%d",&(start+numberofcontacts)->phone_num);
		printf("Enter Email-ID :: ");
		scanf("%s",(start+numberofcontacts)->email);
		printf("Enter alternate phone number :: ");
		scanf("%d",&(start+numberofcontacts)->alternate_phone_num);
		numberofcontacts++;
		return SUCCESS;
	}
	else
		return FAILURE;
}


