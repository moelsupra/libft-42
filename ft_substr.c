/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:57:41 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/24 18:53:38 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{

    char *ptr1;
    char *ptr;

    if (s == NULL || (long)start < 0)
        return NULL;
    ptr =  malloc(len + 1);
    if (ptr == NULL)
        return (NULL);
    ptr1 = ptr;
    

    while (s[start] != '\0' && len--)
    {
        *ptr++ = s[start];
        start++;
    }
    *ptr = '\0';
    return (ptr1);
}

// int main()
// {
//     char stt[] = "Hello 1337\0";
//     char *s1 = ft_substr(stt, 6, 3);
//     printf("%s \n", s1);
//     return 0;
// }

