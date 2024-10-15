#include <stdlib.h>

// Função auxiliar para verificar se um caractere está presente no conjunto 'set'
static int is_in_set(char c, const char *set) {
    while (*set) {
        if (c == *set)
            return 1;
        set++;
    }
    return 0;
}

// Função para calcular o comprimento de uma string
static size_t ft_strlen(const char *str) {
    size_t len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

// Função principal ft_strtrim
char *ft_strtrim(char const *s1, char const *set) {
    size_t start, end, len;
    char *trimmed_str;

    // Verifica se s1 ou set são nulos
    if (!s1 || !set)
        return NULL;

    // Inicializa os índices de início e fim
    start = 0;
    end = ft_strlen(s1);

    // Avança o índice de início enquanto os caracteres estiverem em 'set'
    while (s1[start] && is_in_set(s1[start], set))
        start++;

    // Retrocede o índice de fim enquanto os caracteres estiverem em 'set'
    while (end > start && is_in_set(s1[end - 1], set))
        end--;

    // Calcula o comprimento da nova string "aparada"
    len = end - start;

    // Aloca memória para a nova string
    trimmed_str = (char *)malloc(sizeof(char) * (len + 1));
    if (!trimmed_str)
        return NULL;

    // Copia a substring aparada para a nova string
    size_t i = 0;
    while (i < len) {
        trimmed_str[i] = s1[start + i];
        i++;
    }

    // Adiciona o caractere nulo ao final
    trimmed_str[len] = '\0';

    return trimmed_str;
}
