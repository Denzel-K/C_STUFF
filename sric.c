#include <stdio.h>
#include <stdlib.h>

void open_menu();
void reverse_num();
void ages_array_ops();
void success(int optNo);

int main(){
  //Welcoming user to application.
  printf("        |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|        \n");
  printf("        |       <>-<>-<>  S.R.I.C  <>-<>-<>        |        \n");
  printf("_ _ _ _ |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~| _ _ _ _\n");
  printf("    <>  Simple Real-life-situations Implemented in C  <>    \n");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

  printf("Before we start, please enter your name.\n");

  char name[30];
  scanf("%s", name);

  printf("\n");
  printf("<=> <=>  Hello %s, welcome :)  <=> <=>\n\n", name);

  open_menu();

  //ages_array_ops();

  return 0;
}

//Show success message
void success(int optNo){
  printf("|-------------------------------------------|\n");
  printf("|   =#=#=#=  Operation %d complete  =#=#=#=  |\n", optNo);
  printf("|-------------------------------------------|\n\n");
}

//Open operation menu
void open_menu(){
  printf("________________                            _________________\n");
  printf("|                What would you like to do?                 |\n");
  printf("|_______________|_ _ _ _ _ _    _ _ _ _ _ _|________________|\n");
  printf("|                                                           |\n");
  printf("|  1. Reverse a number.                                     |\n");
  printf("|  2. Compute lowest, highest and avg age from dataset.     |\n");
  printf("|                                                           |\n");
  printf("|  0. EXIT                                                  |\n");
  printf("|___________________________________________________________|\n");
  printf("\n");

  int opt;

  scanf("%d", &opt);

  switch (opt){
    case 0:
      printf("|--------------------------------------------------|\n");
      printf("|     =0=0=0=   Program has stopped   =0=0=0=      |\n");
      printf("|--------------------------------------------------|\n\n");
      exit(0);
      break;

    case 1:
      reverse_num();
      break;

    case 2:
      ages_array_ops();
      break;

    default:
      printf("|-----------------------------------------------------|\n");
      printf("|   =X=X=X=  INVALID (Choose given options)  =X=X=X=  |\n");
      printf("|-----------------------------------------------------|\n\n");
      open_menu();
      break;
  }
}

//Reverse a number
void reverse_num(){
  int initNum;

  printf(" -<>- Executing operation 1 -<>- \n");
  printf("---------------------------------\n\n");

  printf("~ Enter number to reverse: \n");
  printf("  ---> Hint: At least 2 or more digits: \n");

  scanf("%d", &initNum);

  int storeInitNum = initNum;

  int revNum = 0;

  while(storeInitNum){
    revNum = revNum * 10 + storeInitNum % 10;

    storeInitNum /= 10;
  }
  printf("\n");
  printf("-> Initial number: %d\n", initNum);
  printf("-> Reversed number: %d\n\n", revNum);

  success(1);

  open_menu();
}

//Simple array operation(get lowest, highest, and average age)
void ages_array_ops(){
  int ages[] = {12, 34, 24, 19, 27, 30, 22, 56, 2, 9, 47, 18, 96};
  int agesLength = sizeof(ages) / sizeof(ages[0]);

  int ageSum = 0;
  int lowestAge = ages[0];
  int highestAge = ages[0];

  printf(" -<>- Executing operation 2 -<>- \n");
  printf("---------------------------------\n\n");

  printf("Ages sample set: [");
  for(int i = 0; i < agesLength; i++){
    ageSum += ages[i];
    printf("%d, ", ages[i]);

    if(lowestAge > ages[i]){
      lowestAge = ages[i];
    }

    if(highestAge < ages[i]){
      highestAge = ages[i];
    }
  }
  printf("]\n\n");

  float ageAverage = (float)ageSum / agesLength;
  printf("-> Average age: %.2f\n", ageAverage);
  printf("-> Lowest age: %d\n", lowestAge);
  printf("-> Highest age: %d\n\n", highestAge);

  success(2);

  open_menu();
};
