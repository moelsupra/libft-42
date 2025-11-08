/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 12:39:50 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/07 20:44:59 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*arr;
	int		i;
	int		size;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	arr = (char *) malloc(sizeof(char) * (size + 1));
	if (!(arr))
		return (NULL);
	while (s[i])
	{
		arr[i] = s[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
