#include "libft.h"

void ft_putendl_fd(char *s, int fd) {
    if (s == NULL) // Verifica se a string é nula
        return;

    while (*s) {
        write(fd, s, 1); // Escreve o caractere atual
        s++;             // Avança para o próximo caractere
    }
    write(fd, "\n", 1); // Adiciona uma nova linha após a strin"
}

/*
int main()
{
	char s[] = "helloooo";
	int fd = 2;
	ft_putendl_fd(s,fd);
}
*/
