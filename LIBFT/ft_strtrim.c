/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafaust <joafaust@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:04:25 by joafaust          #+#    #+#             */
/*   Updated: 2024/04/19 20:50:56 by joafaust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	end;

	end = ft_strlen(s1) - 1;
	i = 0;
	if (s1 == 0)
		return (NULL);
	if (*set == '\0')
		return (ft_strdup(s1));
	while (s1[i] && (ft_strchr(set, s1[i])))
		i++;
	while (s1[end] && (ft_strchr(set, s1[end])))
		end--;
	return (ft_substr(s1, i, end - i + 1));
}

/* #include <stdio.h>

int	main(void)
{
	const char	*s1_strtrim = "/Eu/Gosto/de/Calor/";
	const char	*set_strtrim = "/E";
	char		*result_strtrim;

	result_strtrim = ft_strtrim(s1_strtrim, set_strtrim);
	printf("TESTING FT_STRSTRIM \n\n");
	printf("%s \n", result_strtrim);
	free(result_strtrim);
	printf("\n");
} */

/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string
*/