/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:21:04 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:10:25 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;

	ptr = (unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*ptr == ch)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

// #include <stdio.h>  
// int main() {
// 	const char str[] = "Hello, World!";
// 	char ch = 'W';
// 	size_t n = 13;
// 	char *result = (char *)ft_memchr(str, ch, n);
// 	if (result) {
// 		printf("Character '%c' found at position: %ld\n", ch, result - str);
// 	} else {
// 		printf("Character '%c' not found in the first %zu bytes.\n", ch, n);
// 	}
// 	return 0;
// }