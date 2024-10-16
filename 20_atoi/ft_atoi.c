/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:36:41 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/22 15:48:53 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)

{
	int	i;
	int	mcounter;
	int retrn;

	i = 0;
	mcounter = 0;
	retrn = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			mcounter++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		retrn = (retrn * 10) + (str[i] - '0');
		i++;
	}
	return (retrn);
}

// #include <stdio.h>

// int main (void)

// {
// 	printf("%d\n", ft_atoi("   -123"));
// 	printf("%d\n", ft_atoi("32"));
// 	printf("%d\n", ft_atoi("   +456")); 
//     printf("%d\n", ft_atoi("   789abc"));
// }