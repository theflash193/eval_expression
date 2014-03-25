/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:00:00 by grass-kw          #+#    #+#             */
/*   Updated: 2013/12/03 15:27:22 by grass-kw         ###   ########.fr       */
/*   Updated: 2013/11/22 17:01:28 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	int			i;
	char		*tmp;
	const char	*ptr;

	tmp = s1;
	ptr = s2;
	i = 0;
	while (n > 0)
	{
		tmp[i] = ptr[i];
		i++;
		n--;
	}
	return (s1);
}
