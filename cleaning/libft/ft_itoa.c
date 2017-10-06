/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: regien <gmalpart@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 15:35:00 by regien            #+#    #+#             */
/*   Updated: 2017/10/06 02:28:44 by gmalpart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*dtwork(int n, int len, char *pdj, size_t negative)
{
	while (len >= 0)
	{
		if (len >= 0)
		{
			pdj[len] = ((n % 10) + '0');
			n = (n / 10);
			len--;
		}
		if (negative == 1 && len == 0)
		{
			pdj[len] = '-';
			len--;
		}
	}
	return(pdj);
}

char	*ft_itoa(int n)
{
	size_t	negative;
	int	len;
	char	*holder;

	len = ft_nbrlen(n, 10);
	if (!(holder = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	holder[len] = '\0';
	len--;
	negative = 0;
	if (n == -2147483648)
	{
		holder = "-2147483648";
		return(holder);
	}
	if (n < 0)
	{
		negative = 1;
		n = -n;
	}
	holder = dtwork(n, len, holder, negative);
	return (holder);
}