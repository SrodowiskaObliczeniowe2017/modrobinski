#include <stdio.h>

int main() 
{
   FILE *fp;
   char buff[255];
   int i;

   fp = fopen("Dobry", "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );

   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );
   
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );

   for( i=0; i<rows; i=i+1)
   {
	for ( j=0;j<col;j=j+1)
	{

	}
   }

   fclose(fp);


   return 0;
}
