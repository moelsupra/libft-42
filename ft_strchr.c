/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:06:50 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/18 15:34:12 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//s="abecdefgh" c='e' => "ecdefgh"

#include <stdio.h>
char *ft_strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if (*s == (char)c)
        return ((char *)s);
    return (0);
    
    
}


int main() {
  char myStr[] = "Hello Worldw. fjgfdfWgghjkl";
  char *myPtr = ft_strchr(myStr, 'f');
  if (myPtr != NULL) {
    printf("%s", myPtr);
  }
  return 0;
}