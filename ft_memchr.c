/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:05:44 by madamou           #+#    #+#             */
/*   Updated: 2024/05/18 11:36:02 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	int tab[7] = {0, 1, 2 ,3 ,4 ,5};
// 	int tab1[7] = {0, 1, 2 ,3 ,4 ,5};
// 	printf("%p\n", memchr(tab, 2 + 256, 3));
// 	printf("%p\n", ft_memchr(tab1, 2 + 256, 3));
// }