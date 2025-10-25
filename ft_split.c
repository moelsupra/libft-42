/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 09:52:45 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/26 00:12:54 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_free(char **str, int k)
{
	while (--k)
		free(str[k]);
	free(str);
	return (NULL);
}

int	count(char *str, char sep)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == sep))
			i++;
		if (str[i] != '\0')
			word++;
		while (str[i] != '\0' && !(str[i] == sep))
			i++;
	}
	return (word);
}

char	*ft_word(char *str, int s, int x)
{
	int		i;
	int		len;
	char	*arr;

	i = 0;
	len = (x) + 1;
	arr = malloc(sizeof(char) * len);
	if (!arr)
		return (NULL);
	while (x)
	{
		arr[i] = str[s - x];
		x--;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

int	ft_count_the_word(char *str, char sep, int i)
{
	int	x;

	x = 0;
	while (i)
	{
		if (str[--i] != sep)
			x++;
		else
			break ;
	}
	return (x);
}

char	**ft_split(char *str, char charset)
{
	char	**split;
	int		k;
	int		i;
	int		j;

	(1 && (k = 0, i = 0));
	if (str == NULL)
		return (NULL);
	split = malloc(sizeof(char *) * (count(str, charset) + 1));
	if (split == NULL)
		return (0);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != '\0' && str[i] != charset)
			i++;
		while (str[i + j] != '\0' && str[i + j] == charset)
			j++;
		split[k++] = ft_word(str, i, ft_count_the_word(str, charset, i));
		if (!split[k - 1])
			return (ft_free(split, k));
		i += j;
	}
	split[k] = 0;
	return (split);
}

// int main()
// {
// 	char str[] = "Hel  world  my    name is    otawa fr    kdfg";
// 	char **str1 = ft_split(str, ' ');
// 	for (int i = 0; i < count(str, 32); i++)
// 	{
// 		printf("%s\n", str1[i]);
// 	}
// }