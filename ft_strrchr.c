/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:28:22 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:21:21 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
		len--;
	}
	return (0);
}

// int main() {
//   char myStr[] = "Hello Worldw. fjgfdffWgghjkl\0";
// 	char *s1 = ft_strrchr(myStr, 1111);
// 	char *s2  =ft_strrchr(myStr, 1111);
// 	printf("%s\n%s",s1,s2);
// 	printf("\nc:%c", 1111);
// 	printf("\nc:%d", (char)1111);
// //   char *myPtr = ft_strrchr(NULL, 'g');
// //   if (myPtr != NULL) {
// //     printf("%s", myPtr);
// //   }
//   return 0;
// }