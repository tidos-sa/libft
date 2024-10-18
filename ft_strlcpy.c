#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize) {
    size_t src_len = ft_strlen(src);
    size_t i = 0;

    // Se houver espaço no buffer, copia os caracteres de 'src' para 'dst'
    if (dstsize > 0) {
        while (src[i] != '\0' && i < (dstsize - 1)) {
            dst[i] = src[i];
            i++;
        }
        // Adiciona o caractere nulo ao final
        dst[i] = '\0';
    }

    // Retorna o comprimento total de 'src'
    return src_len;
}


int main(void)
{
	char dest[50] = "hello";
	char src[] = "42!";

	ft_strlcpy(dest,src,sizeof(dest));
	printf("%s",dest);
}