/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 18:22:40 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/19 18:48:41 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char *ft_strtrim(char const *s1, char const *set)
// {
//     int size = ft_strlen(s1);
//     int size_set = ft_strlen(set);
//     int end = 0;
//     int start = 0;
//     while(s1)
//     {
//         if(s1[start] == set[start])
//             start++;
//     }
//     while (s1[size--])
//     {
//         if(s1[size] == set[size])
//             end++;
//     }
//     if (start == size_set)
//     {
        
//     }
    
            
    
// }


char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	x;
	int	len;

	start = 0;
	x = 0;
	if (!s1)
		return (0);
	len = strlen(s1) - 1;
	while (s1[x])
	{
		if (strchr(set, s1[x++]))
			start++;
		else
			break ;
	}
	x = 0;
	while (len > 0)
	{
		if (strchr(set, s1[len--]))
			x++;
		else
			break ;
	}
	return (ft_substr(s1, start, (strlen(s1) - (start + x))));
}
int main()
{
    char str1[] = "hol ello  bbbbbbb hello bbbbbbb hello";
    char str2[] = "eho l";
	printf("result:");
    char *result = ft_strtrim(str1, str2);
	printf("%s\n", result);
    return 0;
}