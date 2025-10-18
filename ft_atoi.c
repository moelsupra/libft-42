/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:44:35 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/18 22:18:38 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > 9223372036854775807)
			return (sign == 1 ? -1 : 0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (result > 2147483647 && sign == 1)
		return (-1);
	else if (result > 2147483647 && sign == -1)
		return (0);
	return (result * sign);
}


int main(int argc, char const *argv[])
{
	char str[] = "922337203685477580";
	int res1 = ft_atoi(str);
	int res2 = atoi(str);
	printf("ft_atoi: %d\n", res1);
	printf("atoi: %d\n", res2);
	
	return 0;
	
}
