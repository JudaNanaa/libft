/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:02:25 by madamou           #+#    #+#             */
/*   Updated: 2024/03/23 17:03:19 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	main(void)
{
	char **test;
	int i;

	i = 0;
	test = ft_split("je suis représentée comme tout!", ' ');
	if (test == NULL)
	{
		printf("tout est null\n");
		return (0);
	}
	while (test[i])
		printf("%s\n", test[i++]);
	if (test[i] == NULL)
		printf("%u", 42);
}