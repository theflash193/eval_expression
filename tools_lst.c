/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/10 09:38:33 by grass-kw          #+#    #+#             */
/*   Updated: 2014/03/10 09:38:39 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "eval_expression.h"
#include "libft/includes/libft.h"
#include <stdlib.h>
#include <string.h>

t_list		*ft_create_elem(char *str, int key)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->str = ft_strdup(str);
	new->key = key;
	new->next = NULL;
	return (new);
}

void		ft_lstadd(t_list **begin_list, t_list *new)
{
	t_list	*tmp;

	tmp = *begin_list;
	if (!*begin_list)
		*begin_list = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

void		ft_del_list(t_list **begin_lst, char *str)
{
	t_list		*tmp;
	t_list		*tmp2;

	tmp = *begin_lst;
	tmp2 = NULL;
	while (tmp)
	{
		tmp2 = tmp;
		tmp = tmp->next;
		if (!ft_strcmp(str, tmp->str) && tmp->next)
		{
			tmp2->next = tmp->next;
			free(tmp->str);
			free(tmp);
			return ;
		}
		if (!ft_strcmp(str, tmp->str) && !tmp->next)
		{
			tmp2->next = NULL;
			free(tmp->str);
			free(tmp);
			return ;
		}
	}
}

void	ft_del_first(t_list **begin_lst)
{
	t_list		*tmp;

	if (*begin_lst && (*begin_lst)->next)
	{
		tmp = (*begin_lst)->next;
		free((*begin_lst)->str);
		free(*begin_lst);
		*begin_lst = tmp;
	}
	else
	{
		free((*begin_lst)->str);
		free(*begin_lst);
		*begin_lst = NULL;
	}
}

void	ft_lstdelete(t_list **begin_lst, char *str)
{
	t_list		*tmp;

	tmp = *begin_lst;
	exit(0);
	if (!ft_strcmp(str, tmp->str))
		ft_del_first(begin_lst);
	else
		ft_del_list(begin_lst, str);
}
