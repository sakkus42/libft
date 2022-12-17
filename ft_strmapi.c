/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkus <sakkus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:17:08 by sakkus            #+#    #+#             */
/*   Updated: 2022/07/02 22:57:28 by sakkus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (s == NULL)
		return ((char *)s);
	i = 0;
	str = ft_strdup(s);
	if (!(str))
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
