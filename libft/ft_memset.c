/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:25:40 by grass-kw          #+#    #+#             */
/*   Updated: 2013/11/29 18:30:42 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*tmp;

	tmp = b;
	i = 0;
	while (len > 0)
	{
		tmp[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
