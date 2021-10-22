/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 17:45:11 by jperales          #+#    #+#             */
/*   Updated: 2021/10/18 18:44:02 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ft_printf.h"
#include "../libft/libft.h"

int	ft_digit(int num)
{
	char	*res;
	int		i;

	res = ft_itoa(num);
	i = ft_string(res);
	free(res);
	return (i);
}

int	ft_undigit(unsigned int num)
{
	char	*res;
	int		i;

	res = ft_unitoa(num);
	i = 0;
	while (res[i])
	{
		write (1, &res[i], 1);
		i++;
	}
	free (res);
	return (i);
}

int	ft_hexa(unsigned int num, char *base)
{
	int		count;

	count = 0;
	if (num == 0)
	{
		write (1, "0", 1);
		count++;
		return (count);
	}
	count = ft_itoa_base(num, base);
	return (count);
}

int	ft_ptr( size_t num, char *base)
{
	int	count;

	count = 2;
	write (1, "0x", 2);
	if (num == 0)
	{
		write (1, "0", 1);
		count++;
		return (count);
	}
	count = 2 + ft_itoa_base((size_t)num, base);
	return (count);
}
