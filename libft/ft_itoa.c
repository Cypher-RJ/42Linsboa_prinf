/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:54:35 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:58:47 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numcount(int n)
{
	int	i;

	i = 0;
	if (n > 0)
	{
		while (n > 0)
		{
			n = n / 10;
			i++;
		}
		return (i);
	}
	while (n < 0)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		numsize;

	numsize = ft_numcount(n);
	num = malloc(sizeof(char) * (numsize + 1));
	if (!num)
		return (NULL);
	num[numsize] = '\0';
	if (n == -2147483648)
		return (ft_memcpy(num, "-2147483648", 12));
	if (n == 0)
		num[0] = 48;
	if (n < 0)
	{
		num[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		numsize--;
		num[numsize] = (n % 10) + '0';
		n = n / 10;
	}
	return (num);
}

/* #include <stdio.h>
int main()
{
	int numbers[] = {-2147483648, -1, 0, 1, 2147483647};
	char *result;
	int i = 0;
	while (i < 5)
	{
		result = ft_itoa(numbers[i]);
		if (result)
		{
			printf("ft_itoa(%d) = %s\n", numbers[i], result);
			free(result);
		}
		else
			printf("Memory allocation failed for ft_itoa(%d)\n", numbers[i]);
		i++;
	}
	return 0;
} */