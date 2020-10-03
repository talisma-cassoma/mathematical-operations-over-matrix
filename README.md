# A propros des pointeurs

**[POINTEUR](url)**  c'est une variable qui a l'adresse dune autre variable


[**n**](url) est l'adresse de la variable pointée 

[***n**](url) c'est la valeur de la variable  pointée


[**&n**](url) c'est l'adresse du pointeur
*/

int 	*p=NULL;  **// si on n'initialise pas le pointeur ou on initialise avec NULL 
                 //alors il faut pas faire *p=&a �a provoquera un arrêt du programme après compiler**

p=&a;

printf("%d\n",&a); **// adresse de a** 

printf("%p\n",&a); **// adresse de a (en exadecimal)**

printf("%p\n",p);  **// adresse de a (en exadecimal)**

printf("%p\n",&p);  **// adresse du pointeur p (en exadecimal)**

printf("%p\n",*p);  **// valeur de a**




