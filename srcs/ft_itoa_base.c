/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:20:21 by jperales          #+#    #+#             */
/*   Updated: 2021/10/15 17:05:25 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ft_printf.h"

int	ft_itoa_base(size_t num, char *base)
{
	int	len;
	int	size;

	size = 0;
	len = 0;
	while (base[size] != '\0')
		size++;
	if (num / size != 0)
		ft_itoa_base(num / size, base);
	ft_char(base[num % size]);
	while (num != 0)
	{
		num = num / size;
		len++;
	}
	return (len);
}
