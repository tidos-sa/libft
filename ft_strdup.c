#include "libft.h"

char *ft_strdup(const char *s) {
    size_t i = 0;
    char *copy;

    // Aloca memória suficiente para a nova string
    copy = (char *)malloc(strlen(s) + 1);  // +1 para o caractere nulo

    if (copy == NULL) {
        return NULL;  // Se malloc falhar, retorna NULL
    }

    // Copia cada caractere da string original para a cópia, usando while
    while (s[i]) {
        copy[i] = s[i];  // Copia o caractere atual
        i++;
    }
    
    // Adiciona o caractere nulo ao final da cópia
    copy[i] = '\0';

    return copy;
}
/*
int main ()
{
    const char str[] = "hello 42!";
    printf("%s",ft_strdup(str));
}
*/
