#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	// WIP
}

int	main()
{
	char []a = "Hello World!";
	ft_print_memory(a, sizeof(a));
}
