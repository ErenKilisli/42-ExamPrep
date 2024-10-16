/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:13:02 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/21 19:55:50 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int checkwrite(char a, char *str1, int i)

{
	int j;

	j = 0;
	while (j < i)
	{
		if(str1[j] == a)
			return (0);
		j++;
	}
	return (1);
}

int checkstr2(char str1, char *str2)

{
	int i;

	i = 0;
	while (str2[i] != '\0')
	{
		if (str2[i] == str1)
			return (1);
		i++;
	}
	return (0);
}

int main(int argc, char **argv)

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
		while(argv[1][i] != '\0')
		{
			if (checkstr2(argv[1][i], argv[2]) == 1 && checkwrite(argv[1][i], argv[1], i) == 1)
			{
				write (1, &argv[1][i], 1);
			}
			i++;	
		}
		write (1, "\n", 1);
		return 0;
	}

}