/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:03:48 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/07 23:16:13 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	l;
	int		len;
	char	*num;
	int		signe;

	len = numlen(n);
	num = malloc(len + 1);
	if (!num)
		return (NULL);
	l = n;
	signe = 0;
	num[len] = '\0';
	if (l < 0)
	{
		l = l * (-1);
		signe = 1;
	}
	while (len > 0)
	{
		num[--len] = (l % 10) + '0';
		l /= 10;
	}
	if (signe)
		num[0] = '-';
	return (num);
}
