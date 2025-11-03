/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:44:50 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:07:20 by moelamma         ###   ########.fr       */
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

// int main()
// {
// 	int *arr;
// 	size_t n = -1;
// 	size_t size = sizeof(int);
// 	arr = (int *)ft_calloc(n, size);
// 	if(arr == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	for(size_t i = 0; i < n; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// 	free(arr);
// 	return (0);
// }