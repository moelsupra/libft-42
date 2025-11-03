/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:11:00 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:20:45 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dstsize < lendst)
		return (dstsize + lensrc);
	i = 0;
	while (src[i] && (lendst + i) < (dstsize - 1))
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}

// int main()
// {
// 	char dst[10] = "42";
// 	char src[] = "Hello";
// 	printf("dst:-%s-\n", dst);
// 	printf("src:-%s-\n", src);
// 	size_t sx = ft_strlcat(dst, src, 10);
// 	printf("dst:-%zu-\n", sx);
// 	printf("dst:-%s-\n", dst);
// 	printf("src:-%s-\n", src);
// }