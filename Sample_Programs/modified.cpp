#define GL_SILENCE_DEPRECATION
#include<GLUT/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    glVertex2i(10,10);
    glVertex2i(250,250);
    glVertex2i(10,490);
    glVertex2i(490,490);
    glVertex2i(490,10);
    glEnd();
//draw the line with red color
    glLineWidth(3.0);         // Thickness of line
        glBegin(GL_LINES);
            glColor3f(1.0,0.0,0.0);
            glVertex2d (10,10);
            glVertex2d (10,490);
    
            glColor3f(1.0,1.0,1.0);
            glVertex2d (10,490);
            glVertex2d (490,490);
    
            glColor3f(0.0,1.0,1.0);
            glVertex2d (490,490);
            glVertex2d (490,10);
    
            glColor3f(1.0,1.0,0.0);
            glVertex2d (490,10);    
            glVertex2d (10,10);
    
    glEnd();
    glFlush();
}

void myinit()
{
    //glClearColor(0.0,0.0,1.0,0.0);// set the window color to blue
    glColor3f(0.0,0.0,1.0);// set the point color to cyan (RGB)
    glPointSize(10.0);
    gluOrtho2D(0.0,500.0,0.0,500.0);// coordinates to be used with the viewport (left,right,bottom,top)
}
int main(int argc, char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Activity2");
    glutDisplayFunc(display);
    myinit();
    glutMainLoop();
    return 0;
}

