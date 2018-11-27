// Copyright (c) 2018 Antoine Tran Tan
// LASHAB Bilâl

#include <stdlib.h>
#define SEUIL 18
#define SEUILH 200
#define SEUILB -100

void main(void)
{

unsigned char i,j,k;
unsigned char N2;
unsigned char N=5;

unsigned char bin [10]={15,25,30,35,40,45,50,70,80,90};
int sat[10]={ rand() - RAND_MAX/2, rand() - RAND_MAX/2, rand() -
RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() -
RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() -
RAND_MAX/2,rand() - RAND_MAX/2};
int dist[10]={10,25,30,32,44,55,69,90,95,100};
int a[5]={1,5,9,8,11};
int b[N];


//Question 1
for(i=0; i<10;i++)
{
if (bin[i] > SEUIL)

bin[i] =1;

else
bin[i]=0;
}
    
//Question 2
for (j=0;j<10;j++)
{
if ( sat[j] > SEUILH)
sat[j] =SEUILH;
else if (sat[j] <SEUILB)
sat[j]= SEUILB ;
else
sat[j]=sat[j];
}
    
//Question 3
for(k=0;k<9;k++)
{
dist[9-k]=dist[9-k]-dist[8-k] ;
}
    
//Question 4
for (N=0;N<5;N++)
{
b[N]=a[4-N];
}
    
//Question 5
//Question non comprise 
