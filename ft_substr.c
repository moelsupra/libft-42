/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:57:41 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:22:21 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptrsub;
	char	*ptr;
	size_t	slen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ptrsub = ptr;
	while (s[start] != '\0' && len--)
	{
		*ptr++ = s[start];
		start++;
	}
	*ptr = '\0';
	return (ptrsub);
}

// | Case                     | Example                     | Result                      |
// | ------------------------ | --------------------------- | --------------------------- |
// | `start` > `strlen(s)`    | `ft_substr("Hello", 10, 3)` | Returns `""` (empty string) |
// | `len` > remaining length | `ft_substr("Hello", 3, 10)` | Returns `"lo"`              |
// | `len == 0`               | `ft_substr("Hello", 0, 0)`  | Returns `""`                |
// | `s == NULL`              | —                           | Returns `NULL`              |

// int main()
// {
//     char stt[] = "Hello 1337";
//     char *s1 = ft_substr(stt, 10, 0);
//     printf("-%s-\n", s1);
//     return 0;
// }

// char	*ft_sccubstr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	slen;

// 	slen = ft_strlen(s);
// 	if (start >= slen)
// 		return (ft_strdup(""));
// 	if (len > slen - start)
// 		len = slen - start;
// }
