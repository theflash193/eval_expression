/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/10 15:02:51 by grass-kw          #+#    #+#             */
/*   Updated: 2014/03/18 13:36:59 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/includes/libft.h"
#include "eval_expression.h"
#include <stdio.h>

void	test_lstadd(void)
{
	t_list	*lst;

	lst = NULL;
	ft_lstadd(&lst, ft_create_elem("JOJO", 1));
	ft_lstadd(&lst, ft_create_elem("Jonathan", 2));
	ft_lstadd(&lst, ft_create_elem("Joseph", 3));
	//ft_lstdelete(&lst, "JOJO");
	ft_lstdelete(&lst, "Jonathan");
	//ft_lstdelete(&lst, "Joseph");
	ft_print_list(lst);
}

void	test_converslst(char *s)
{
	t_list	*list;

	list = NULL;
	converse_in_list(s, &list);
	ft_print_list(list);
}

void	test_btreadd(void)
{
	t_btree	*btree;

	btree = NULL;
	btree = ft_btree_add(btree, ft_btree_create_node("Jonathan" , 1));
	btree = ft_btree_add(btree, ft_btree_create_node("fume tue" , 5));
	btree = ft_btree_add(btree, ft_btree_create_node("JOJO" , 2));
	btree = ft_btree_add(btree, ft_btree_create_node("joseph" , 3));
	btree = ft_btree_add(btree, ft_btree_create_node("josuke" , 0));
	ft_print_btree(btree);
//	ft_btree_add(btree, ft_btree_create_node("Jonathan" , 1));
//	ft_btree_add(btree, ft_btree_create_node("Jonathan" , 1));
//	ft_print_btree(btree);
//	printf("%s\n", "toto2");
}

int		main()
{
//	test("+");
	test_lstadd();
//	test_converslst("4 + 1");
//	test_btreadd();
	return (0);
}
