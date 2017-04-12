//In the name of God
#include <stdio.h>

#define abs(x) (((x)>0)?(x):(-(x)))
#define int long long

main()
{
  int n;
  scanf("%lld",&n);
  int i;
  int a=0,b=0;
  for(i=0;i<n;++i)
    {
      int a1,g1;
      scanf("%lld%lld",&a1,&g1);
      if(abs(a+a1-b)<=500)
    {
      a+=a1;
      printf("A");
    }
      else
    {
      b+=g1;
      printf("G");
    }
    }
  printf("\n");
  return 0;
}
