/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:21:04 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/18 18:13:34 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    char *ptr = (char *)s;
    char ch = (char)c;
    
    while (n--)
    {
        if (*ptr == ch)
            return (ptr);
        ptr++;
    }
    return (NULL);
}

// Example usage∑
#include <stdio.h>  
int main() {
    const char str[] = "Hello, World!";
    char ch = 'W';
    size_t n = 13;

    char *result = (char *)ft_memchr(str, ch, n);
    if (result) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found in the first %zu bytes.\n", ch, n);
    }

    return 0;
}