/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:10:09 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:57:27 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/* #include <stdio.h>
int main()
{
	char src[] = "";
	char dst[20];
	size_t size = sizeof(dst);

	size_t copied_len = ft_strlcpy(dst, src, size);

	printf("Source string: %s\n", src);
	printf("Destination string: %s\n", dst);
	printf("Length of source string: %zu\n", copied_len);
} */
