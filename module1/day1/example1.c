#include <stdio.h>

void biggest(int a, int b);

int main() {
    int a;
    int b;
    
    printf("Enter a and b values: ");
    scanf("%d %d", &a, &b);
    
    biggest(a, b);
    
    return 0;
}

void biggest(int a, int b) {
    if(a > b)
    {

    printf("a has the biggest number\n");
    }
    else if (b > a)
    {
        printf("b has the biggest number\n");
    }
    else
    {
        printf("Both a and b are number\n");
    }
}






