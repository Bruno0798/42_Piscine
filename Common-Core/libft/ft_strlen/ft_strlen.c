#include <stdio.h>

int ft_strlen(const char *s)
{
    int i;

    while (s[i] != 0)
    {
        i++;
    }
    return (i);
}

int main(int argc, char const *argv[])
{
    char teste[] = "Hello World";
    printf("%i", ft_strlen(teste));
    return 0;
}
