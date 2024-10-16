/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 20:26:38 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/22 20:29:31 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_recursive(unsigned int n)

{
	if (n >= 10)
		ft_putnbr_recursive(n / 10);
	char a = '0' + (n % 10);
	write (1, &a,1);
}

void ft_putnbr(int nbr)

{
	unsigned int n;

	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = -nbr;
	}
	else
		n = nbr;
	ft_putnbr_recursive(n);
}