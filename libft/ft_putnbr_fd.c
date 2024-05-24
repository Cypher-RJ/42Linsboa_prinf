/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:08:33 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:58:03 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + 48, fd);
}

/* #include <unistd.h>
int main()
{
	// Print the number 123 to the standard output
	ft_putnbr_fd(123, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);

	// Print the number -123 to the standard output
	ft_putnbr_fd(-123, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);

	// Print the minimum int value to test edge case
	ft_putnbr_fd(-2147483648, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);

	return 0;
} */