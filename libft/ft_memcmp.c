/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:15:13 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:58:23 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*mems1;
	unsigned char	*mems2;
	size_t			i;

	mems1 = (unsigned char *)s1;
	mems2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (mems1[i] != mems2[i])
			return (mems1[i] - mems2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
int main()
{
	char str1[] = "Hello World";
	char str2[] = "Hello World";
	char str3[] = "Hello there";

	// Test 1: Compare identical strings
	int result1 = ft_memcmp(str1, str2, sizeof(str1));
	printf("Test 1 - Identical strings: %d\n", result1);

	// Test 2: Compare different strings
	int result2 = ft_memcmp(str1, str3, sizeof(str1));
	printf("Test 2 - Different strings: %d\n", result2);

	// Test 3: Compare strings up to a certain length
	int result3 = ft_memcmp(str1, str3, 5);
	printf("Test 3 - Compare up to certain length: %d\n", result3);
	return 0;
} */