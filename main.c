/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/09 18:15:28 by grass-kw          #+#    #+#             */
/*   Updated: 2014/03/09 18:15:29 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "eval_expression.h"
#include "libft/includes/libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
