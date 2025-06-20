#include <stdio.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Y') || (ch >= 'a' && ch <= 'y'))
        printf("The next alphabet is: %c\n", ch + 1);
    else ((ch=='z') || (ch =='Z'));
        printf("%c",ch-25);

    return 0;
}
