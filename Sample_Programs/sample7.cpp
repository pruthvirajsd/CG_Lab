#define GL_SILENCE_DEPRECATION
#include<GLUT/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.0, 1.0);
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP); // If you put GL_LINE_LOOP, it is only boundary.
    glVertex2f(50, 50);
    glVertex2f(200, 50);
    glVertex2f(200, 200);
    glVertex2f(50, 200);
glEnd();
glFlush();
}
void myinit()
{
    glClearColor(1.0,1.0,0.0,1.0);
    gluOrtho2D(0.0,499.0,0.0,499.0);
}
int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(300,300);
    glutInitWindowPosition(0,0);
    glutCreateWindow("LINE LOOP");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}


