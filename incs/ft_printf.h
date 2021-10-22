/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperales <jperales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:11:55 by jperales          #+#    #+#             */
/*   Updated: 2021/10/18 19:04:54 by jperales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# define HEX_BASE		"0123456789abcdef"
# define HEX_BASE_UP	"0123456789ABCDEF"

int	ft_printf(const char *str, ...);
int	ft_string(char *s);
int	ft_char(int c);
int	ft_digit(int num);
int	ft_undigit(unsigned int num);
int	ft_hexa(unsigned int num, char *base);
int	ft_itoa_base(size_t num, char *base);
int	ft_ptr(size_t num, char *base);

#endif
