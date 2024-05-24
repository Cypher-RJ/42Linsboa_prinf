/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:16:48 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:57:33 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	full_size;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	full_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(sizeof(char) * full_size);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
/* #include <stdio.h>
int main()
{
	char const *s1 = "Hello, ";
	char const *s2 = "World!";
	char *result;

	result = ft_strjoin(s1, s2);
	if (result == NULL) {
		printf("Failed to allocate memory for the joined string.\n");
		return 1;
	}

	printf("Joined string: %s\n", result);
	free(result);

	return 0;
} */