/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 13:02:10 by jperales          #+#    #+#             */
/*   Updated: 2021/10/18 18:38:41 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	flen(long nbr)
{
	int		len;

	len = 0;
	if (nbr == 0)
		len++;
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*dest;
	long	nbr;
	int		len;

	nbr = n;
	len = flen(nbr);
	dest = (char *)malloc((len + 1) * sizeof (char));
	if (!dest)
		return (0);
	dest[len] = '\0';
	if (nbr == 0)
		dest[0] = '0';
	if (nbr < 0)
	{
		dest[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		dest[len - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	return (dest);
}
