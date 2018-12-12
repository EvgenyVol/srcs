#include <stdio.h>

int ft_strequ(char const *s1, char const *s2)
{
    int i;

    i = 0;
    if (!s1 || !s2)
        return (0);
    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
        i++;
    if ((s1[i] - s2[i]) == 0)
        return (1);
    else
        return (0);
}

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    int comp;

    comp = ft_strequ(str1, str2);
    printf("Compare?  %d", comp);
    return (0);
}