#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int num, guess, count=1;
    srand(time(0));
    num = rand()%100 + 1;

    do{
         printf("Guess the no.: \n");
         scanf("%d", &guess);

         if(num>guess){
            printf("Higher number please.\n");
            count++;
        }
        else if(guess>num){
            printf("Lower number please.\n");
            count++;
        }
        else if(num==guess){
            printf("You guessed the correct no.- %d.\n", num);
            printf("You took %d attempts.\n", count);
            
        }
    } while(num != guess);
        
        // printf("Try again: \n");
        // scanf("%d", num);
    

    return 0;
}