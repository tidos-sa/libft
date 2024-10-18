/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 20:38:36 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/10/05 15:25:00 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) {
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t i = 0;

    // Se o tamanho do buffer for menor ou igual ao tamanho atual de 'dst', retorna 'src_len + dstsize'
    if (dstsize <= dst_len)
        return src_len + dstsize;

    // Concatena 'src' em 'dst', garantindo que não ultrapasse 'dstsize'
    while (src[i] != '\0' && (dst_len + i) < (dstsize - 1)) {
        dst[dst_len + i] = src[i];
        i++;
    }

    // Adiciona o caractere nulo ao final de 'dst'
    dst[dst_len + i] = '\0';

    // Retorna o comprimento total que a string tentou criar
    return dst_len + src_len;
}

int main(void)
{
	char dest[50] = "hello";
	char src[] = "42!";

	ft_strlcat(dest,src,sizeof(dest));
	printf("%s",dest);
}
