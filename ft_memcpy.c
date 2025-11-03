/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:55:56 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:11:06 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}

// int main()
// {
// 	char src[] = "sdfghg";
// 	char dst[] = "";
// 	printf("dst :%s\n", dst);
// 	printf("src %s\n", src);
// 	printf("dst %s\n",ft_memcpy(&dst, &src, 6));
// }

// int main () {
// 	char src[] = "Hello, World!";
// 	char dest[20];
// 	//ft_memcpy(dest, src, 13);
// 	memcpy(dest, src, 13);
// 	// Now dest should contain "Hello, World!"
// 	printf("Copied string: %s\n", dest);
// 	return 0;
// }