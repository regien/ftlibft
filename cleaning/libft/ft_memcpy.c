/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 17:11:23 by regien            #+#    #+#             */
/*   Updated: 2017/10/09 18:34:03 by regien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	unsigned char	*destc;
	unsigned char	*srcc;

	destc = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destc[i] = srcc[i];
		i++;
	}
	return (dest);
}
