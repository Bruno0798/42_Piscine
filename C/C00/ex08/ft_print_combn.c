#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void num_dig(int *count,int n)
{
	while (*count < n - 1){
		ft_putchar('0');
	(*count)++;
	}
	(*count) = 0;
}

void check_dig(int *count, int *pos, int n)
{
	if( *count < n)
	{
  		if(*pos < 9)
		{
    		while (*pos < 9)
    			{
            		(*pos)++;
					ft_putchar(pos + '0');
            		check_dig(count, pos, n);
    			}
  		} 

		(*count)++;
		(*pos) = (*count) + 1;
		check_dig(count, pos, n);
	}
	//ft_putchar('t');
}


void ft_print_combn(int n){
    int a;
    int b;
    int* count;
    count = &a;
    *count = 0;
    int* pos;
    pos = &b;
    *pos = 0;

		//num_dig(count, n);
    check_dig(count, pos, n);
}

int main(void){
    ft_print_combn(2);
    return(0);
}