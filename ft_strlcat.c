/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 20:38:36 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/09/27 20:58:17 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*nao terminado*/

#include "libft.h"

void *strlcpy(char *dest, const char *src, size_t size)
{
	char *ptr_str1;
	char *ptr_str2;
	unsigned int n;

	ptr_str1 = *src;
	ptr_str2 = *dest;

	n = 0;

	while(n < size)
	{
		ptr_str2[n] = ptr_str1[n];
		n++;
	}
	return dest;
}

int main(void)
{
	char dest = "hello";
	char src = "42!";
	int size[20];

	strlcpy(dest,src,sizeof(size));
	printf("%c",dest);
}
