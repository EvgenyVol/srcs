#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    i = 0;
    if (start > ft_strlen(s))        
        return (NULL);
    str = (char *)malloc(sizeof(char) * (len + 1));
    while (s[start + i] != '\0' && (i < len))
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main()
{
    char str1[] = "Hello School21";
    char *str2;

    str2 = ft_strsub(str1, 6, 6);
    printf("sub str2 = %s", str2);
    return (0);
}