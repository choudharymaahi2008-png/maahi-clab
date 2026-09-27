#include <stdio.h>
#include <string.h>

int main() {
    char s[200], word[50], longest[50] = "";
    int i = 0, j = 0;

    fgets(s, sizeof(s), stdin);

    while (1) {
        if (s[i] != ' ' && s[i] != '\n' && s[i] != '\0')
            word[j++] = s[i];
        else {
            word[j] = '\0';

            if (strlen(word) > strlen(longest))
                strcpy(longest, word);

            j = 0;

            if (s[i] == '\0')
                break;
        }
        i++;
    }

    printf("%s", longest);
    return 0;
}
