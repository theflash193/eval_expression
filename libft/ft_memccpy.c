/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:06:27 by grass-kw          #+#    #+#             */
/*   Updated: 2013/12/03 15:25:46 by grass-kw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned int	i;
	char			*tmp;
	char			*ptr;

	tmp = (char *)s1;
	ptr = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c)
		{
			tmp[i] = ptr[i];
			return ((void *)&tmp[i + 1]);
		}
		tmp[i] = ptr[i];
		i++;
	}
		return (NULL);
}
