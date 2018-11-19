		// Devoir GL Lashab Bilâl   
#include <ansi_c.h>

int main(void)
{
   int somme1=3,somme2=3,somme3=0,somme4=0,n=2,a=0,rnd=0;
   
   
   while(n<50)
   {
       somme1=somme1+3*n;
       n=n+1;
   }
   n=2;
   
   while(a<9876)
   {
       somme2=somme2+3*n;
       a=3*n;
       n=n+1;
       
   }
   
    while(n<12)
    {
        rnd=rand()%10+1;
        somme3=somme3+rnd;
        n=n+1;
    }
   n=0;
   
   if_valides<20
   {
       if(n%3==0)
        {
            somme4=somme4+n;
            if_valides = if_valides +1;
        }
       else if(n%7==0)
        {
            somme4=somme4+n;
            n=n+1;
       
       }
        n=n+1;
    }
}
