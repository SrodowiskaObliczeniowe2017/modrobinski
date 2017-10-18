#include <stdio.h>

int main() 
{
   int buff = 0;
   int i,j,rows,col;
   int prew = 0;
   

  FILE* file = fopen ("Dobry", "r");

  fscanf (file, "%d", &buff);    
  rows = buff;  

  fscanf (file, "%d", &buff); 
  col = buff;

  int Tab [col][rows];



  fscanf (file, "%d", &buff); 
  printf ("%d ", buff);
  
           


   fclose (file);  



   return 0;
}
