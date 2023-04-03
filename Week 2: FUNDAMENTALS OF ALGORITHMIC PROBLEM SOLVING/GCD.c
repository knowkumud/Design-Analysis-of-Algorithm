//Euclid's Algorithm for GCD(m,n)
//Input: 2 numbers
// Compute gcd(m,n)

#include<stdio.h>
unsigned int EuclidGCD(unsigned int m,unsigned int n)
{
  unsigned int r;
  int opcount=0;
  while(n!=0)
  {
    opcount++;
    r=m%n;
    m=n;
    n=r;
  }
  printf("\nOperation count=%d\n", opcount);
  return m;
}
int main()
{
  unsigned int m,n;
  printf("Enter the 2 numbers:");
  scanf("%d",&m);
  scanf("%d",&n);
  printf("\n GCD ppf two numbers using Euclid's method is %d", EuclidGCD(m,n));
  return 0;
}
                                                                                                                         
