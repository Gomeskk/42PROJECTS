/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomes <gomes@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:20:09 by gomes             #+#    #+#             */
/*   Updated: 2024/04/11 16:53:00 by gomes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    if (!dest)
        return(NULL);
    i = 0;
    while (i < n)
    {
        *(char*)(dest + 1) = *(char*)(src + 1);
        i++;
    }
    return (dest);
}