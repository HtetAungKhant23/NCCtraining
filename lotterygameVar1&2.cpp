//
// Created by fatfat on 10/29/2022.
//
// version 1
// version 2 is adding random number by using srand()

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int gamePage();
int gameRule();
int inGame();
int betMoney();
int betSure();
int userLuckyNumber();
int playAgain();

int currentId=0;
int mainMoney=0;
int betAmount=0;
int luckyNumber=0;

int round=1;
time_t t;


int mainMenu(){
    int option=0;
    printf("Press 1 to login\nPress 2 to read our game rules\nPress 3 to quit : ");
    scanf("%d",&option);

    if(option == 1){
        gamePage();
    } else if(option == 2){
        gameRule();
    } else if(option == 3){
        exit(1);
    } else{
        printf("Invalid input\n");
        mainMenu();
    }
}

int gamePage(){
    int age=0;
    printf("Enter your age : ");
    scanf("%d",&age);

    if(age < 18){
        int comeBackAge=0;
        comeBackAge = 18 - age;
        printf("Sorry! You can't play in our game\n");
        if(comeBackAge == 1){
            printf("Please come back after %d year from now",comeBackAge);
        } else{
            printf("Please come back after %d years from now",comeBackAge);
        }
        exit(1);
    } else{
        int gameId=0;
        printf("Enter your game id : ");
        scanf("%d",&gameId);
        currentId = gameId;
        inGame();
    }
}

int inGame(){
    int inGameMoney=0;
    printf("Enter amount of your ingame money to buy : ");
    scanf("%d",&inGameMoney);
    if(inGameMoney < 999){
        printf("Sorry! Under minimum amount of ingame money\n");
        inGame();
    } else{
        printf("Buying ingame money process is successfully\n");
        printf("Your current money = %d\n",inGameMoney);
        mainMoney = inGameMoney;
        // to add bet money fun or choice lucky number fun
        betMoney();
    }
}

int betMoney(){
    if(round == 1) {
        printf("Enter amount of bet money for %dst round : ", round);
        scanf("%d",&betAmount);
        betSure();
    } else if(round == 2){
        printf("Enter amount of bet money for %dnd round : ", round);
        scanf("%d",&betAmount);
        betSure();
    } else if(round == 3){
        printf("Enter amount of bet money for %drd round : ", round);
        scanf("%d",&betAmount);
        betSure();
    } else{
        printf("Enter amount of bet money for %dth round : ", round);
        scanf("%d",&betAmount);
        betSure();
    }
}

int betSure(){
    int betOption=0;
    if(betAmount < 100){
        printf("Sorry! Your bet money is under minimum amount\n");
        betMoney();
    } else if(betAmount > 500){
        printf("Are you sure for this amount to bet ?\nPress 1 to continue\nPress 2 to cancel : ");
        scanf("%d",&betOption);
        if(betOption == 1){
            userLuckyNumber();
        } else if(betOption == 2){
            betMoney();
        } else{
            printf("Invalid input\n");
            betMoney();
        }
    } else if(betAmount > mainMoney){
        printf("Sorry! Your bet amount is greater than your all of ingame money\n");
        betMoney();
    } else{
        userLuckyNumber();
    }
}

int userLuckyNumber(){

    int uluckyNum=0;
    int winAmount=0;
//    printf("your main money = %d\n",mainMoney);

    printf("Enter your lucky number : ");
    scanf("%d",&uluckyNum);

    srand((unsigned) time(&t) );
    luckyNumber=100+(rand()%899);

//    srand(time(NULL));
//    luckyNumber=100+(rand()%899);

    if(uluckyNum == luckyNumber){
        mainMoney = mainMoney - betAmount;
        printf("your bet money = %d , your main money left = %d\n",betAmount,mainMoney);

        winAmount = 10*betAmount;
        printf("Congratulation! You win this round , lucky number is %d\n",luckyNumber);
        printf("You win 10times of your bet money (%d) = %d\n",betAmount,winAmount);
        mainMoney = mainMoney + winAmount;
        printf("Your current ingame money = %d\n",mainMoney);
        playAgain();
    }else if(uluckyNum < 100){
        printf("Your lucky number is out of range from our lucky game number\n");
        printf("main money = %d\n",mainMoney);
        userLuckyNumber();
    } else if(uluckyNum > 999){
        printf("Your lucky number is out of range from our lucky game number\n");
        printf("main money = %d\n",mainMoney);
        userLuckyNumber();
    } else{
        mainMoney = mainMoney - betAmount;
        printf("your bet money = %d , your main money left = %d\n",betAmount,mainMoney);

        printf("Sorry! you lose this round\nLucky Number of this round is %d\nYour left ingame money = %d\nPlease play again to win in next round\n",luckyNumber,mainMoney);
        playAgain();
    }
}

int playAgain(){
    int playOption=0;
    printf("Press 1 to play again\nPress 2 to check your ingame money\nPress 3 to quit : ");
    scanf("%d",&playOption);
    if(playOption == 1){
        round++;
        betMoney();
    } else if(playOption == 2){
        printf("Your current ingame money = %d",mainMoney);
        playAgain();
    } else if(playOption == 3){
        printf("Thanks for playing in our game !!");
        exit(1);
    }else{
        printf("Invalid input\n");
        playAgain();
    }
}

int gameRule(){

    printf("1. Your age is need to over 18 to play our game\n");
    printf("2. You need to choose your lucky number from 100 to 999\n");
    printf("3. You need to buy minimum amount (1000$) of ingame money\n");
    printf("4. You can play with minimum amount (100$) for each round\n");
    printf("5. Read the rules carefully\n");
    printf("6. Here you go, Welcome again!!\n");
    mainMenu();
}



int main(){

    printf("Welcome from our 3 numbers game\n");
    mainMenu();

    return 0;
}
