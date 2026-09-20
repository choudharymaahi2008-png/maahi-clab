#include <stdio.h>

int main() {
    char s[100];
    int i=0, v=0, c=0;

    scanf("%s", s);

    while(s[i]!='\0') {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
           s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            v++;
        else
            c++;
        i++;
    }

    printf("Vowels = %d\nConsonants = %d", v, c);
    return 0;
}
