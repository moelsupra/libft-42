/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:08:10 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:14:53 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main() {
// 	const char *haystack = "Hello, this is a simple thist example.";
// 	const char *needle = "thist";
// 	size_t len = 25;
// 	char *result = ft_strnstr(haystack, needle, len);
// 	printf("ft_strnstr result: %s\n", result);
// 	if (result) {
// 		printf("Found: %s\n", result);
// 	} else {
// 		printf("Not Found\n");
// 	}
// 	return 0;
// }