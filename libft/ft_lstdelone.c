/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcesar-d <rcesar-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:23:26 by rcesar-d          #+#    #+#             */
/*   Updated: 2024/05/15 11:58:38 by rcesar-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* #include <stdio.h>
void del(void *content)
{
	free(content);
}

int main()
{
	// Create a test list node
	t_list *node = malloc(sizeof(t_list));
	if (!node)
		return 1;

	// Allocate and assign content to the node
	node->content = malloc(sizeof(int));
	if (!node->content)
	{
		free(node);
		return 1;
	}
	*(int *)(node->content) = 42; // Example content

	// Test the ft_lstdelone function
	ft_lstdelone(node, del);

	printf("Node has been deleted successfully.\n");

	return 0;
} */