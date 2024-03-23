/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 00:31:14 by yourLogin         #+#    #+#             */
/*   Updated: 2024/03/23 23:54:27 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	true_c;

	if (c == -1)
		return (c);
	true_c = (unsigned char)c;
	if (true_c >= 'a' && true_c <= 'z')
		return (true_c - 32);
	return (true_c);
}

/*int	main(void)
{
	printf("%c\n", ft_toupper('B'));
}*/
