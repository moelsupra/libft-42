/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 01:58:56 by moelamma          #+#    #+#             */
/*   Updated: 2025/11/03 01:25:26 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char sep)
{
	int	word;
	int	inword;

	word = 0;
	inword = 0;
	while (*s)
	{
		if (*s == sep)
			inword = 0;
		else if (inword == 0)
		{
			word++;
			inword = 1;
		}
		s++;
	}
	return (word);
}

static int	word_len(char const *s, char sep)
{
	int	len;

	len = 0;
	while (*s && *s != sep)
	{
		len++;
		s++;
	}
	return (len);
}

static char	*fill_word(char const *s, char c)
{
	int		lenght;
	int		i;
	char	*word;

	lenght = word_len(s, c);
	word = malloc((lenght + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **arr, int i)
{
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	if (!s)
		return (NULL);
	arr = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			arr[i] = fill_word(s, c);
			if (!arr[i])
				return (free_all(arr, i - 1), NULL);
			s += word_len(s, c);
			i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}

// int main(void)
// {
//     char **result;
//     int i;

//     result = ft_split("   hello  world  test   ", ' ');
//     if (!result)
//     {
//         printf("Error: ft_split returned NULL\n");
//         return (1);
//     }

//     i = 0;
//     while (result[i])
//     {
//         printf("Word %d: '%s'\n", i, result[i]);
//         i++;
//     }

//     // Free everything
//     i = 0;
//     while (result[i])
//     {
//         free(result[i]);
//         i++;
//     }
//     free(result);

//     return (0);
// }