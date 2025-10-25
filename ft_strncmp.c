/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:26:47 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/26 00:11:25 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	const char *s1 = "HellOWorld";
// 	const char *s2 = "HelloWorle";
// 	size_t n = 1;
// 	int result = ft_strncmp(s1, s2, n);
// 	int result2 = strncmp(s1, s2, n);
// 	printf("-> : %d\n", result);
// 	printf("-> : %d\n", result2);
// 	return 0;
// }