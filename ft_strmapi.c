/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:25:17 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/25 19:40:11 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char change_case(unsigned int i, char c)
{
    if (i % 2 == 0)
        return ft_toupper(c);
    else
        return ft_tolower(c);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int x = 0;
	unsigned int i = cd ft_strlen(s);
	char *res = malloc(i + 1);
	while (x < i)
	{
		res[x] = f(x, s[x]);
		x++;
	}
	res[x] = '\0';
	return (res);
}
int main()
{
	char *str = "hello hassan how are you";
	char *str1 = ft_strmapi(str,change_case);
	printf("%s\n", str1);
}