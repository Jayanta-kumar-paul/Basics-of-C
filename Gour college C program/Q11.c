#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z'))
    {
        printf("%c is a Small letter.\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a Capital letter.\n", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a Digit.\n", ch);
    }
    else
    {
        printf("Special characters.\n");
    }
    return 0;
}
// Enter a character: J
// J is a Capital letter.
// Enter a character: j
// J is a Small letter.