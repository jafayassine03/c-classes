#include <stdio.h>
void eat_cake();

int not_lunch_yet=1;
int feeling_hungry=1;
void main()
{
    while(feeling_hungry)
    {
        printf("\nPlease input an integer number:");
        scanf("%d",&not_lunch_yet);
        if(not_lunch_yet) {
            /* Go back to the loop condition */
            printf("This is not_lunch_yet");
            continue;
        }
        eat_cake();
    }
}

void eat_cake()
{
    printf("\nThis is eat_cake()");
    feeling_hungry=0;
}
