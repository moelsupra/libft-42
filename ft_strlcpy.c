/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:50:55 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/18 13:10:47 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i; // index for iteration
	size_t	length; // length of src

	i = 0;
	length = 0;
	while (src[length] != '\0') // calculate length of src
	{
		length++;
	}
	if (dstsize == 0) // if dstsize is 0, we cannot copy anything
		return (length);
	while (src[i] != '\0' && i < dstsize - 1) // copy up to dstsize - 1 characters
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}
