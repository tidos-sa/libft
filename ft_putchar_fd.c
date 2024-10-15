#include "libft.h"

void ft_putchar_fd(char c, int fd) {
    write(fd, &c, 1); // Escreve o caractere 'c' no descritor de arquivo fornecido
}