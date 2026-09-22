#include <stdio.h>

void double_down()
{
    printf("\nThis is double_down()\n");
}

int main()
{
    int dealer_up_card = 0;
    int hand = 0;
    
    printf("\nA demo for && checks if two conditions are true:\n");
    printf("Please input the dealer_up_card && hand: ");
    scanf("%d %d", &dealer_up_card, &hand);   // was "d&d" — should be "%d %d"
    
    if ((dealer_up_card == 0) && (hand == 11)) // was "}" instead of ")"
    {
        double_down();
    }
    return 0;
}
