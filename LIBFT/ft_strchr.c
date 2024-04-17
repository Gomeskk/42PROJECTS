/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafaust <joafaust@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 05:02:05 by joafaust          #+#    #+#             */
/*   Updated: 2024/04/17 16:48:48 by joafaust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (!(char)c)
		return ((char *)s);
	return (NULL);
}

/*
if c is not found in s, then it returns a pointer to
		the null byte at the end of s,
*/
/*
#include <stdio.h>

int	main(void)
{
	const char	*str = "This is a test string.";
	int			character_to_find;
	char		*result;

	character_to_find = 'a';
	result = ft_strchr(str, character_to_find);
	if (result != NULL) {
		printf("Found '%c' at position: %ld\n", character_to_find, result
			- str);
	} else {
		printf("'%c' not found in the string.\n", character_to_find);
	}
	return (0);
}
*/