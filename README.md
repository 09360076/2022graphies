# 2022graphics

week01

week03

黃色茶壺
```C++
#include<GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03ªºµøµ¡");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
```

彩色三角形
```C++
#include<GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f,0.0f,0.0f); glVertex2f(0.0f,1.0f);
        glColor3f(0.0f,1.0f,0.0f); glVertex2f(0.87f,-0.5f);
        glColor3f(0.0f,0.0f,1.0f); glVertex2f(-0.87f,-0.5f);
    glEnd();
    glutSwapBuffers();
}
int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03ªº±m¦â¤T¨¤§Îµøµ¡");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
```

week04

week05

week06
