#include <stdio.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
    size_t i;

    i = 0;
    while ((s1[i] == s2[i]) && (i < n) && (s1[i] != '\0') && (s2[i] != '\0'))
        i++;
    if ((s1[i] - s2[i]) == 0)
        return (1);
    else
        return (0);
}

int main()
{
    char str1[] = "Hellx";
    char str2[] = "Hello";
    int comp;

    comp = ft_strnequ(str1, str2, 3);
    printf("Compare? %d", comp);
    return (0);
}