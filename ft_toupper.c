/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariling <ariling@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:06:46 by ariling           #+#    #+#             */
/*   Updated: 2024/05/27 17:16:41 by ariling          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

// int main(void)
// {
// 	int c = 'a';
// 	int result = ft_toupper(c);
// 	char result_buildin = toupper(c);
// 	printf("%c buildin : %c\n", result, result_buildin);
// }
