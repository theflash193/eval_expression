/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/10 09:19:51 by grass-kw          #+#    #+#             */
/*   Updated: 2014/03/17 14:22:48 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "eval_expression.h"
#include <stdlib.h>
#include <string.h>
#include "libft/includes/libft.h"

t_btree		*ft_btree_create_node(char *str, int key)
{
	t_btree		*new;

	if (!(new = (t_btree *)malloc(sizeof(t_btree))))
		return (NULL);
	new->str = ft_strdup(str);
	new->key = key;
	new->right = NULL;
	new->left = NULL;
	return (new);
}
