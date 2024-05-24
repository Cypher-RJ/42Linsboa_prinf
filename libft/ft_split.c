/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:09:55 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/16 15:32:49 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	set_array_size(const char *str, char limiter)
{
	int	size;
	int	pos;

	size = 0;
	pos = 0;
	while (*str && *str == limiter)
		str++;
	while (str[pos])
	{
		if (!pos)
			size++;
		else if (str[pos - 1] == limiter && str[pos] != limiter)
			size++;
		pos++;
	}
	return (size);
}

static size_t	word_position(char const *str, char limiter)
{
	size_t	position;

	position = 0;
	while (str[position] && str[position] != limiter)
		position++;
	return (position);
}

static char	**free_all(char **final_array)
{
	int	i;

	i = 0;
	while (final_array[i])
		free(final_array[i++]);
	free(final_array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**final_array;
	size_t		lmt;
	size_t		array_size;
	size_t		i;

	if (!s)
		return (NULL);
	array_size = set_array_size(s, c);
	final_array = malloc(sizeof(char *) * (array_size + 1));
	if (!final_array)
		return (NULL);
	i = 0;
	while (i < array_size)
	{
		while (*s && *s == c)
			s++;
		lmt = word_position(s, c);
		final_array[i] = ft_substr(s, 0, lmt);
		if (final_array[i] == NULL)
			return (free_all(final_array));
		s += lmt + 1;
		i++;
	}
	final_array[array_size] = NULL;
	return (final_array);
}

/* #include <stdio.h>
int main()
{
	char const *str = "hello world this is a test";
	char delimiter = ' ';
	char **result = ft_split(str, delimiter);
	int i = 0;

	if (result) {
		while (result[i] != NULL) {
			printf("Substring[%d]: %s\n", i, result[i]);
			free(result[i]);  // Free each substring
			i++;
		}
		free(result);  // Free the array of pointers
	}

	return 0;
} */