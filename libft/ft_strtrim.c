/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:37:51 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:57:02 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	strlen;
	char	*str;

	i = 0;
	strlen = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strrchr(set, s1[j - 1]) != NULL)
		j--;
	str = malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	while (i < j)
	{
		str[strlen] = s1[i];
		strlen++;
		i++;
	}
	str[strlen] = '\0';
	return (str);
}

/* #include <stdio.h>
#include <stdlib.h>

// Assuming ft_strtrim is declared in another file or above in this file
char *ft_strtrim(char const *s1, char const *set);

int main() {
    char *result;

    // Test Case 1: Trimming from both ends
    result = ft_strtrim("  hello world  ", " ");
    printf("Test 1 - Expected: 'hello world', Got: '%s'\n", result);
    free(result); // Remember to free the memory

    // Test Case 2: Trimming from the beginning only
    result = ft_strtrim("+++hello world", "+");
    printf("Test 2 - Expected: 'hello world', Got: '%s'\n", result);
    free(result);

    // Test Case 3: Trimming from the end only
    result = ft_strtrim("hello world---", "-");
    printf("Test 3 - Expected: 'hello world', Got: '%s'\n", result);
    free(result);

    // Test Case 4: No trimming needed
    result = ft_strtrim("hello world", "+");
    printf("Test 4 - Expected: 'hello world', Got: '%s'\n", result);
    free(result);

    // Test Case 5: Empty string input
    result = ft_strtrim("", " ");
    printf("Test 5 - Expected: '', Got: '%s'\n", result);
    free(result);

    // Test Case 6: Set contains no relevant characters
    result = ft_strtrim("hello world", "x");
    printf("Test 6 - Expected: 'hello world', Got: '%s'\n", result);
    free(result);

    // Test Case 7: Null inputs
    result = ft_strtrim(NULL, " ");
    printf("Test 7 - Expected: 'NULL', Got: '%s'\n", result ? result : "NULL");

    // Test Case 8: All characters are trimmed
    result = ft_strtrim("+++++", "+");
    printf("Test 8 - Expected: '', Got: '%s'\n", result);
    free(result);

    return 0;
} */