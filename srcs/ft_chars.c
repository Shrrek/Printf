/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chars.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:14:37 by jperales          #+#    #+#             */
/*   Updated: 2021/10/13 17:06:34 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_string(char *s)
{
	int	j;

	j = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[j] != '\0')
	{
		write(1, &s[j], 1);
		j++;
	}
	return (j);
}

int	ft_char(int c)
{
	write(1, &c, 1);
	return (1);
}
