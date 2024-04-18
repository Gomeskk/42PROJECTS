/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafaust <joafaust@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 00:57:47 by joafaust          #+#    #+#             */
/*   Updated: 2024/04/18 15:38:51 by joafaust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= i)
		len = 0;
	else if (len > (i - start))
		len = i - start;
	substr = malloc(len + 1);
	if (substr == 0)
		return (NULL);
	substr[len] = '\0';
	i = -1;
	while (++i < len)
	{
		substr[i] = s[start + i];
	}
	return (substr);
}
