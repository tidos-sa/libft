/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidos-sa <tidos-sa@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:42:08 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/10/08 22:50:45 by tidos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*nao terminei*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *strr;
	unsigned char crt;
	size_t i;

	i = 0;
	crt = (char *)c;

	while( i < n )
	{
		if(strr[i] == c)
		{
			return &strr[i];
		}
		i++;
	}

	return 0;
}

int main()
{
	const char s[] = "oiii";
	char 
}
