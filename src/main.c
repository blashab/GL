//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
	char phrase[100]= "je m'appelle Bilal Lashab et j'ai 18 ans";
	char prenom [100];
	char nom [100];
    unsigned int age;
	
	
    scanf("%s %s %u", prenom , nom , &age);

    return 0;
}
