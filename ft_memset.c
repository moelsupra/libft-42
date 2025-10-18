/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:56:40 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/18 13:20:21 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    // unsigned char uc = (unsigned char)c;
    unsigned char *pointer =(unsigned char*)b;
    while(len)
        pointer[--len] = c;
    return (b);
}


int main () {

    // int s = 0;
    // // memset(&s, 0000010100111001, 4);
    // printf("&s: %X\n", &s);
    // ft_memset(&s, 0, 4);
    // ft_memset(&s, 5, 2);
    // ft_memset(&s, 57, 1);
    char s[5];
    // memset(&s, 0000010100111001, 4);
    ft_memset(&s, '7', 4);
    ft_memset(&s, '3', 3);
    ft_memset(&s, '3', 2);
    ft_memset(&s, '1', 1);
    printf("%s\n", s);
    // ft_memset(&s, 0, 4);
    // ft_memset(&s, 1337, 4);
    // printf("%d\n",memset(&s, 257, 4));
    // printf("%d\n",ft_memset(&s, 257, 4));
// memset(&s, 0b01010011, 4);
// memset(((char*)&s) + 1, 0b00111001, 1);
}  
///|0000 0000|0000 0000|0000 0000|0000 0000

// 0000 0101 0011 1001