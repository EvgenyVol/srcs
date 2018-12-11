#include <stdio.h>


void    ft_new(unsigned int i, char *str)
{
    str[0] = 'a';
}

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    int i;
    
    i =0;
    if (!s || !f)
        return ;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}


int main()
{
    char str[] = "Hello School21";
    
    ft_striteri(&str[5], ft_new);
    printf("res = %s", str);

    return 0;
}

