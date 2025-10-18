/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:24:37 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/17 21:53:48 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


void ft_bzero(void *s, size_t n)
{
    size_t i;
    
    unsigned char *pointer = (unsigned char*)s;
    i = 0;
    
    while (i < n)
    {
        pointer[i] = 0;
        i++;
    }
}
