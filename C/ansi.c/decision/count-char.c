#include <stdio.h>
int main()
{
    char str[20];
    printf("Enter the string:");
    fgets(str, sizeof(str), stdin);
    int i = 0, a = 0, b = 0;
    while (str[i] != '\0')
    {
        for (int k = 97; k < 123; k++)
        {
            if ((int)str[i] == k)
                a += 1;
            if ((int)str[i] == k - 32)
                b += 1;
        }
        i++;
    }
    printf("capital laters = %d\nsmall laters = %d", b, a);
    return 0;
}