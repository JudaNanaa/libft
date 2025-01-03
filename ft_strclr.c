/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:06:24 by marvin            #+#    #+#             */
/*   Updated: 2024/12/07 00:15:09 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i])
		s[i++] = '\0';
	s[i] = '\0';
}

/*int main(void)
{
	char test[] = "bonjour";
	int i;

	i = 0;
	ft_strclr(test);
	while (i < 7)
	{
		if (test[i++] == '\0')
			printf("le clear est bon\n");
	}
}*/