#include "libft.h"

void ft_putnbr_fd(long int n, int fd) {
    char c;

    // Se o número for negativo, imprime o sinal e converte para positivo
    if (n < 0) {
        ft_putstr_fd("-", fd);
        n = -n;
    }

    // Recursivamente imprime cada dígito
    if (n >= 10) {
        ft_putnbr_fd(n / 10, fd); // Chama a função para o próximo dígito
    }

    // Converte o dígito atual para caractere e imprime
    c = (n % 10) + '0';
    write(fd, &c, 1);
}

/*
int main() {
    ft_putnbr_fd(1234567890, 1); // Escreve "1234567890" no console
    ft_putnbr_fd(-9, 1); // Escreve "-9876543210" no console
    return 0;
}
*/
