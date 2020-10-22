#define GL_SILENCE_DEPRECATION
#include<GLUT/glut.h>
void display (void)
{
    glClearColor (0.0,1.0,1.0,0.0);
    glClear (GL_COLOR_BUFFER_BIT);
    glFlush();
}
int main (int argc, char **argv)
{
    glutInit (&argc, argv); /* Initialise OpenGL */
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow ("Activity1"); /* Create the window */
    glutDisplayFunc (display); /* Register the "display" function */
    glutMainLoop (); /* Enter the OpenGL main loop */
    return 0;
}
