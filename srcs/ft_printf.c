/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:13:53 by jperales          #+#    #+#             */
/*   Updated: 2021/10/19 17:06:23 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ft_printf.h"
#include <stdarg.h>

int	ft_printf_case(const char *str, int i, va_list arglist)
{
	int	arg_len;

	arg_len = 0;
	if (str[i + 1] == 's')
		arg_len = ft_string(va_arg(arglist, char *));
	if (str[i + 1] == 'c')
		arg_len = ft_char(va_arg(arglist, int));
	if (str[i + 1] == 'd' || str[i + 1] == 'i')
		arg_len = ft_digit(va_arg(arglist, int));
	if (str[i + 1] == 'u')
		arg_len = ft_undigit(va_arg(arglist, unsigned int));
	if (str[i + 1] == 'x')
		arg_len = ft_hexa(va_arg(arglist, unsigned int), HEX_BASE);
	if (str[i + 1] == 'X')
		arg_len = ft_hexa(va_arg(arglist, unsigned int), HEX_BASE_UP);
	if (str[i + 1] == 'p')
		arg_len = ft_ptr(va_arg(arglist, size_t), HEX_BASE);
	if (str[i + 1] == '%')
	{
		arg_len = 1;
		write(1, "%", 1);
	}
	return (arg_len);
}

int	ft_write_string(const char *str, va_list arglist)
{
	int	i;
	int	count;
	int	arg_len;

	arg_len = 0;
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			count++;
			i++;
		}
		else
		{
			arg_len = ft_printf_case(str, i, arglist);
			count = count + arg_len;
			arg_len = 0;
			i = i + 2;
		}
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	arglist;
	int		string_len;

	if (!str)
		return (0);
	va_start (arglist, str);
	string_len = ft_write_string(str, arglist);
	va_end(arglist);
	return (string_len);
}
