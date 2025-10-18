/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:07:09 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/18 15:46:59 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t  ft_strlen(const char *s)
{
    if(s == NULL)
        return (0);
    size_t i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
// int main(int argc, char const *argv[])
// {
//     ft_strlen(NULL);
//     return 0;
// }
