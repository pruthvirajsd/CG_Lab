#define GL_SILENCE_DEPRECATION
#include<GLUT/glut.h>

void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,0.0,0.0);     //draw the line with red color
glLineWidth(3.0);         // Thickness of line
    glBegin(GL_LINES);
        glVertex2d (50,50);    // to draw horizontal line in red color
        glVertex2d (150,50);
    
        glColor3f(0.0,0.0,1.0); //draw the line with blue color
        glVertex2d (200,200);    // to draw vertical line in blue color
        glVertex2d (200,300);
glEnd();
    glFlush();
}
void myinit()
{
    glClearColor(1.0,1.0,1.0,1.0);
    glColor3f(1.0,0.0,0.0);
    glPointSize(1.0);
    gluOrtho2D(0.0,500.0,0.0,500.0);
}
int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("LINE");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}
