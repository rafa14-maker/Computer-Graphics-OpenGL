#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>

float angle = 30.0f;

void shape()
{

  //  glutPostRedisplay();
      glBegin(GL_LINE_LOOP);

    glVertex2i(210-20,370);
    glVertex2i(310-20,370);
    glVertex2i(300-20,340);
    glVertex2i(320-20,340);
    glVertex2i(320-20,320);
    glVertex2i(300-20,320);
    glVertex2i(290-20,290);
    glVertex2i(310-20,290);
    glVertex2i(310-20,270);
    glVertex2i(280-20,270);
     glVertex2i(260-20,250);
      glVertex2i(240-20,270);

      glVertex2i(210-20,270);
    glVertex2i(210-20,290);
    glVertex2i(230-20,290);
    glVertex2i(220-20,320);
    glVertex2i(200-20,320);
    glVertex2i(200-20,340);
     glVertex2i(220-20,340);
      glVertex2i(210-20,370);


    glEnd();
}

void f2()
{
   glPushMatrix();
   shape();
   for(int i=0;i<1;i++)
   {
       angle+=30;
      glRotatef(angle, 0.0, 0.0, 1.0);
       shape();
   }
   glPopMatrix();

}




void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
    glColor3f (1.0, 0.0, 0.0);

 //   glPushMatrix();
      f2();
  //   glPopMatrix();



    glFlush();

}


void init()
{
   glClearColor (0.0, 0.0, 0.0, 0.0);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(0.0, 500.0, 0.0, 500.0, -10.0, 10.0);
}

int main(int argv,char**argc)
{
    glutInit(&argv,argc);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(550,550);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Fan");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
