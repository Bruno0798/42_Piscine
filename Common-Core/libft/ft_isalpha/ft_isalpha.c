#include <stdio.h>

int ft_isalpha(int c)
{
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
    {
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    char teste[] = "Hello World";
    int flag = 1;
    int i = 0;
    while (flag == 1)
    {
        flag = ft_isalpha(teste[i]);
        printf("%i", flag);
        if (flag == 0)
        {
            break;
        }

        i++;
    }
    return 0;
}
