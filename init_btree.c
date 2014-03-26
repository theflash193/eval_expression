/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_btree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/26 16:49:14 by grass-kw          #+#    #+#             */
/*   Updated: 2014/03/26 16:49:24 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "eval_expression.h"
#include <stdlib.h>
#include "libft/includes/libft.h"

static void	converse_in_list(char *s, t_list **list)
{
	char 	**tab;
	int		i;

	i = 0;
	tab = NULL;
	tab = ft_strsplit(s, ' ');
	while (tab[i])
	{
		ft_lstadd(list, ft_create_elem(tab[i], i + 1));
		i++;
	}
	free(*tab);
}

static void	converse_in_btree(t_list **list, t_btree **btree)
{
	t_list	*tmp;

	tmp = *list;
	while (tmp)
	{
		if (ft_strcmp((tmp)->str, "+") == 0 || ft_strcmp((tmp)->str, "-") == 0)
		*btree = ft_btree_add(*btree, ft_btree_create_node((tmp)->str, (tmp)->key));
		tmp = tmp->next;
	}
	tmp = *list;
	while (tmp)
	{
		if (ft_strcmp((tmp)->str, "*") == 0 || ft_strcmp((tmp)->str, "/") == 0)
		*btree = ft_btree_add(*btree, ft_btree_create_node((tmp)->str, (tmp)->key));
		tmp = tmp->next;
	}
	tmp = *list;
	while (tmp)
	{
		if (isnumber(tmp->str))
		*btree = ft_btree_add(*btree, ft_btree_create_node((tmp)->str, (tmp)->key));
		tmp = tmp->next;
	}
}

int 	init_btree(char *str,t_list *list, t_btree *btree)
{
	list = malloc(sizeof(t_list));
	btree = malloc(sizeof(t_btree));
	list = NULL;
	btree = NULL;
	converse_in_list(str, &list);
	if (!list)
		return (0);
	converse_in_btree(&list, &btree);
	//destroy_list(list);
	ft_print_btree(btree);
	return (1);
}
