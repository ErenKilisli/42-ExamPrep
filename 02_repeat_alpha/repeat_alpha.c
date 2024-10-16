/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:53:30 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/21 11:47:10 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void repeat_alpha(char *str , int *i)
{
	int	n;

	n = 0;
	if (str[*i] >= 'a' && str[*i] <= 'z')
	{
		n = str[*i] - 96;
		while (n > 0)
		{
			write (1, &str[*i], 1);
			n--;
		}
	}
	if(str[*i] >= 'A' && str[*i] <= 'Z')
	{
		n = str[*i] - 64;
		while (n > 0)
		{
			write (1, &str[*i], 1);
			n--;
		}
	}
}

int main(int argc, char **argv)

{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			{
				repeat_alpha(argv[1] , &i);
				i++;
			}
			else
			{
				write (1, &argv[1][i], 1);
				i++;
			}
		}
		write (1, "\n", 1);
		return (0);
	}
}