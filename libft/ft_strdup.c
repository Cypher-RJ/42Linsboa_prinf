/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:41:48 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:57:42 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	i = i + 1;
	ptr = (char *)malloc(i * sizeof(char));
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* #include <assert.h>
#include <stdio.h>

void assert_str_equal(char *result, char *expected) {
    if ((result == NULL && expected == NULL) || (result && expe
		cted && strcmp(result, expected) == 0)) {
        printf("Test passed\n");
    } else {
        printf("Test failed: expected '%s', got '%s'\n", expected, result);
    }
    free(result); // Assuming result was dynamically allocated
}

int main() {
    char *result;

    // Test 1: Normal string
    result = ft_strdup("hello");
    assert_str_equal(result, "hello");

    // Test 2: Empty string
    result = ft_strdup("");
    assert_str_equal(result, "");

    // Test 3: NULL pointer
    result = ft_strdup(NULL);
    assert_str_equal(result, NULL);

    // Test 4: Long string
    result = ft_strdup("a very long string repeated many times...");
    assert_str_equal(result, "a very long string repeated many times...");

    return 0;
} */