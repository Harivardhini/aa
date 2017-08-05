#include <stdio.h>
 
int main(void) {
	int a;
 
    printf("Enter an integer: ");
    scanf("%d", &a);
 
    if(a % 2 == 0)
        printf("%d is even.");
    else
        printf("%d is odd.");
 
    return 0;
}
 
 
