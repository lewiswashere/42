/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgardner <lgardner@student.42.us.org       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 23:21:13 by lgardner          #+#    #+#             */
/*   Updated: 2017/04/06 23:21:33 by lgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_is_negative(void) {

  char string[] = ("Enter an integer: ");
  int i=0;
  int input;
  int negative = 'N';
  int positive = 'P';

  while(string[i]!='\0')
    {
      putchar(string[i]);
      i++;
    }
  scanf("%d", &input);

  if (input < 0) {
    putchar(negative);
  } else {
    putchar(positive);
  }
}

int main() {
  ft_is_negative();
  return 0;
}
