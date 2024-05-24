/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:15:41 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:58:26 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mems;
	size_t			i;

	mems = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (mems[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
int main()
{
	const char *str = "Example string for testing";
	char target = 'f';
	size_t len = 25;

	char *result = (char *)ft_memchr(str, target, len);
	if (result != NULL)
		printf("Character '%c' found at position: %ld\n", target, result - str);
	else
		printf("Character '%c' not found in the first %zu characters.\n", target, len);
	return 0;
} */