#include <stdio.h>
int main()
{
  int x,y,z;

  scanf("%d/%d/%d",&x,&y,&z);

  if(x<10&&y<10&&z<10)
  {
    printf("0%d/0%d/0%d\n",y,x,z);
    printf("0%d/0%d/0%d\n",z,y,x);
    printf("0%d-0%d-0%d\n",x,y,z);
  }
  else if(x<10&&y<10)
  {
    printf("0%d/0%d/%d\n",y,x,z);
    printf("%d/0%d/0%d\n",z,y,x);
    printf("0%d-0%d-%d\n",x,y,z);
  }
  else if(y<10&&z<10)
  {
    printf("0%d/%d/0%d\n",y,x,z);
    printf("0%d/0%d/%d\n",z,y,x);
    printf("%d-0%d-0%d\n",x,y,z);
  }
  else if(x<10&&z<10)
  {
    printf("%d/0%d/0%d\n",y,x,z);
    printf("0%d/%d/0%d\n",z,y,x);
    printf("0%d-%d-0%d\n",x,y,z);
  }
  else if(x<10)
  {
    printf("%d/0%d/%d\n",y,x,z);
    printf("%d/%d/0%d\n",z,y,x);
    printf("0%d-%d-%d\n",x,y,z);
  }
  else if(y<10)
  {
    printf("0%d/%d/%d\n",y,x,z);
    printf("%d/0%d/%d\n",z,y,x);
    printf("%d-0%d-%d\n",x,y,z);
  }
  else if(z<10)
    {
      printf("%d/%d/0%d\n",y,x,z);
      printf("0%d/%d/%d\n",z,y,x);
      printf("%d-%d-0%d\n",x,y,z);
    }
    else
    {
      printf("%d/%d/%d\n",y,x,z);
      printf("%d/%d/%d\n",z,y,x);
      printf("%d-%d-%d\n",x,y,z);
    }


    return 0;
}
