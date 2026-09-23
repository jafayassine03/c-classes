#include <stdio.h>

void strcopy(char *strsrc, char *strdest);

int main(){

    char stra[100], strb[100];

    printf("pls input string: ");
    fgets(stra, sizeof(stra), stdin);

    strcopy(stra, strb);

    printf("stra = %s", stra);
    printf("strb = %s", strb);

    return 0;
}

void strcopy(char *strsrc, char *strdest){

    while (*strsrc != '\0'){
        *strdest = *strsrc;
        strsrc++;
        strdest++;
    }

    *strdest = '\0';
}
