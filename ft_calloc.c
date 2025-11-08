/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:44:50 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/07 20:04:34 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_sz;

	if (nmemb != 0 && size > ((size_t) - 1) / nmemb)
		return (NULL);
	total_sz = nmemb * size;
	ptr = malloc(total_sz);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_sz);
	return (ptr);
}
