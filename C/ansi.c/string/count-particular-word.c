#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a = 0, b = 0;
    char str[] = "I am Nitin Singh. I am btech students.";
    printf("%d\n", sizeof(str));
    char st[10];
    printf("Enter the string:");
    scanf("%s", st);
    for (int i = 0; i < sizeof(str); i++)
    {
        for (int j = 0; j < strlen(st); j++)
        {
            if (str[i + j] != st[j])
            {
                a = 0;
                break;
            }
            a++;
        }
        if (a == strlen(st))
            b++;
    }
    printf("%d", b);
    return 0;
}