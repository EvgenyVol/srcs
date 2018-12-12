#include <stdio.h>
#include <stdlib.h>

char    ft_new(unsigned int i, char str)
{
    str = 'a';
    (void)i;
    return (str);
}

size_t  ft_strlen(const char *str)
{
    if (!str)
        return (0);
    size_t len;

    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    char *str;

    i = 0;
    if (!s || !f)
        return (NULL);
    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!str)
        return (NULL);
    while (s[i] != '\0')
    {
        str[i] = (*f)(i, *s);
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main()
{
    char str[] = "Hello School21";

    ft_strmapi(&str[5], ft_new);
    printf("res = %s", str);
    return (0);
}