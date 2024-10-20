#include "libft.h"

int cont_words(char const *s, char c)
{
    int i;
    int j;
    int point_cont;

    i = 0;
    while(s[i])
    {
        if(s[i] != c && point_cont == 0)
        {
            point_cont = 1;
            j++;
        }
        else if(s[i] == c)
        {
            point_cont = 0;
        }
        i++;
    }
    return j;
}

char **ft_split(char const *s, char c)
{
    printf("%i",cont_words('ola amigos hehehe',' '));
}