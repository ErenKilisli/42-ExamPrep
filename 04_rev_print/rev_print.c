/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:37:16 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/21 11:53:57 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)

{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	else
	{
		int strlen = 0;
		int i = 0;
		int n;
		char temp;
		while (argv[1][strlen] != '\0')
			strlen++;
		n = strlen - 1;
		while (i < strlen / 2)
		{
			temp = argv[1][i];
			argv[1][i] = argv[1][n - i];
			argv[1][n - i] = temp;
			i++;
		}
		i = 0;
		while (argv[1][i] != '\0')
		{
			write (1, &argv[1][i], 1);
			i++;
		}
		
	}
}
