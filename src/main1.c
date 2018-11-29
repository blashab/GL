//  Copyright (c) 2018 Antoine Tran Tan
// LASHAB Bilal

#include "my_header.h"
#include "TP_lib_suite.h"



int main (void)
{
	
unsigned char combinaison_gagneuse[6];
unsigned char combin_joueur[6] = {15,32,45,47,28,34};
unsigned char a;
unsigned char i;
unsigned char f;
unsigned char nb_valeurs = 0;
unsigned char meilleur_score = 0;

	
	
    for (a=0; a<100; a++)
	{
	    initialiserTirage();

    for (f=0; f<6; f++)
	     {
		combinaison_gagneuse[f] = tirerNumero();
	     }

     for (i=0; i<6; i++)
           {
		 
     for (f=0; f<6; f++) 
	     {
                 if(combinaison_gagneuse[i] == combin_joueur[f])
			 
                    { 
		      nb_valeurs = nb_valeurs + 1;
	            }
              }
	    }

      if(meilleur_score < nb_valeurs)
	      {
		  meilleur_score = nb_valeurs;
	      }

        nb_valeurs = 0;
        }

return 0;
}
