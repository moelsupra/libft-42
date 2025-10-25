/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:40:47 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/26 00:08:50 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}

// int main() {
// 	char myStr1[] = "2";
// 	char myStr2[] = "2";
// 	int cmp = memcmp(myStr1, myStr2, 43);
// 	int cmp1 = ft_memcmp(myStr1, myStr2, 43);
// printf("%d\n", cmp);
// printf("%d\n", cmp1);
// 	if (cmp > 0) {
// 		printf("%s is greater than %s\n", myStr1, myStr2);
// 	} else if (cmp < 0) {
// 		printf("%s is greater than %s\n", myStr2, myStr1);
// 	} else {
// 		printf("%s is equal to %s\n", myStr1, myStr2);
// 	}
// 	return 0;
// }