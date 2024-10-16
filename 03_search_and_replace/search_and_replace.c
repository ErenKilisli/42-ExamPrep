/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 20:56:38 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/21 11:31:23 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)

{
	if (argc != 4)
	{
		write (1, "\n", 1);
		return (0);
	}
	else
	{
		if (argv[2][1] != '\0' || argv[3][1] != '\0')
		{
			write (1, "\n", 1);
			return (0);
		}
		else
		{
			int i = 0;
			while (argv[1][i] != '\0')
			{
				if (argv[1][i] == argv[2][0])
					argv[1][i] = argv[3][0];
				write (1, &argv[1][i], 1);
				i++;
			}
		}
	}
}