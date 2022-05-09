#include<Gl/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1, 1, 1);
    glutSolidTeapot(0.3);
    glPushMatrix();
        glTranslated(0.3, 0, 0);
        glRotated(angle, 0,0,1);
        glTranslated(0.2, 0, 0);
        glColor3f(1, 0, 0);
        glutSolidTeapot(0.2);
        glPushMatrix();
            glTranslated(0.2, 0, 0);
            glRotated(angle, 0,0,1);
            glTranslated(0.2, 0, 0);
            glColor3f(1, 0, 0);
            glutSolidTeapot(0.2);
            glPopMatrix();
      glPopMatrix();
    glutSwapBuffers();
    angle+=0.1;
}
int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week12 TRT");
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
}
