/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:44:35 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:24:46 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_return_long(int sign)
{
	if (sign == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > 9223372036854775807UL)
			return (ft_return_long(sign));
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// int main()
// {
// 	char str[] = "             -++-+-+-9";
// 	int res1 = ft_atoi(str);
// 	int res2 = atoi(str);
// 	printf("ft_atoi: %d\n", res1);
// 	printf("atoi: %d\n", res2);
// 	return 0;
// }
