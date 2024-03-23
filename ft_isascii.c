/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 00:16:58 by yourLogin         #+#    #+#             */
/*   Updated: 2024/03/22 00:16:58 by yourLogin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 126)
		return (1);
	return (0);
}

/*int main(void)
{
	printf("%d\n", ft_isascii(126));
	printf("%d\n", isascii(126));
}*/
