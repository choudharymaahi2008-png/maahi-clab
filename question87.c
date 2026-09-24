#include <stdio.h>

int main() {
    char s[100];
    int i, space=0, digit=0, special=0;

    fgets(s, 100, stdin);

    for(i=0; s[i]!='\0'; i++) {
        if(s[i]==' ')
            space++;
        else if(s[i]>='0' && s[i]<='9')
            digit++;
        else if(!((s[i]>='A' && s[i]<='Z') ||
                  (s[i]>='a' && s[i]<='z') || s[i]=='\n'))
            special++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial = %d",
           space, digit, special);

    return 0;
}
