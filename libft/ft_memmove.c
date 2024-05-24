/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:45:10 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:58:17 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*memdest;
	unsigned char	*memsrc;
	size_t			i;

	memdest = (unsigned char *)dest;
	memsrc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (memsrc < memdest)
	{
		i = n;
		while (i-- > 0)
			memdest[i] = memsrc[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			memdest[i] = memsrc[i];
			i++;
		}
	}
	return (dest);
}

/* #include <stdio.h>
int main()
{
	char src[50] = "Example string for memmove";
	char dest[50];

	// Test 1: Basic test with non-overlapping regions
	printf("Before ft_memmove: '%s'\n", src);
	ft_memmove(dest, src, sizeof(src));
	printf("After ft_memmove: '%s'\n", dest);

	// Test 2: Overlapping regions, source starts before destination
	ft_memmove(src + 5, src, 15);
	printf("After ft_memmove with overlap (src before dest): '%s'\n", src);

	// Resetting src for next test
	strcpy(src, "Example string for memmove");

	// Test 3: Overlapping regions, destination starts before source
	ft_memmove(src, src + 5, 15);
	printf("After ft_memmove with overlap (dest before src): '%s'\n", src);

	// Test 4: Check behavior with zero length
	ft_memmove(dest, src, 0);
	printf("After ft_memmove with zero length: '%s'\n", dest);

	return 0;
} */