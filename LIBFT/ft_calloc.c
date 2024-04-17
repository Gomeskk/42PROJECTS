/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafaust <joafaust@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:22:00 by joafaust          #+#    #+#             */
/*   Updated: 2024/04/17 23:12:01 by joafaust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*i;

	i = malloc(nitems * size);
	if (!i)
		return (NULL);
	ft_bzero(i, nitems * size);
	return (i);
}

/*
Description:
	Calloc allocates memory and sets the allocated memory to zero.
Return Value:
	A pointer to the allocated memory, or NULL if the request fails.
*/