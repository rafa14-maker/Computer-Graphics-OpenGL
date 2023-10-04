#include<windows.h>
#include<GL/glut.h>

void init()
{
    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,400.0,0.0,400.0);
}

void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0,0.0,0.0);
    glPointSize(5.0);

    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,0.0);

    glVertex3f(50.0,50.0,0.0);
    glVertex3f(350.0,50.0,0.0);

    glVertex3f(350.0,250.0,0.0);
    glVertex3f(50.0,250.0,0.0);


    glEnd();

    glBegin(GL_TRIANGLES);

    glColor3f(0.0,0.0,1.0);

     glVertex3f(50.0,250.0,0.0);
    glVertex3f(350.0,250.0,0.0);
    glVertex3f(200.0,350.0,0.0);

    glEnd();

     glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);

    glVertex3f(175.0,50.0,0.0);
    glVertex3f(175.0,200.0,0.0);

    glVertex3f(225.0,200.0,0.0);
    glVertex3f(225.0,50.0,0.0);


    glEnd();


      glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);

    glVertex3f(90.0,100.0,0.0);
    glVertex3f(140.0,100.0,0.0);

    glVertex3f(140.0,180.0,0.0);
    glVertex3f(90.0,180.0,0.0);


    glEnd();


      glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);

    glVertex3f(260.0,100.0,0.0);
    glVertex3f(310.0,100.0,0.0);

    glVertex3f(310.0,180.0,0.0);
    glVertex3f(260.0,180.0,0.0);


    glEnd();


    glFlush();
}

int main(int argc,char*argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

    glutInitWindowPosition(200,100);
    glutInitWindowSize(450,450);
    glutCreateWindow("Hello lines");

    init();
    glutDisplayFunc(drawShapes);
    glutMainLoop();

    return 0;
}
