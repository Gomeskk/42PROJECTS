/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafaust <joafaust@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:22:54 by joafaust          #+#    #+#             */
/*   Updated: 2024/04/17 23:11:13 by joafaust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dest;

	len = ft_strlen(s);
	dest = malloc(sizeof(*dest) * (len + 1));
	if (dest)
	{
		ft_memcpy(dest, s, len);
		dest[len] = '\0';
	}
	return (dest);
}

/*
duplicates a new string, copy using malloc
ft_strlen stops when finding a null byte... so we add
that null byte at the end
memcpy to copy byte by byte
*/
