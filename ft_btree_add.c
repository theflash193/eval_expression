/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/10 09:20:27 by grass-kw          #+#    #+#             */
/*   Updated: 2014/03/17 17:02:00 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "eval_expression.h"
#include <stdlib.h>

t_btree		*ft_btree_add(t_btree *begin_list, t_btree *new)
{
	t_btree	*tmp;

	if (!new)
		return (begin_list);
	if (!begin_list)
	{
		begin_list = new;
		return (begin_list);
	}
	tmp = begin_list;
	if (new->key < tmp->key)
		tmp->left = ft_btree_add(tmp->left, new);
	else
		tmp->right = ft_btree_add(tmp->right, new);
	return (begin_list);
}
