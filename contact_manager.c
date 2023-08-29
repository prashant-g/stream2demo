#include<stdio.h>
#include<stdlib.h>
#include "contact.h"

int numberofcontacts=0;
int main()
{
	int choice;
	char sname[50];
	contact mycontacts[20];
	while(1)
	{
		printf("1 :Add Contact\n2 :Display Contact\n3 :Search contact\n0 :Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			printf("Adding a new contact to phonebook\n");
			if(addContact(mycontacts))
				printf("Contact added successfully to phonebook\n");
			else
				printf("Contact not added to phonebook\n");
			break;
		case 2:
			printf("Displaying Contacts\n");
			displayContacts(mycontacts);
			break;
		case 3:
			printf("Enter name of the contact to search :: ");
			scanf("%s",sname);
			if(searchContact(mycontacts,sname))
				printf("Contact found in phonebook\n");
			else
				printf("Contact not found in phonebook\n");
			break;
			
		case 0:	
			printf("Exiting phone book application\n");
			exit(0);
		default :
	
			printf("Wrong choice\n");
			printf("Please check the menu and enter accordingly\n");
		}
	}
}
	

