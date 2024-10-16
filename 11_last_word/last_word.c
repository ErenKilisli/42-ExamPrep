/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:57:39 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/21 20:55:12 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)

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
			i++;
		i--;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i--;
		}
		while (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
		{
			i--;
		}
		i++;
		while (argv[1][i] != '\0' && !(argv[1][i] == ' ' && argv[1][i] == '\t'))
		{
			write (1, &argv[1][i], 1);
			i++;
		}
		return (0);
	}
}