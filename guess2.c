
#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 

int main(){
    srand(time(NULL));
    
    //use rand() to generate a random number between 1-100	
    int num = (rand() % (100 -1))+1;
    int guess, count = 1;
    
    printf("Ok, I am ready!\nEnter your guess: ");
    scanf("%d", &guess);
    
    while(guess != num){
        if(guess > num){
            printf("Go Lower!\nEnter your guess: ");
        }else if(guess < num){
            printf("Go Higer!\nEnter your guess: ");
        }
        scanf("%d", &guess);
        ++count;
    }
    printf("You got it in %d tries!\n", count);
    return 0;
}
