/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:55:56 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/17 23:09:06 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
 #include <string.h>
 
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    if (dst == NULL && src == NULL)
        return (NULL);
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
    while (n--)
    {
        *d++ = *s++;
    }
    return (dst);    
}

int main () {

    char src[] = "Hello, World!";
    char dest[20];

    //ft_memcpy(dest, src, 13);
    memcpy(dest, src, 13);
    // Now dest should contain "Hello, World!"
    printf("Copied string: %s\n", dest);
    return 0;
}