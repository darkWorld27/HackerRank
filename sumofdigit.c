#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, digit=0,sum=0;
    scanf("%d", &n);
    while(n!=0){
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    printf("%d",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}