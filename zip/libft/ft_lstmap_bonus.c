/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marimoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:06:03 by marimoli          #+#    #+#             */
/*   Updated: 2025/01/09 17:06:06 by marimoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	create_node(t_list **list, void *content, void (*del)(void *))
{
	t_list	*node;

	node = ft_lstnew(content);
	if (!node)
	{
		del(content);
		return (0);
	}
	ft_lstadd_back(list, node);
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	void	*transformed;

	if (!f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		transformed = f(lst->content);
		if (!transformed || !create_node(&new_lst, transformed, del))
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_lst);
}

/*void *multiply_by_two(void *content)
{
    int *value = (int *)content;
    *value *= 2;  
    return content;
}

// Función que libera el contenido del nodo
void del(void *content)
{
    free(content);
}

int main()
{
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)lst->content = 1;
    lst->next = ft_lstnew(malloc(sizeof(int)));
    *(int *)lst->next->content = 2;
    lst->next->next = ft_lstnew(malloc(sizeof(int)));
    *(int *)lst->next->next->content = 3;
    t_list *new_lst = ft_lstmap(lst, multiply_by_two, del);
    t_list *temp = new_lst;
    while (temp)
    {
        printf("%d\n", *(int *)temp->content);  // Debe imprimir 2, 4, 6
        temp = temp->next;
    }
    ft_lstclear(&lst, del);
    ft_lstclear(&new_lst, del);
    return 0;
}*/
