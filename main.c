#include<stdio.h>

/* 

 
POINTEUR  cest une variable qui a ladresse dune autre variable

n est la adresse de la variable pointee 
*n cest la valeur de la variable pointee
&n cest la adreesse du pointeur
*/

int main(){
int a=5;	
int 	*p=NULL; // si on n'initialise pas le pointeur ou on initialise avec NULL 
                 //alors il faut pas faire *p=&a �a provoquera un arret du programme apres compiler

p=&a;

printf("%d\n",&a); // adresse de a 
printf("%p\n",&a); // adresse de a (en exadecimal)
printf("%p\n",p);  // adresse de a (en exadecimal)
printf("%p\n",&p);  // adresse du pointeur p (en exadecimal)
printf("%p\n",*p);  // valeur de a

return 0;
} 

