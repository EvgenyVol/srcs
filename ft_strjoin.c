#include <stdio.h>
#include <stdlib.h>

size_t  ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    if (!s)
        return (0);
    while (s[i] != '\0')
        i++;
    return (i);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t i;
    size_t j;
    size_t len1;
    size_t len2;

    i = 0;
    j = 0;
    if (!s1 || !s2)
        return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    str = (char *)malloc(sizeof(char) * (len1 + len2 - 1));
    if (!str)
        return (NULL);
    while (s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j] != '\0')
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return (str);
}

int main()
{
    char str1[] = "Hello ";
    char str2[] = "School21";
    char *str;

    str = ft_strjoin(str1, str2);
    printf("str1 + str2 = %s", str);
    return (0);
}