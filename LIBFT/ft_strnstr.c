/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafaust <joafaust@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:35:27 by joafaust          #+#    #+#             */
/*   Updated: 2024/04/17 21:09:53 by joafaust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!len && little[i])
		return (NULL);
	if (ft_strlen(big) >= ft_strlen(little) && len >= ft_strlen(little))
	{
		while (i <= len - ft_strlen(little))
		{
			if (!ft_strncmp(&big[i], little, ft_strlen(little)))
				return ((char *)&big[i]);
			i++;
		}
	}
	return (NULL);
}

/*
Description:
	locates the first instance of str little on str big on the
	first n bytes of big.
Return Value:
	pointer to the first instance of needle in haystack if found.
	NULL if not found.
	pointer to haystack if needle is empty.
*/