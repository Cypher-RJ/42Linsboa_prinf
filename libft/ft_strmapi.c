/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:21:32 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:57:19 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (!s || !f)
		return (NULL);
	while (s[j])
		j++;
	str = malloc(j + 1);
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/* #include <stdio.h>
// Sample callback function that converts characters to uppercase
char to_uppercase(unsigned int i, char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int main() {
    char const *s = "hello world";
    char *result;

    // Using ft_strmapi with the to_uppercase function
    result = ft_strmapi(s, to_uppercase);
    if (result) {
        printf("Original: %s\n", s);
        printf("Modified: %s\n", result);
        free(result);
    } else {
        printf("Failed to allocate memory.\n");
    }

    return 0;
} */