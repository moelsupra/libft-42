/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:50:55 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:13:45 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	length;

	length = ft_strlen(src);
	if (dstsize == 0)
		return (length);
	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}

// int main()
// {
// 	printf("hey");
// 	char dst[] = "ertj";
// 	char *src = "hello amine welcome to the new era";

// 	// size_t size = ft_strlcpy(dst, NULL, 5);
// 	size_t size = strlcpy(dst, NULL, 5);
// 	printf("src-%s-\n",src);
// 	printf("dst-%s-\n",dst);
// 	printf("size-%zu-\n",size);
// }