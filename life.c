#include <stdio.h>

#define HEIGHT 25

#define WIDTH 25



void clearScreen(char tableA[HEIGHT][WIDTH], char tableB[HEIGHT][WIDTH])

{

   int height;
     int width;



   for (height = 0; height < HEIGHT; height++) {
      for (width = 0; height < HEIGHT; height++)

         tableA[height][width] = 0;

         tableB[height][width] = 0;

   }

   for (height = 0; height < HEIGHT; height++) {

      printf("\n");

      for (width = 0; width < WIDTH; width++)

            printf("-");

   }

   printf("\n");

}



void askUser(char tableA[HEIGHT][WIDTH])

{

   int i;

   int n;

   int height, width;



   printf("Enter the amount of initial organisms: ");

   scanf("%d", &n);


   for (i = 0; i < n; i++) {

      printf("Enter dimensions (x y) where organism %d will live: ", i + 1);
     scanf("%d%d", &height, &width);

      tableA[height][width] = 1;

   }

}



void calculate(char tableA[HEIGHT][WIDTH], char tableB[HEIGHT][WIDTH])

{

   int neighbor;

   int height;

   int width;



   for (height = 0; height < HEIGHT; height++) {

      for (width = 0; width < WIDTH; width++)

         neighbor = 0;

         if (tableA[height - 1][width - 1] == 1) {

            neighbor++;

         }

         if (tableA[height - 1][width] == 1) {

            neighbor++;

         }

         if (tableA[height - 1][width + 1] == 1) {

            neighbor++;

         }

         if (tableA[height][width - 1] == 1) {

            neighbor++;

         }

         if (tableA[height][width + 1] == 1) {

            neighbor++;

         }

         if (tableA[height + 1][width - 1] == 1) {

            neighbor++;

         }

         if (tableA[height + 1][width] == 1) {

            neighbor++;

         }

         if (tableA[height + 1][width + 1] == 1) {

            neighbor++;

         }

         if (tableA[height][width] == 1 && neighbor < 2) {

            tableB[height][width] = 0;

         }

         else if (tableA[height][width] == 1 && neighbor > 3) {

            tableB[height][width] = 0;

         }

         else if (tableA[height][width] == 1 && (neighbor == 2 || neighbor == 3)) {

            tableB[height][width] = 1;

         }

         else if (tableA[height][width] == 0 && neighbor == 3) {

            tableB[height][width] = 1;

         }

   }

}



void swap(char tableA[HEIGHT][WIDTH], char tableB[HEIGHT][WIDTH])

{

   int height;

   int width;



   for (height = 0; height < HEIGHT; height++) {

      for (width = 0; width < WIDTH; width++)

         tableA[height][width] = tableB[height][width];

   }

}



void printTable(char tableA[HEIGHT][WIDTH])

{

   int height;

   int width;



   for (height = 0; height < HEIGHT; height++) {

      printf("\n");

      for (width = 0; width < WIDTH; width++)

         if (tableA[height][width] == 1) {

            printf("X");

         }

         else {

            printf("-");

         }

   }

   printf("\n");

}



int main(void)

{

   char tableA[HEIGHT][WIDTH];

   char tableB[HEIGHT][WIDTH];

   char end;



   end = 'w';

   clearScreen(tableA, tableB);

   askUser(tableA);



   while (end != 'q') {

      calculate(tableA, tableB);

      swap(tableA, tableB);

      printTable(tableA);



      printf("Press q to quit or 1 to continue: ");

      scanf(" %c", &end);

   }

   return 0;

}
