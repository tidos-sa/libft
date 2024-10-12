#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) {
    size_t i = 0;
    size_t s_len = 0;
    char *substr;

    // Verifica se a string de entrada é nula
    if (!s)
        return NULL;

    // Calcula o comprimento da string original
    while (s[s_len] != '\0')
        s_len++;

    // Se o índice de início for maior ou igual ao comprimento da string, retorna uma string vazia
    if (start >= s_len)
        len = 0;

    // Ajusta o comprimento para não exceder o tamanho restante da string
    if (len > s_len - start)
        len = s_len - start

    // Aloca memória para a nova substring
    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return NULL;

    // Copia os caracteres da string original para a nova substring
    while (i < len && s[start + i] != '\0') {
        substr[i] = s[start + i];
        i++;
    }

    // Adiciona o caractere nulo ao final da substring
    substr[i] = '\0';

    return substr;
}
 /*
 int main() {
    // Teste 1: String normal
    char *str1 = "Hello, World!";
    char *result1 = ft_substr(str1, 7, 5);
    printf("Teste 1: '%s'\n", result1);
    free(result1); // Libera a memória alocada

    return 0;
}
 */
