#include <stdio.h>
#include <string.h>

int main()
{
    char s[100000];
    int count[26] = {0};

    scanf("%s", s);

    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        char ch = s[i] ;
        int index = ch - 'a';
        count[index] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d \n", i + 'a', count[i]);
        }
    }

    return 0;
}