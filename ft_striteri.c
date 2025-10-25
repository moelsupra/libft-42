/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:35:02 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/26 00:10:45 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	change_case(unsigned int i, char *ptr)
{
	if ((*ptr >= 'a' && *ptr < 'z') || (*ptr >= 'A' && *ptr < 'Z'))
		*ptr += 1;
	else if (*ptr == 'Z' || *ptr == 'z')
		*ptr -= 25;
	else
		i++;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// int main()
// {
// 	char c[] = "Hello, r4r!\n";
// 	ft_striteri(c, change_case);
// 	printf("%s\n", c);
// }