/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:16:12 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:57:30 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	if (!dst || !src)
		return (0);
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (dst_len < size - 1 && size > 0)
	{
		while (src[j] && (dst_len + j < size - 1))
		{
			dst[i++] = src[j++];
		}
		dst[i] = '\0';
	}
	if (dst_len >= size)
		dst_len = size;
	return (dst_len + src_len);
}

/* #include <stdio.h>
int main()
{
	char src[] = " mundo";
	char dst[] = "ola";
	size_t size = 6;

	size_t copied_len = ft_strlcat(dst, src, size);

	printf("Source string: %s\n", src);
	printf("Destination string: %s\n", dst);
	printf("Length of total string: %zu\n", copied_len);
} */