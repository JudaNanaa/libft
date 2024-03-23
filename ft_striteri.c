/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:06:38 by marvin            #+#    #+#             */
/*   Updated: 2024/03/23 23:28:48 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_putchar_test(unsigned int i, char *s)
{
	write(1, &s[i], 1);
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	i = 0;
	while (s[i])
		f(i++, s);
}

/*int main(void)
{
	char test[] = "Je suis entrain de test";
	ft_striteri(test, &ft_putchar_test);
}*/