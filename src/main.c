//  Copyright (c) 2018 Antoine Tran Tan
// 
// Exo79 Lashab Bilâl

#include <ansi_c.h>
#include "my_header.h"
#include <userint.h>

int main(void)
{
	char prenom[100];
	char nom[100];
	int age;
	int anneeNaissance;
	char retour[100];

scanf("%s",prenom);
scanf("%s",nom);
scanf("%d",&anneeNaissance);

age = 2018 - anneeNaissance;

sprintf(retour,"Je m'appelle %s %s et j'ai %d ans" ,prenom,nom,age);
MessagePopup("retour",retour);

    return 0;
}
