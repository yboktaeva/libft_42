/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuboktae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:05:09 by yuboktae          #+#    #+#             */
/*   Updated: 2022/11/23 15:53:38 by yuboktae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = 0;
	return (new);
}

/*
int	main(void)
{
	t_list *l;
	l = ft_lstnew((void*)42);
	l->content == (void*)42;
	l->next == 0;
	write(1, "\n", 1);
	return (0);
}
*/
