/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:25:17 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/07 20:38:54 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	unsigned int	i;
	char			*res;

	x = 0;
	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	res = malloc(i + 1);
	if (!res)
		return (NULL);
	while (x < i)
	{
		res[x] = f(x, s[x]);
		x++;
	}
	res[x] = '\0';
	return (res);
}
