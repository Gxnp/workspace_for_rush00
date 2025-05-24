#include <unistd.h>

void	check(int w, int h, int x, int y);

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	w;
	int	h;

	h = 0;
	while (h < y)
	{
		w = 0;
		while (w < x)
		{
			check(w, h, x, y);
			w++;
		}
		write(1, "\n", 2);
		h++;
	}
}
void	check(int w, int h, int x, int y)
{
	if (h == 0)
	{
		if (w == 0)
			ft_putchar('A');
		else if (w == x -1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (h == y - 1)
	{
		if (w == 0)
			ft_putchar('C');
		else if (w == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (w == 0 || w == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}