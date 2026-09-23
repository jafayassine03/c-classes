#include <stdio.h>
void main()
{
    int winnings,train;
    printf("Please input an integer value for train:");
    scanf("%d",&train);
        switch(train)
        {
        case 37:
            winnings = winnings + 50;
            break;
        case 65:
            printf("\nJackpot!\n");
                winnings = winnings + 80;
        case 12:
            winnings = winnings + 20;
            break;
        default:
            winnings = 0;


        }
        printf("winnings=%d", winnings);
}
