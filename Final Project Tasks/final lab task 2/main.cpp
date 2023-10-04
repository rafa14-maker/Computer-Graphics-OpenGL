#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>

float angle = 30.0f;

static float tx = 0;

void r_s()
{
   glBegin(GL_QUADS);
   glColor3f (0.0, 1.0, 1.0);
   glVertex2f(30,190);
    glVertex2f(70,190);
    glVertex2f(70,210);
    glVertex2f(30,210);
   glEnd();
}

void boat()
{
     glPushMatrix();
      glTranslatef(tx, 0.0f, 0.0f);
      glBegin(GL_QUADS);
   glColor3f (1.0, 0.0, 0.0);
   glVertex2f(30,250);
    glVertex2f(150,250);
    glVertex2f(120,280);
    glVertex2f(50,280);
   glEnd();

      glBegin(GL_TRIANGLES);
    glColor3f (1.0, 1.0, 0.0);
    glVertex2f(30,250);
    glVertex2f(50,280);
    glVertex2f(10,320);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f (1.0, 1.0, 0.0);
    glVertex2f(150,250);
    glVertex2f(120,280);
    glVertex2f(170,320);
    glEnd();

      glBegin(GL_QUADS);
   glColor3f (1.0, 0.0, 1.0);
   glVertex2f(50,280);
    glVertex2f(120,280);
    glVertex2f(120,310);
    glVertex2f(50,310);
   glEnd();

 glPopMatrix();
}

void run()
{
     tx +=0.10;
        if(tx>=350)tx=0;
        glutPostRedisplay();
}

void my_mouse(int button,int state,int x,int y)
{
    switch(button)
    {
    case GLUT_LEFT_BUTTON :
        if (state == GLUT_DOWN){
           glutIdleFunc(run);
        }
        break;

    case GLUT_RIGHT_BUTTON :
        glutIdleFunc(NULL);
        break;

     default:
        break;

    }
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
    glColor3f (0.0, 0.0, 0.0);

   glBegin(GL_QUADS);
   glColor3f (0.0, 0.0, 1.0);
   glVertex2i(0,150);
    glVertex2i(500,150);
    glVertex2i(500,250);
    glVertex2i(0,250);

   glEnd();

   r_s();

   glPushMatrix();
   for(int i=0;i<7;i++)
   {
       glTranslatef(70.0f, 0.0f, 0.0f);
       r_s();
   }
   glPopMatrix();

   boat();


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
    glutCreateWindow("B O A T");
    init();
    glutDisplayFunc(display);
    glutMouseFunc(my_mouse);
    glutMainLoop();
    return 0;
}
