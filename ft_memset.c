/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:56:40 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/04 02:03:51 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pointer;
	unsigned char	uc;

	uc = (unsigned char)c;
	pointer = (unsigned char *)b;
	while (len)
		pointer[--len] = uc;
	return (b);
}
