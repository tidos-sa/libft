/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:25:26 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/10/05 18:02:10 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char *ft_strchr(const char *c, int to_find)
{
	while (*c)
	{
		if( *c != '\0' && *c != to_find)
		{
			c++;
		}
		if (*c == to_find)
		{
			return (char *)c;
		}
	}
	return (char *)NULL;
}

int main() {
    const char *texto = "Hello, world!";
    char *resultado = ft_strchr(texto, 'o');

    if (resultado) {
        printf("Encontrado: %c\n", *resultado);
    } else {
        printf("Caractere não encontrado.\n");
    }

    return 0;
}

