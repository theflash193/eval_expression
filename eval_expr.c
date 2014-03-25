/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/10 09:51:21 by grass-kw          #+#    #+#             */
/*   Updated: 2014/03/18 17:02:58 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "eval_expression.h"
#include "libft/includes/libft.h"
#include <stdlib.h>
#include <stdio.h>

int		eval_expr(char *str)
{
	t_list	*list;
	t_btree	*btree;

	list = malloc(sizeof(t_list));
	btree = malloc(sizeof(t_btree));
	list = NULL;
	btree = NULL;
	converse_in_list(str, &list);
	ft_print_list(list);
	if (!list)
		return (0);
	converse_in_btree(&list, &btree);
	if (btree)
	{
		ft_putendl("on affiche btree : ");
		ft_print_btree(btree);
	}
	else
		return (0);
	//return (calcules_expr(btree, 0));
	return (0);
}

void	converse_in_list(char *s, t_list **list)
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

void	converse_in_btree(t_list **list, t_btree **btree)
{
	t_list	*tmp;

	tmp = *list;
	while (tmp)
	{
		complete_btree(tmp, "+", "-", btree);
		tmp = tmp->next;
	}
	tmp = *list;
	while (tmp)
	{
		complete_btree(tmp, "*", "/", btree);
		tmp = tmp->next;
	}
	tmp = *list;
	while (tmp)
	{
		complete_btree(tmp, "", NULL, btree);
		tmp = tmp->next;
	}
}

void		complete_btree(t_list *lst, char *c, char *d, t_btree **btree)
{
	if (!d)
	{
		if (ft_strcmp(lst->str, c) != 0)
		{
			printf("str : %s, key : %d\n", lst->str, lst->key);
			*btree = ft_btree_add(*btree, ft_btree_create_node(lst->str, lst->key));
//			printf("");
			ft_lstdelete(&lst, lst->str);
		}
	}
	else
	{
		if (ft_strcmp(lst->str, c) == 0 || ft_strcmp(lst->str, d) == 0)
		{
			*btree = ft_btree_add(*btree, ft_btree_create_node(lst->str, lst->key));
			ft_lstdelete(&lst, lst->str);
//			ft_print_list(lst);
		}
	}
}

/*
int		*calcules_expr(t_btree *btree, int i)
{
	t_btree		*tmp;

	tmp = btree;
	while (!ft_strcmp(LEFT) && !ft_strcmp(RIGHT) && tmp->right)
		tmp = tmp->right;
	if (tmp->str == "*")
	{
		if (!ft_istoken(RIGHT) && !ft_istoken(LEFT))
			return (i = calcules_expr(tmp, (ft_atoi(RIGHT) * ft_atoi(LEFT)));
		else
			return (i *= calcules_expr(tmp, (ft_atoi(LEFT) * i));
	}
		if (tmp->str == "/")
	{
		if (!ft_istoken(RIGHT) && !ft_istoken(LEFT))
			return (i = calcules_expr(tmp, (ft_atoi(RIGHT) / ft_atoi(LEFT)));
		else
			return (i /= calcules_expr(tmp, (ft_atoi(LEFT) / i));
	}
		if (tmp->str == "+")
	{
		if (!ft_istoken(RIGHT) && !ft_istoken(LEFT))
			return (i += calcules_expr(tmp, (ft_atoi(RIGHT) * ft_atoi(LEFT)));
		else
			return (i += calcules_expr(tmp, (ft_atoi(LEFT) * i));
	}
		if (tmp->str == "-")
	{
		if (!ft_istoken(RIGHT) && !ft_istoken(LEFT))
			return (i -= calcules_expr(tmp, (ft_atoi(RIGHT) - ft_atoi(LEFT)));
		else
			return (i -= calcules_expr(tmp, (ft_atoi(LEFT) - i));
	}
}*/
