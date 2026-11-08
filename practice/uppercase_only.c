#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("The value of letter is %d\n", ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("Letter is in upper case");
    }
    else
    {
        printf("letter is not upper case");
    }
       

    return 0;
}