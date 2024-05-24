/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:18:49 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:58:20 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*memdest;
	unsigned char	*memsrc;
	size_t			i;

	memsrc = (unsigned char *)src;
	memdest = (unsigned char *)dest;
	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		memdest[i] = memsrc[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>
int main()
{
	char src[] = "Test string";
	char dest[100];

	ft_memcpy(dest, src, sizeof(src));

	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);

	return 0;
} */