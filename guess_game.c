#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){
    int random,guess;
    int no_of_guess = 0;
    srand(time(NULL));
    printf("Welcome to the world of Guessing game!\n");
  
    random = rand() % 100 + 1;
    

    do{
        printf("\nplease enter a guess between(1-100):");
    scanf("%d",&guess);
    no_of_guess++;

    if (guess < random) {
        printf("guess a larger number\n");
    } else if (guess> random) {
        printf("guess a smaller number\n");
    }else {
        printf("congratulations! you have guessed the right number in %d attempts\n", no_of_guess);

    }
    } while (guess != random);

    printf("\n bye bye, Thanks for Playing the game!\n");
    printf("\n Developed By Inder Sharma");

    return 0;
}