/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:01:26 by kle-rest          #+#    #+#             */
/*   Updated: 2022/11/14 15:30:50 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content)
{
	content = NULL;
}

void	printList(t_list *c)
{
	while (c)
	{
		printf("%s\n", (char *)c->content);
		c = c->next;
	}
}

void	freeloop(t_list *c)
{
	t_list	*temp;

	temp = c;
	while (c)
	{
		temp = c->next;
		free(c);
		c = temp;
	}
}

int	main(void)
{
	t_list	*l0 = ft_lstnew("list0");
	t_list	*l1 = NULL;
	t_list	*l2 = NULL;
	t_list	*l3 = NULL;
	t_list	*l4 = NULL;

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
	//freeloop(l0);
	ft_lstdelone(l4, del);
	printList(l0);



	return(0);
}