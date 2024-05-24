/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:15:00 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:58:59 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*mem;

	mem = s;
	i = 0;
	while (n > i)
	{
		mem[i] = '\0';
		i++;
	}
}

/* #include <stdio.h>

int main()
{
	char str[50] = "Hello, world!";
	printf("Before ft_bzero: %s\n", str);
	ft_bzero(str, sizeof(str));
	printf("After ft_bzero: ");

	int i = 0;
	while (i < sizeof(str))
	{
		printf("%d ", str[i]);
		i++;
	}
	printf("\n");
	return 0;
} */