/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:15:45 by tidos-sa          #+#    #+#             */
/*   Updated: 2024/10/20 18:52:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_strlen(const char *c);
void ft_putstr_fd(char *s, int fd);
int ft_atoi(const char *str)


#endif
