#include <stdio.h>

int main() {
    char s[100];
    int i, len = 0, flag = 1;

    scanf("%s", s);

    while(s[len] != '\0')
        len++;

    for(i = 0; i < len / 2; i++)
        if(s[i] != s[len-i-1])
            flag = 0;

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
