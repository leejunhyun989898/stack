#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

typedef int element;
element stack[MAX];
int top = -1;

int is_empty()
{
	return(top == -1);
}

int is_full()
{
	return (top == (MAX - 1));
}

void push(element item)
{
	if (is_full())
	{
		fprintf(stderr, "½ºÅÃ °¡µæ Âü\n");
		return;
	}
	else stack[++top] = item;
}

element pop(element i)
{
	if (is_empty())
	{
		fprintf(stderr,"½ºÅÃ ºö\n[%d] pop: %d\n",i,top);
		return 0;
	}
	else {
		printf("[%d] pop : %d\n", i, stack[top]);
		return stack[top--];
	}
}




int main(void)
{
	srand(time(NULL));
	int rand_num;
	for (int i = 1; i <= 30; i++)
	{
		rand_num = rand() % 100 + 1;
		if (rand_num % 2 == 0)
		{
			push(rand_num);
			printf("[%d] push : %d\n",i, rand_num );
			
		}
		else {
			pop(i);
		}
	}	

	return 0;
}
