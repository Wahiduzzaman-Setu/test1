#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

void myDisplay(void);
void myInit(void);

main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (200, 150);
glutCreateWindow ("Ship");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 1.0);
glPointSize(5.0);

glBegin(GL_POLYGON);
glVertex2i(200, 20);
glVertex2i(-200, 20);
glVertex2i(-80,-50);
glVertex2i(80, -50);
glEnd();

glColor3f (1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2i(-110, 20);
glVertex2i(-110, 120);
glVertex2i(-150,120);
glVertex2i(-150, 20);
glEnd();

glColor3f (0.0, 0.0, 0.0);
glBegin(GL_POLYGON);
glVertex2i(-130, 130);
glVertex2i(-140, 130);

glEnd();

glColor3f (1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2i(20, 20);
glVertex2i(20, 170);
glVertex2i(-30,170);
glVertex2i(-30, 20);
glEnd();

glColor3f (1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
glVertex2i(110, 20);
glVertex2i(110, 120);
glVertex2i(150,120);
glVertex2i(150, 20);
glEnd();

glFlush ();
}
void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(-320.0, 320.0, -240.0, 240.0);
}
