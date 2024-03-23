/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 11:42:25 by madamou           #+#    #+#             */
/*   Updated: 2024/03/23 12:16:27 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i++] = '\0';
	}
	return ((void *)ptr);
}

/*int main(void)
{
	char *result;
	int i = 0;

	result = calloc(0, 0);
	if (result == NULL)
		printf("NULL\n");
	else
		while (i < 10)
		{
			if (result[i] == '\0')
				printf("c'est bon %d\n", i);
			i++;
		}
	i = 0;
	result = ft_calloc(0, 0);
	if (result == NULL)
		printf("NULL\n");
	else
		while (i < 10)
		{
			if (result[i] == '\0')
				printf("c'est bon %d\n", i);
			i++;
		}
}*/