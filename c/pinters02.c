#include <stdio.h>
int gosoutheast(int iat, int ion);

int main(){
int x=4;
int *adressx =&x;
printf("x lives in %p\n",&x);
int valuestored = *adressx;
printf("x adress is %p\n" ,*adressx);
printf("x adress is %i\n" ,*adressx);
printf("vlaue stored is %d\n" ,valuestored);
 *adressx =99;
printf("x adress is %p\n" ,adressx);
printf("x adress is %i\n" ,*adressx);

return 0;

}
int gosoutheast(int iat, int ion){

 iat--;
 ion++;

}
