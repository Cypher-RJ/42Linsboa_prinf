/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:43:16 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/16 18:03:19 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	slen;
	size_t	alloc_size;

	slen = ft_strlen(s);
	if (slen - start < len)
		alloc_size = slen - start;
	else
		alloc_size = len;
	if (start >= slen)
		return (ft_strdup(""));
	str = (char *)malloc(alloc_size + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < alloc_size)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>
int main() {
	char const *s = "Hello, World!";
	unsigned int start = 7;
	size_t len = 5;

	char *substring = ft_substr(s, start, len);
	if (substring) {
		printf("Substring: %s\n", substring);
		free(substring);
	} else {
		printf("Failed to allocate memory for substring.\n");
	}

	return 0;
} */
