/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkus <sakkus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:26:08 by sakkus            #+#    #+#             */
/*   Updated: 2022/07/04 19:04:45 by sakkus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str1;
	char	*str2;

	if (dst == src)
		return (dst);
	str1 = (char *)dst;
	str2 = (char *)src;
	if (str1 > str2)
	{
		while (len)
		{
			len--;
			*(str1 + len) = *(str2 + len);
		}
		return (dst);
	}
	ft_memcpy(dst, src, len);
	return (dst);
}
