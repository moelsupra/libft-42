/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:24:37 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:06:35 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*pointer;

	pointer = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		pointer[i] = 0;
		i++;
	}
}

// int main()
// {
// 	// char *buffer = "hello how are you";
// 	// // char ffer[] = "hello how are you";
// 	// bzero(buffer, 10);
// 	char *buffer = ft_calloc(0,20);
// 	strcpy(buffer, "hello how are you");
// 	// ft_bzero(buffer, 10);
// 	printf("%s\n", buffer);
// 	// printf()
// }