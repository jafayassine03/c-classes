#include <stdio.h>
void main(){
int train, winnings;
printf("pls input an int value for train");
scanf("%d",&train);
switch(train){
case 37:
    winnings +50;
    break;
case 65:
    printf("\njackpot\n");
    winnings = winnings +80;
case 12:
    winnings = winnings+20;
    break;
    default:
        winnings = 0;


}
printf("winnings= %d",winnings);

}
