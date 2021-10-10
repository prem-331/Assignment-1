#include<stdio.h>
#define rows 2
#define columns 5

int main (void){
     int table[rows][columns] ={
         {1,2,3,4,5},
         {6,7,8,9,10}
     };
     int line [rows * columns];

     for(int i = 0; i < rows; i++){
         for(int j = 0; j < columns; j++){
             line [ i* columns + j] = table[i][j];
         }

     }
     for (int i = 0; i< rows * columns; i++){
         printf(" %2d " , line[i]);
     }
     return 0;
}