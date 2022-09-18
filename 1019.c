#include <stdio.h>
int main ()
{

	int N;
	int h,m,s;

	scanf("%d",&N);

	h = (N/60)/60;

	m = (N - ((h*60)*60))/60;

	s = N - (((h*60)*60) + (m*60));

	printf("%d:%d:%d\n",h,m,s);

}
