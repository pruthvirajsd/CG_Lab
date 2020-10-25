#define GL_SILENCE_DEPRECATION
#include<GLUT/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
glVertex2i(100,300);
glVertex2i(201,300);
glEnd();
    glFlush();
}
void myinit()
{
    glClearColor(1.0,1.0,1.0,1.0);// set the window color to white
    glColor3f(1.0,0.0,0.0);// set the point color to red (RGB)
    glPointSize(5.0);// set the pixel size
    gluOrtho2D(0.0,500.0,0.0,500.0);// coordinates to be used with the viewport(left,right,bottom,top)
}
int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);// sets the initial display mode, GLUT single-default
    glutInitWindowSize(300,300);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Example2");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
