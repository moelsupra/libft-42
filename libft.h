/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:42:18 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/25 18:47:18 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_isdigit(int c);
int ft_isalpha(int c);
size_t  ft_strlen(const char *s);
void    ft_bzero(void *s, size_t n);
char   *ft_strdup(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);
int    ft_tolower(int c);
int	ft_toupper(int c);

#endif