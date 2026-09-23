#include <stdio.h>
void input();
int larger();
int main(){
input();
return 0;
}
void input(){
int f,s,t;
printf("\n please input three int numbers: ");
scanf("%d%d%d",&f,&s,&t);
int greatest = larger (f,s,t);
printf("\n %d is the greatest number: ", greatest);

}
int larger(int a, int b, int c){
if (a > b && a>c)
    return a;
else if (b > a && b>c)
    return b;
else
    return c;
}


\
