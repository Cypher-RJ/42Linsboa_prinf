/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:34:31 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:57:07 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/* #include <stdio.h>
int main()
{
	const char *str = "This is a test string.";
	int character = 'i';

	char *result = ft_strrchr(str, character);

	if (result == NULL)
		printf("Character '%c' not found in string.\n", character);
	else
		printf("Last character '%c' found at position %ld.\n", 
			character, result - str);
} */