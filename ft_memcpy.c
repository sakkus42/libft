/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkus <sakkus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:13:19 by sakkus            #+#    #+#             */
/*   Updated: 2022/07/04 18:56:24 by sakkus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char *)dst;
	str2 = (char *)src;
	i = 0;
	if (dst == src)
		return (0);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
