/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:16:08 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/09/27 19:38:05 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_bzero(void *s, unsigned int n)
{
	char *ptr;
	unsigned i;

	ptr = (char *)s;
	i = 0;

	while(i < n)
	{
		ptr[i] = 0;
		i++;
	}
	return s;
}

#include <stdio.h>

int main(void)
{
	char buffer[10];
	unsigned int n = 10;

	int a;
	a = 0;

	ft_bzero(buffer,n);

	while(a < sizeof(buffer))
	{
		printf("%d",buffer[a]);
		a++;
	}
	return 0;
}
