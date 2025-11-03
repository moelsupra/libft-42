/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:06:50 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:12:26 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

// int main() {
// 	char myStr[] = "Hello World";
// 	// char *myPtr = ft_strchr(myStr, '\0');
// 	char *myPtr1 = strchr(myStr, '\0');
// 	if (myPtr1 != NULL) {
// 		// printf("%s\n", myPtr);
// 		printf("%s", myPtr1);
// 	}
// 	return 0;
// }