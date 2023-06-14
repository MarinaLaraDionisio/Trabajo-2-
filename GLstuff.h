
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
 

#include <windows.h> //Solo necesario para Windows. Para Linux ponga esta línea en comentario y deshaga el comentario de abajo
#include "glut.h"

/* Para linux
#  include <GL/gl.h>
#  include <GL/glu.h>
#  include <GL/glut.h>
*/

 
#define  ANCHO 800
#define ALTO 800

#define ESC 27

// Prototipos de funciones
GLuint LoadTexture(int, int, const char * filename );

void displaytext(GLuint Thetexture);

void init_GL_stuff();
 
