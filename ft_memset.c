/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:56:40 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/14 21:36:49 by moelamma         ###   ########.fr       */
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

    // char s = '1';
    // int q = 4;
    // char w = '8';
    int s = 12;
    int* n = memset(&s, 257, 4);
    printf("%d\n", n[0]);
    printf("%d\n",memset(&s, 257, 4));
    // printf("%d\n",ft_memset(&s, 257, 4));
}