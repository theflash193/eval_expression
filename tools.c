/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/10 09:19:14 by grass-kw          #+#    #+#             */
/*   Updated: 2014/03/17 14:20:53 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "eval_expression.h"
#include "libft/includes/libft.h"

int		ft_istoken(char *str)
{
	if (ft_strcmp(str, "*"))
		return (1);
	if (ft_strcmp(str, "/"))
		return (1);
	if (ft_strcmp(str, "+"))
	return (1);
	if (ft_strcmp(str, "-"))
		return (1);
	return (0);
}
