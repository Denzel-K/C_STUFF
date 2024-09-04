#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *fPtr;

  // >> create a file
  //fPtr = fopen("filename.txt", "w");

  // >> Open file in append mode
  //fPtr = fopen("filename.txt", "a");

  // >> write to the file
  //fprintf(fPtr, "Woza! Rada ni gani...");

  // >> Append some text
  //fprintf(fPtr, "\nItakuwajee ?!!");

  // >> Read file
   ///*
  char fileContent[200];

  fPtr = fopen("filename.txt", "r");

  if (fPtr == NULL){
    printf("Unable to open the file! \n");
  }

  while(fgets(fileContent, 100, fPtr)){
    printf("%s", fileContent);
  }
  //*/

  
  //close the file
  fclose(fPtr);

  return  0;
}