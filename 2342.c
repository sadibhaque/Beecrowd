#include <stdio.h>
int main ()
{

	int N;
	int P,Q;
	char R;

	scanf("%d",&N);

	scanf("%d %c %d",&P,&R,&Q);

	if(R == '+')
	{
		if(P+Q <= N)
			printf("OK\n");

		else
			printf("OVERFLOW\n");
	}

	else 
	{
		if(P*Q <= N)
			printf("OK\n");
		else
			printf("OVERFLOW\n");
	}
	
	
}
