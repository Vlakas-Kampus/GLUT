#include <windows.h>
#include <stdio.h> // Header File For Standard Input/Output
#include <gl\gl.h> // Header File For The OpenGL32 Library
#include <gl\glu.h> // Header File For The GLu32 Library
#include <gl\glaux.h> // Header File For The Glaux Library
#include "bmp.h"

AUX_RGBImageRec *LoadBMP(char *test) // Loads A Bitmap Image
{
       FILE *File=NULL; // File Handle
       if (!test)
       // Make Sure A Filename Was Given
       {
       return NULL;
       // If Not Return NULL
       }
       File=fopen(test,"r"); // Check To See If The File Exists
       if (File)
       // Does The File Exist?
       {
       fclose(File);
       // Close The Handle
       return LoadBMP(test); // Load The Bitmap And Return A Pointer
       }
       return NULL;
       // If Load Failed Return NULL
}