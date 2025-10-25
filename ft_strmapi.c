/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:25:17 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/26 00:11:15 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	x;
	unsigned int	i;
	char			*res;

	x = 0;
	i = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	res = malloc(i + 1);
	if (!res)
		return (NULL);
	while (x < i)
	{
		res[x] = f(x, s[x]);
		x++;
	}
	res[x] = '\0';
	return (res);
}

// char	change_case(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return ft_toupper(c);
// 	else
// 		return ft_tolower(c);
// }
// int main()
// {
// 	char *str = NULL;
// 	char *str1 = ft_strmapi(str,change_case);
// 	printf("%s\n", str1);
// }