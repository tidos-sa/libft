#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2) {
    size_t len1, len2, i, j;
    char *new_str;

    // Verifica se s1 ou s2 são nulos
    if (!s1 || !s2)
        return NULL;

    // Calcula o comprimento de s1 e s2
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);

    // Aloca memória para a nova string, incluindo o caractere nulo
    new_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

    // Copia os caracteres de s1 para a nova string
    i = 0;
    while (i < len1) {
        new_str[i] = s1[i];
        i++;
    }

    // Copia os caracteres de s2 para a nova string, continuando onde s1 terminou
    j = 0;
    while (j < len2) {
        new_str[i + j] = s2[j];
        j++;
    }

    // Adiciona o caractere nulo ao final da nova string
    new_str[i + j] = '\0';

    return new_str;
}

/*
int main()
{
    char s1[] = "hello";
    char s2[] = "42!";

    printf("%s",ft_strjoin(s1,s2));
}
*/
