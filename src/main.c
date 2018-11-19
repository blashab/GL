// Devoir GL Lashab Bilâl   

#include "TP_lib.h"  

int main(void)
{

    unsigned int Points=0,resultat,perdu=0;
    
    while(perdu!=1)
    {
        resultat=LancerDe();
        if(resultat==1)
            perdu=1;
		
        else if(resultat%2==0)
            Points=Points+resultat;
		
        else if(resultat==3)
            Points=Points*2;
		
        else if(resultat==5)
            Points=Points-2;
    }
	return 0;
}
