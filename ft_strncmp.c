/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:26:47 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:14:32 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	// ft_strncmp("test\200", "test\0", 6)
// 	const char *s1 = "test\200";
// 	const char *s2 = "test\0";
// 	size_t n = 6;
// 	int result = ft_strncmp(s1, s2, n);
// 	int result2 = strncmp(s1, s2, n);
// 	printf("-> : %d\n", result);
// 	printf("-> : %d\n", result2);
// 	return 0;
// }