/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafaust <joafaust@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:41:43 by joafaust          #+#    #+#             */
/*   Updated: 2024/04/18 16:44:06 by joafaust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		a;

	a = 0;
	i = 0;
	res = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (res == 0)
		return (NULL);
	while (s1[i])
		res[a++] = s1[i++];
	i = 0;
	while (s2[i])
		res[a] = s2[i];
	res[a] = 0;
	return (res);
}
