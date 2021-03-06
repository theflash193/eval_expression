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
	if (!init_btree(str, list, btree))
		return (-1);
	return (calcules_expr(btree, 0));
	return (0);
}

int		calcules_expr(t_btree *btree, int i)
{
	t_btree		*tmp;

	tmp = btree;
	ft_putendl("yolo");
	if (tmp->left && tmp->right && (!isnumber(LEFT) || !isnumber(RIGHT)))
		calcules_expr(tmp->right, i);
	ft_putendl("jojo");
	if (!ft_strcmp(tmp->str, "*"))
	{
		if (!isnumber(RIGHT) && !isnumber(LEFT))
			return (i = calcules_expr(tmp, (ft_atoi(RIGHT) * ft_atoi(LEFT))));
		else
			return (i *= calcules_expr(tmp, (ft_atoi(LEFT) * i)));
	}
		if (ft_strcmp(tmp->str, "/"))
	{
		if (isnumber(RIGHT) && isnumber(LEFT))
			return (i = calcules_expr(tmp, (ft_atoi(RIGHT) / ft_atoi(LEFT))));
		else
			return (i /= calcules_expr(tmp, (ft_atoi(LEFT) / i)));
	}
		if (!ft_strcmp(tmp->str, "+"))
	{
		if (isnumber(RIGHT) && isnumber(LEFT))
			return (i += calcules_expr(tmp, (ft_atoi(RIGHT) + ft_atoi(LEFT))));
		else
			return (i += calcules_expr(tmp, (ft_atoi(LEFT) + i)));
	}
		if (!ft_strcmp(tmp->str, "-"))
	{
		if (isnumber(RIGHT) && isnumber(LEFT))
			return (i -= calcules_expr(tmp, (ft_atoi(RIGHT) - ft_atoi(LEFT))));
		else
			return (i -= calcules_expr(tmp, (ft_atoi(LEFT) - i)));
	}
}
