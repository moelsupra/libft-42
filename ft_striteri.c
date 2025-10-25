/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelamma <moelamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 20:35:02 by moelamma          #+#    #+#             */
/*   Updated: 2025/10/25 21:50:37 by moelamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>    // for open()
#include <unistd.h>   // for write(), close()
#include <stdio.h>    // for perror()

void change_case(unsigned int i, char *ptr)
{
	if((*ptr >= 'a' && *ptr < 'z') || (*ptr >= 'A' && *ptr < 'Z'))
		*ptr += 1;
	else if(*ptr == 'Z'|| *ptr == 'z')
		*ptr -= 25;
	else 
		i++;
}
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
int main()
{
	int fd;
	fd = open("example.txt", O_CREAT | O_WRONLY , 0644);
	   if (fd == -1) {
        perror("open");
        return 1;
    }
	char c[] = "Hello, r4r!\n";
	ft_striteri(c, change_case);

    write(fd, &c, 14);
    close(fd);
	// printf("%s\n", c);
}
