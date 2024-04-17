/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafaust <joafaust@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:35:27 by joafaust          #+#    #+#             */
/*   Updated: 2024/04/17 15:38:42 by joafaust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	size;

	if (!len && little[0])
		return (NULL);
	i = -1;
	size = ft_strlen(little);
	if (ft_strlen(big) >= size && len >= size)
	{
		while (i <= len - size)
		{
			if (!ft_strncmp(&big[i], little, size))
				return ((char *)&big[i]);
		}
	}
	return (NULL);
}
*/
/*
Description:
	locates the first instance of str little on str big on the
	first n bytes of big.
Return Value:
	pointer to the first instance of needle in haystack if found.
	NULL if not found.
	pointer to haystack if needle is empty.
*/