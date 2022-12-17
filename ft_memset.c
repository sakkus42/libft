/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkus <sakkus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:38:10 by sakkus            #+#    #+#             */
/*   Updated: 2022/07/02 18:52:51 by sakkus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*metin;
	unsigned char	test;
	size_t			i;

	i = 0;
	metin = (unsigned char *) b;
	test = (unsigned char)c;
	while (i < len)
	{
		metin[i] = test;
		i++;
	}
	return (b);
}
