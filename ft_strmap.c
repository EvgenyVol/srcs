#include <stdio.h>
#include <stdlib.h>


char    ft_new(char str)
{
    str = 'b';
}

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strmap(char const *s, char (*f)(char))
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
        str[i] = (*f)(*s);
        i++;
    }
    str[i] = '\0';
    return(str);
}


int main()
{
    char str[] = "Hello School21";
    
    ft_strmap(&str[5], ft_new);
    printf("res = %s", str);

    return 0;
}
