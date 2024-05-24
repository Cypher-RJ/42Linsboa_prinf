/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:35:02 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:58:13 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = s;
	while (i < n)
	{
		mem[i] = c;
		i++;
	}
	return (s);
}
/* #include <stdio.h>
int main() {
	char str[50] = "Hello, world!";
	printf("Original string: %s\n", str);

	// Using ft_memset to set the first 5 characters to 'A'
	ft_memset(str, 'A', 5);
	printf("After ft_memset: %s\n", str);

	// Using memset to set the first 5 characters to 'A' for comparison
	char str2[50] = "Hello, world!";
	memset(str2, 'A', 5);
	printf("After memset: %s\n", str2);

	return 0;
}
 */