/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_btree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/10 09:09:46 by grass-kw          #+#    #+#             */
/*   Updated: 2014/03/18 16:36:31 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "eval_expression.h"
#include "stdio.h"
#include "libft/includes/libft.h"

void		ft_print_btree(t_btree *root)
{
	t_btree	*tmp;

	tmp = root;
	if (!tmp)
	{
		ft_putendl("la creation de l'arbre a echouer");
		exit(0);
	}
	else
	 {
		ft_putstr(tmp->str);
		ft_putstr(" : ");
		ft_putnbr(tmp->key);
		ft_putendl("");
		if (tmp->left)
			ft_print_btree(tmp->left);
		if (tmp->right)
			ft_print_btree(tmp->right);
	 }
}

void	ft_print_list(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	while (tmp)
	{
		ft_putstr(tmp->str);
		ft_putstr(" : ");
		ft_putnbr(tmp->key);
		ft_putendl("");
		tmp = tmp->next;
	}
}
