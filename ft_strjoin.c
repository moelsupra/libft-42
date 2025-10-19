/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:30:41 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/19 18:40:55 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 01:18:08 by ataoufik          #+#    #+#             */
/*   Updated: 2023/11/12 15:56:54 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*p;
	int		len;
	
	i = 0;
	j = 0;
	if (s1==NULL && s2==NULL)
		return (NULL);
	if(s1==NULL)
		return (ft_strdup(s2));
	if(s2==NULL)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	while (s1[i] != '\0' && s1 != NULL)
		p[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0' && s2 != NULL)
		p[j++] = s2[i++];
	p[j] = '\0';
	return (p);
}

int main()
{
    char str1[] = "hello  bbbbbbb hello bbbbbbb hello";
    char str2[] = "leho";
	printf("result:");
    char *result = ft_strjoin(str1, str2);
	printf("%s\n", result);
    return 0;
}