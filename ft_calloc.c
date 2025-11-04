/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:44:50 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/04 01:06:54 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if ((int)nmemb >= 0 && (int)size >= 0)
	{
		total_size = nmemb * size;
		ptr = malloc(total_size);
		if (ptr)
		{
			ft_bzero(ptr, total_size);
			return (ptr);
		}
	}
	return (0);
}
