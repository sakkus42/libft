/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkus <sakkus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:39:00 by sakkus            #+#    #+#             */
/*   Updated: 2022/07/04 21:44:35 by sakkus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{	
	size_t	s1len;

	if (s1 == NULL || set == NULL)
		return (0);
	while (*s1 && ft_strchr(set,*s1))
		s1++;
	s1len = ft_strlen(s1) - 1;
	while (s1len && ft_strchr(set, s1[s1len]))
		s1len--;
	return (ft_substr(s1, 0, s1len + 1));
}
