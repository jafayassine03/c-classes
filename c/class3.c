#include <stdio.h>
int main(){

int x ,y;
y= (x=4);
printf("x=%d, y=%d",x,y);
y=x=5;
printf("\nx=%d, y=%d",x,y);
return 0;
}
