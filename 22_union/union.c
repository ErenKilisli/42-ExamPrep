/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:02:30 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/22 17:51:50 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkstr1(char	*str1, char str2)

{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] == str2)
			return (0);
		i++;
	}
	return (1);
}

int	iswritenbefore(char *str, char a, int i)

{
	int	j;

	j = 0;
	while (j < i)
	{
		if(str[j] == a)
			return (0);
		j++;
	}
	return (1);
}

int main (int argc, char **argv)

{
	int	i;

	i = 0;
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	else
	{
		while (argv[1][i] != '\0')
		{
			if (iswritenbefore(argv[1], argv[1][i], i) == 1)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			if ((iswritenbefore(argv[2], argv[2][i], i) == 1) && (checkstr1(argv[1], argv[2][i]) == 1))
				write(1, &argv[2][i], 1);
			i++;
		}
		
	}
}