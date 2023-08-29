#include<stdio.h>
#ifndef CONTACT_H
#define CONTACT_H

enum STATUS{FAILURE,SUCCESS};
typedef struct contact
{
	int phone_num;
	int alternate_phone_num;
	char name[20];
	char email[20];
}contact;
int addContact(contact *start);
void displayContacts(contact *start);
int searchContact(contact *start,const char *name);
#endif
