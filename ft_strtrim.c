/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:22:40 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:15:48 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (len > start && ft_strchr(set, s1[len - 1]))
		len--;
	return (ft_substr(s1, start, (len - start)));
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int	size;
// 	int	size_set;
// 	int	end;
// 	int	start;
// 	size = ft_strlen(s1);
// 	size_set = ft_strlen(set);
// 	end = 0;
// 	start = 0;
// 	while (s1)
// 	{
// 		if (s1[start] == set[start])
// 			start++;
// 	}
// 	while (s1[size--])
// 	{
// 		if (s1[size] == set[size])
// 			end++;
// 	}
// 	if (start == size_set)
// 	{
// 	}
// }
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int	start;
// 	int	x;
// 	int	len;
// 	start = 0;
// 	x = 0;
// 	if (!s1)
// 		return (0);
// 	len = strlen(s1) - 1;
// 	while (s1[x])
// 	{
// 		if (strchr(set, s1[x++]))
// 			start++;
// 		else
// 			break ;
// 	}
// 	x = 0;
// 	while (len > 0)
// 	{
// 		if (strchr(set, s1[len--]))
// 			x++;
// 		else
// 			break ;
// 	}
// 	return (ft_substr(s1, start, (strlen(s1) - (start + x))));
// }

// int main()
// {
// 	char str1[] = "hol ello  bbbbbbb hello bbbbbbb hello";
// 	char str2[] = "ho le";
// 	printf("result:");
// 	char *result = ft_strtrim(str1, str2);
// 	printf(" -%s-\n", result);
// 	// char str2[] = "asd";
// 	// printf("*str1 : %s\n\t", str1);
// 	// printf("str1 : %p\n\t", &str1);
// 	// printf("str1a : %p\n", &(str1[0]));
// 	// printf("str1a : %p\n", &(str1[2]));
// 	// printf("str2[] : %s\n\t", str2);
// 	// printf("str2 : %p\n\t", &str2);
// 	// printf("str2a : %p\n", &(str2[0]));
// 	// printf("str2a : %p\n", &(str2[1]));
// 	// char *str1 = "asd";
// 	// char *str2 = strdup(var);
// 	// char *str3 = str1;
// 	// return 0;
// }