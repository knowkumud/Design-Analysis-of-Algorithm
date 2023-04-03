#include <stdio.h>
#include <stdlib.h>

int opcount = 0; // variable to count how many times the basic operation executes. 

int gcd(int m, int n) {
    int t = m > n ? n: m;
  
    while(m % t != 0 || n % t != 0) {
      opcount++;
      t--;
    }

    return t;
}

int main() {
	int i;
	int a, b;

    printf("Enter the two numbers whose GCD has to be calculated : \n");
	scanf("%d%d", &a, &b);

	int g = gcd(a, b);
    printf("\nOperation count= %d\n", opcount);   
	printf("GCD = %d\n", g);
}
