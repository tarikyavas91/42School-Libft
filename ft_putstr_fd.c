/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyavas <tyavas@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:14:17 by tyavas            #+#    #+#             */
/*   Updated: 2022/09/10 18:14:17 by tyavas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/* int	ft_strlen(const char *str);
#include <stdio.h>
int	main(void)
{
	int f = open("s1.txt", 1);
	if (f == -1)
		printf("Dosya açılamadı lütfen s1.txt oluşturunuz.");
	else
		printf("Dosya açıldı lütfen s1.txt içersine bakınız.");
	char s[]= "Ahmet";
	ft_putstr_fd(s, f);
}
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
} */
