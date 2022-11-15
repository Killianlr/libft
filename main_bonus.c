/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:01:26 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/15 16:28:20 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content)
{
	(void)content;
	content = NULL;
}

void	*f(void *content)
{
	char	*temp;

	temp = (char *)content;
	temp = "guengat";
	return ((void *)temp);
}

void	printList(t_list *c)
{
	while (c)
	{
		printf("%s\n", (char *)c->content);
		c = c->next;
	}
}

int	main(void)
{
	t_list	*l0 = ft_lstnew("list0");
	t_list	*l1 = NULL;
	t_list	*l2 = NULL;
	t_list	*l3 = NULL;
	t_list	*l4 = NULL;
	t_list	*new = NULL;

	l1 = malloc(sizeof(t_list*));
	l2 = malloc(sizeof(t_list*));
	l3 = malloc(sizeof(t_list*));
	l4 = malloc(sizeof(t_list*));
	l0->next = l1;
	l1->content = "list1";
	l1->next = l2;
	l2->content = "list2";
	l2->next = l3;
	l3->content = "list3";
	l3->next = l4;
	l4->content = "list4";
	l4->next = NULL;
	// ft_lstadd_front(&l2, l1);
	//printf("%s\n", (char *)ft_lstlast(l0)->content);
	//printf("%d\n", ft_lstsize(l0));
	//ft_lstadd_back(&l0, l2);
	new = ft_lstmap(l0, f, del);
	//ft_lstdelone(l4, del);
	printList(new);
	printList(l0);
	ft_lstclear(&new, del);
	ft_lstclear(&l0, del);

	return(0);
}