#include"stdio.h"
#include"features.h"

int main (void)
{
        int s;
    
        
        printf("Input a number [ +(1), -(2), *(3), /(4), ^(5), prime factorization(6), !(7)] : ");
        scanf("%d",&s);
         
          
        switch (s){
        case 1:
                add();
                break;
        case 2:
                sub();
                break;
        case 3:
                mul();
                break;
        case 4:
                div();
                break;
        case 5:
                sqr();
                break;
        case 6:
                prime_factorization();
                break;
        case 7:
                factorial();
                break;        
        }
    
        
}
