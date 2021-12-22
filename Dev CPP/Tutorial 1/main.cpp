#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <GL/glut.h>
#include <iostream>

void persegi(){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
		glVertex2f(-0.5, -0.5);
		glVertex2f(-0.5, 0.5);
		glVertex2f(0.5, 0.5);
		glVertex2f(0.5, -0.5);
	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	printf("Hello World This My World By Fauzan");
	glutInit(&argc, argv);
	
	glutCreateWindow("Persegi ini cuk By 1806065");
	glutInitWindowPosition(100,100);
	glutInitWindowSize(640,480);
	glutDisplayFunc(persegi);
	glutMainLoop();
	return 0;
}
