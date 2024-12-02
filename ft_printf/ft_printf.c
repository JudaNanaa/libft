/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:12:36 by madamou           #+#    #+#             */
/*   Updated: 2024/12/02 03:24:43 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdbool.h>
#include <unistd.h>

int	ft_printf(const char *str, ...)
{
	va_list	args;
	t_data	data;
	int		i;
	int		increment;

	i = 0;
	if (!str)
		return (-1);
	(ft_bzero(&data, sizeof(data)), va_start(args, str));
	while (str[i])
	{
		if (str[i] == '%')
		{
			increment = parse_flag(&str[++i], &data, args);
			if (increment == -1)
				return (va_end(args), -1);
			i += increment;
		}
		else
		{
			if (add_char_to_buffer(&data, str[i++]) == -1)
				return (va_end(args), -1);
		}
	}
	return (va_end(args), data.fd = 1, print_buffer(&data), data.nb_print);
}

int	ft_fprintf(int fd, const char *str, ...)
{
	va_list	args;
	t_data	data;
	int		i;
	int		increment;

	i = 0;
	if (!str)
		return (-1);
	(ft_bzero(&data, sizeof(data)), va_start(args, str));
	while (str[i])
	{
		if (str[i] == '%')
		{
			increment = parse_flag(&str[++i], &data, args);
			if (increment == -1)
				return (va_end(args), -1);
			i += increment;
		}
		else
		{
			if (add_char_to_buffer(&data, str[i++]) == -1)
				return (va_end(args), -1);
		}
	}
	return (va_end(args), data.fd = fd, print_buffer(&data), data.nb_print);
}


// int	main(void)
// {
// 	printf(" return value == [%d]\n", printf("%.6i", -3));
// 	printf(" return value == [%d]\n", ft_printf("%.6i", -3));
// }
