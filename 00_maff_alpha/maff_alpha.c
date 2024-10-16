/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 18:16:43 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/20 18:20:44 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)

{
	char	letter;
	int		counter;
	char	uppercase;

	letter = 'a';
	counter = 1;
	while (letter <= 'z')
	{
		if (counter % 2 == 0)
		{
			uppercase = letter - 32;
			write (1, &uppercase, 1);
		}
		else
		{
			write (1, &letter, 1);			
		}
		counter++;
		letter++;
	}
}