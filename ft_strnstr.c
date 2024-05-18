/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:22:14 by madamou           #+#    #+#             */
/*   Updated: 2024/05/18 11:17:31 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*true_big;
	char	*true_little;
	int		cast;

	cast = (int)len;
	if (!*little)
		return ((char *)big);
	true_big = (char *)big;
	true_little = (char *)little;
	i = 0;
	while (i < len && cast >= 0)
	{
		j = 0;
		while (true_big[i + j] == true_little[j] && true_little[j] && i
			+ j < len)
			j++;
		if (true_little[j] == '\0')
			return (&true_big[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	// char test[] = "je suis shadowpris";
// 	// char search[] = "shadow";
// 	char *result;
// 	result = strnstr("oui", "coucou", -1);
// 	if (result == NULL)
// 		printf("NULL\n");
// 	else
// 		printf("%s\n", result);
// 	result = ft_strnstr("oui", "coucou", -1);
// 	if (result == NULL)
// 		printf("NULL\n");
// 	else
// 		printf("%s\n", result);
// }