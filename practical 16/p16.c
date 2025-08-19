#include <stdio.h>
int main()
{
int matchstick=21;
int user_pick,com_pick;
printf("welcome to the matchstick game");
printf("there are 21 matchsticks and one by one you have to pick");
printf("pick 1,2,3 or 4 matchpick on your turn ");

while(matchstick>0){
printf("remaining matchsticks are : %d\n",matchstick);
printf("it is your turn to choose matchstick ");
if (user_pick>matchstick||user_pick<0||user_pick>4){
print("invalid input! please enter the number between 1 and 4");
matchstick-=user_pick;

printf("computer turn");
com_pick=5-user_pick;
matchstick -= com_pick;
printf("you are forced to pick the last matchstick\n");
printf("you lose the game \n");

}
}
return0;
}
