/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:48:40 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/22 15:11:24 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	putnbr(int nbr)

{
	char digit;
	
	if (nbr >= 10)
		putnbr(nbr / 10);
	digit = '0' + (nbr % 10);
	write (1, &digit, 1);
}

int main (void)

{
	int nbr;
	char digit;

	nbr = 1;
	while (nbr <= 9)
	{
		if (nbr % 3 == 0)
			write (1, "fizz", 4);
		else if (nbr % 5 == 0)
			write (1, "buzz", 4);
		else
		{
			digit = '0' + nbr;
			write (1, &digit, 1);
		}
		write (1, "\n", 1);
		nbr++;
	}
	while (nbr >= 10 && nbr <= 100)
	{
		if ((nbr % 3 == 0) && (nbr % 5 == 0))
			write (1, "fizzbuzz", 8);		
		if (nbr % 3 == 0)
			write (1, "fizz", 4);
		else if (nbr % 5 == 0)
			write (1, "buzz", 4);
		else
			putnbr(nbr);
		write (1, "\n", 1);
		nbr++;
	}
	return (0);
}