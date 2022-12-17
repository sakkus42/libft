/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkus <sakkus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:16:59 by sakkus            #+#    #+#             */
/*   Updated: 2022/07/04 20:03:10 by sakkus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	slen;

	slen = ft_strlen(s1);
	str = malloc(sizeof(char) * slen + 1);
	if (str == NULL)
		return (0);
	ft_strlcpy(str, s1, slen + 1);
	return (str);
}
