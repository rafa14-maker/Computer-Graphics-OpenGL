#include <cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <conio.h>

    void display(){
          glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
          glClear(GL_COLOR_BUFFER_BIT);
          glBegin(GL_QUADS);

    //black background
          glColor3ub(38, 38, 38);
          glVertex2f(-1.0f, -0.45f);
          glVertex2f(1.0f, -0.45f);
          glVertex2f(1.0f, 1.0f);
          glVertex2f(-1.0f, 1.0f);


          glColor3ub(179, 119, 0);
          glVertex2f(0.0f, -0.5f);//Right square main
          glVertex2f(0.0f, 0.2f);
          glVertex2f(0.75f, 0.2f);
          glVertex2f(0.75f, -0.5f);


          glColor3ub(128, 64, 0);
          glVertex2f(0.79f, 0.2f);//Right UP 1 from down
          glVertex2f(0.76f, 0.35f);
          glVertex2f(-0.045f, 0.35f);
          glVertex2f(0.0f, 0.2f);

          glColor3ub(128, 64, 0);
          glVertex2f(0.78f, 0.35f);//Right UP 2 from down
          glVertex2f(0.74f, 0.50f);
          glVertex2f(-0.085f, 0.50f);
          glVertex2f(-0.045f, 0.35f);

          glColor3ub(128, 64, 0);
          glVertex2f(0.76f, 0.50f);//Right UP 3 from down
          glVertex2f(0.72f, 0.65f);
          glVertex2f(-0.15f, 0.65f);
          glVertex2f(-0.085f, 0.50f);

          glColor3ub(128, 64, 0);
          glVertex2f(0.74f, 0.65f);//Right UP 4 from down
          glVertex2f(0.69f, 0.83f);
          glVertex2f(-0.18f, 0.83f);
          glVertex2f(-0.148f, 0.65f);



          glColor3ub(0, 0, 0);
          glVertex2f(0.0f, 0.17f);//Right square main up black
          glVertex2f(0.0f, 0.2f);
          glVertex2f(0.75f, 0.2f);
          glVertex2f(0.75f, 0.17f);


          glColor3ub(153, 102, 0);
          glVertex2f(0.0f, -0.5f);//Left square main
          glVertex2f(0.0f, 0.2f);
          glVertex2f(-0.31f, 0.2f);
          glVertex2f(-0.31f, -0.5f);



          glColor3ub(0,0,0);//right down black
          glVertex2f(0.0f, -0.5f);
          glVertex2f(0.0f, -0.53f);
          glVertex2f(0.73f, -0.53f);
          glVertex2f(0.73f, -0.5f);

          glColor3ub(179, 119, 0);//right down black lower
          glVertex2f(0.0f, -0.53f);
          glVertex2f(0.0f, -0.63f);
          glVertex2f(0.73f, -0.63f);
          glVertex2f(0.73f, -0.53f);

          glColor3ub(214, 214, 194);//right down blacker lower ash square
          glVertex2f(0.0f, -0.63f);
          glVertex2f(0.0f, -0.83f);
          glVertex2f(0.73f, -0.83f);
          glVertex2f(0.73f, -0.63f);


          glColor3ub(214, 214, 194);
          glVertex2f(0.0f, -0.63f);
          glVertex2f(0.0f, -0.83f);
          glVertex2f(-0.6f, -0.83f);
          glVertex2f(-0.6f, -0.63f);


          glColor3ub(214, 214, 194);
          glVertex2f(-0.35f, -0.73f);
          glVertex2f(-0.35f, -0.83f);
          glVertex2f(-0.68f, -0.83f);
          glVertex2f(-0.68f, -0.73f);


          glEnd();


          glBegin (GL_TRIANGLES);

          glColor3ub(153, 102, 0);
          glVertex2f(0.0f, 0.2f);
          glVertex2f(-0.35f, 0.2f);
          glVertex2f(-0.17f, 0.8f);

          glEnd();

          glBegin(GL_QUADS);

          glColor3ub(0, 0, 0);
          glVertex2f(-0.31f, 0.2f);
          glVertex2f(-0.35f, 0.2f);
          glVertex2f(-0.17f, 0.8f);
          glVertex2f(-0.15f, 0.73f);



          glColor3ub(0, 0, 0);
          glVertex2f(-0.31f, 0.2f);//Left up black
          glVertex2f(-0.35f, 0.2f);
          glVertex2f(-0.17f, 0.8f);
          glVertex2f(-0.15f, 0.73f);


          glColor3ub(128, 64, 0);
          glVertex2f(-0.35f, 0.2f);//Left up black side thin border
          glVertex2f(-0.37f, 0.2f);
          glVertex2f(-0.183f, 0.836f);
          glVertex2f(-0.17f, 0.8f);


          glColor3ub(153, 102, 0);//left down stair
          glVertex2f(0.0f, -0.45f);
          glVertex2f(0.0f, -0.63f);
          glVertex2f(-0.45f, -0.63f);
          glVertex2f(-0.45f, -0.45f);


          glColor3ub(153, 102, 0);//left down stair 2
          glVertex2f(-0.55f, -0.63f);
          glVertex2f(0.0f, -0.63f);
          glVertex2f(0.0f, -0.55f);
          glVertex2f(-0.55f, -0.55f);



    glEnd();



    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);


    glVertex2f(0.0f, -0.45f);//left down stair border 1 from up
    glVertex2f(0.0f, -0.63f);

    glVertex2f(-0.45f, -0.55f);
    glVertex2f(-0.45f, -0.45f);

    glVertex2f(0.0f, -0.45f);
    glVertex2f(-0.45f, -0.45f);

    glVertex2f(-0.2f, -0.55f);
    glVertex2f(-0.45f, -0.55f);

    glVertex2f(-0.2f, -0.45f);
    glVertex2f(-0.2f, -0.55f);


    //Right square main

    glVertex2f(0.0f, -0.5f);
    glVertex2f(0.75f, -0.5f);

    glVertex2f(0.75f, 0.2f);
    glVertex2f(0.75f, -0.5f);




    glVertex2f(0.79f, 0.2f);//Right up 1 from down
    glVertex2f(0.76f, 0.35f);

    glVertex2f(-0.045f, 0.35f);
    glVertex2f(0.0f, 0.2f);

    glVertex2f(0.79f, 0.2f);
    glVertex2f(0.0f, 0.2f);

    glVertex2f(0.76f, 0.35f);
    glVertex2f(-0.045f, 0.35f);


    glVertex2f(0.777, 0.25f);
    glVertex2f(-0.01f, 0.25f);




          glVertex2f(0.78f, 0.35f);//Right up 2 from down
          glVertex2f(0.74f, 0.50f);

          glVertex2f(-0.085f, 0.50f);
          glVertex2f(-0.045f, 0.35f);

          glVertex2f(0.74f, 0.50f);
          glVertex2f(-0.085f, 0.50f);




          glVertex2f(-0.24f, 0.55f);//left inside
          glVertex2f(-0.099f, 0.55f);

          glVertex2f(-0.06f, 0.4f);//left inside
          glVertex2f(-0.25f, 0.4f);

          glVertex2f(0.0f, 0.2f);//left inside
          glVertex2f(-0.31f, 0.2f);




          glVertex2f(0.76f, 0.50f);//Right up 3 from down
          glVertex2f(0.72f, 0.65f);

          glVertex2f(-0.13f, 0.65f);
          glVertex2f(-0.085f, 0.50f);

          glVertex2f(0.72f, 0.65f);
          glVertex2f(-0.13f, 0.65f);



          glVertex2f(0.74f, 0.65f);//Right up 4 from down
          glVertex2f(0.69f, 0.83f);

          glVertex2f(-0.18f, 0.83f);
          glVertex2f(-0.13f, 0.65f);

          glVertex2f(0.69f, 0.83f);
          glVertex2f(-0.18f, 0.83f);

          glVertex2f(-0.35f, 0.2f);//Left up black side thin border
          glVertex2f(-0.37f, 0.2f);

           glVertex2f(-0.35f, 0.2f);
           glVertex2f(-0.17f, 0.8f);

          glVertex2f(-0.183f, 0.836f);
          glVertex2f(-0.17f, 0.8f);

          glVertex2f(-0.37f, 0.2f);
          glVertex2f(-0.183f, 0.836f);


          glVertex2f(0.0f, -0.5f);//Left square main
          glVertex2f(0.0f, 0.2f);

          glVertex2f(-0.31f, 0.2f);
          glVertex2f(-0.31f, -0.45f);


          glVertex2f(-0.1f, -0.01f);//Left square chilte
          glVertex2f(-0.01f, 0.15f);


          glVertex2f(-0.1f, -0.01f);
           glVertex2f(-0.4f, -0.01f);

          glVertex2f(-0.01f, 0.15f);
          glVertex2f(-0.31f, 0.15f);

          glVertex2f(-0.31f, 0.15f);
          glVertex2f(-0.4f, -0.01f);



    //right down black er niche
          glVertex2f(0.0f, -0.53f);
          glVertex2f(0.0f, -0.63f);

          glVertex2f(0.73f, -0.63f);
          glVertex2f(0.73f, -0.53f);

          glVertex2f(0.0f, -0.63f);
          glVertex2f(0.73f, -0.63f);

          glVertex2f(0.0f, -0.53f);
          glVertex2f(0.73f, -0.53f);



    //right down blacker lower ash square
          glVertex2f(0.0f, -0.63f);
          glVertex2f(0.0f, -0.83f);

           glVertex2f(0.0f, -0.63f);
           glVertex2f(0.73f, -0.63f);

          glVertex2f(0.73f, -0.83f);
          glVertex2f(0.73f, -0.63f);

          glVertex2f(0.0f, -0.83f);
          glVertex2f(0.73f, -0.83f);


    //left ash
          glVertex2f(0.0f, -0.63f);
          glVertex2f(0.0f, -0.83f);

          glVertex2f(0.0f, -0.63f);
          glVertex2f(-0.6f, -0.63f);

         glVertex2f(-0.6f, -0.73f);
         glVertex2f(-0.6f, -0.63f);

          glVertex2f(0.0f, -0.83f);
          glVertex2f(-0.6f, -0.83f);



          glVertex2f(-0.55f, -0.63f);// left stair 2
          glVertex2f(0.0f, -0.63f);

          glVertex2f(-0.3f, -0.55f);
          glVertex2f(-0.55f, -0.55f);

          glVertex2f(-0.55f, -0.63f);
          glVertex2f(-0.55f, -0.55f);

          glVertex2f(-0.25f, -0.63f);
          glVertex2f(-0.25f, -0.55f);


          glVertex2f(-0.6f, -0.73f);// left stair 3
          glVertex2f(-0.3f, -0.73f);

          glVertex2f(-0.3f, -0.73f);
          glVertex2f(-0.3f, -0.63);




          glVertex2f(-0.35f, -0.73f);// left stair 4
          glVertex2f(-0.35f, -0.83f);

          glVertex2f(-0.35f, -0.73f);
          glVertex2f(-0.68f, -0.73f);

          glVertex2f(-0.68f, -0.83f);
          glVertex2f(-0.68f, -0.73f);


          glVertex2f(-0.35f, -0.83f);
          glVertex2f(-0.68f, -0.83f);

    //house inside right

          glVertex2f(0.0f, -0.35f);
          glVertex2f(0.75f, -0.35f);


          glVertex2f(0.0f, -0.2f);
          glVertex2f(0.75f, -0.2f);


          glVertex2f(0.0f, -0.01f);
          glVertex2f(0.75f, -0.01f);


          glVertex2f(0.0f, -0.38f);//left
          glVertex2f(-0.31f, -0.38f);

          glVertex2f(0.0f, -0.25f);
          glVertex2f(-.31f, -0.25f);


          glVertex2f(0.0f, -0.1f);
          glVertex2f(-.31f, -0.1f);






    glEnd();


    glBegin(GL_QUADS);
          glColor3ub(128, 64, 0);
          glVertex2f(-0.1f, -0.01f);//Left square chilte
          glVertex2f(-0.01f, 0.15f);
          glVertex2f(-0.31f, 0.15f);
          glVertex2f(-0.4f, -0.01f);




          glColor3ub(214, 214, 194);
          glVertex2f(0.52f, -0.3f);//Right window from left 1
          glVertex2f(0.52f, 0.1f);
          glVertex2f(0.65f, 0.1f);
          glVertex2f(0.65f, -0.3f);



          glColor3ub(0,0,0);
          glVertex2f(0.53f, -0.28f);//Right window from left 1 inside black
          glVertex2f(0.53f, 0.08f);
          glVertex2f(0.64f, 0.08f);
          glVertex2f(0.64f, -0.28f);


          glColor3ub(255, 255, 128);
          glVertex2f(0.53f, -0.05f);//Right window from left 1 inside yellow
          glVertex2f(0.53f, 0.08f);
          glVertex2f(0.64f, 0.08f);
          glVertex2f(0.64f, -0.05);


          glColor3ub(214, 214, 194);
          glVertex2f(0.12f, -0.3f);//Right window from left 2
          glVertex2f(0.12f, 0.1f);
          glVertex2f(0.25f, 0.1f);
          glVertex2f(0.25f, -0.3f);


           glColor3ub(172, 115, 57);
          glVertex2f(-0.13f, -0.45f);//Right window from left 2
          glVertex2f(-0.13f, -0.05f);
          glVertex2f(-0.25f, -0.05f);
          glVertex2f(-0.25f, -0.45f);



          glColor3ub(0,0,0);
          glVertex2f(-0.23f, -0.45f);//Right window from left 2
          glVertex2f(-0.23f, -0.05f);
          glVertex2f(-0.25f, -0.05f);
          glVertex2f(-0.25f, -0.45f);



          glColor3ub(0,0,0);
          glVertex2f(0.13f, -0.28f);//Right window from left 2 inside black
          glVertex2f(0.13f, 0.08f);
          glVertex2f(0.24f, 0.08f);
          glVertex2f(0.24f, -0.28f);


          glColor3ub(255, 255, 128);
          glVertex2f(0.13f, -0.05f);//Right window from left 2 inside yellow
          glVertex2f(0.13f, 0.08f);
          glVertex2f(0.24f, 0.08f);
          glVertex2f(0.24f, -0.05f);





           glColor3ub(214, 214, 194);
          glVertex2f(-0.11f, -0.45f);//pillar from left 1
          glVertex2f(-0.11f, -0.015f);
          glVertex2f(-0.13f, -0.015f);
          glVertex2f(-0.13f, -0.45f);


          glColor3ub(214, 214, 194);
          glVertex2f(-0.37f, -0.45f);//pillar from left 2
          glVertex2f(-0.37f, -0.015f);
          glVertex2f(-0.35f, -0.015f);
          glVertex2f(-0.35f, -0.45f);


    glEnd();




    glLineWidth(3);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);

    //Right window from left 1
      glVertex2f(0.52f, -0.3f);
      glVertex2f(0.52f, 0.1f);

      glVertex2f(0.65f, 0.1f);
      glVertex2f(0.65f, -0.3f);

      glVertex2f(0.52f, 0.1f);
      glVertex2f(0.65f, 0.1f);

      glVertex2f(0.52f, -0.3f);
      glVertex2f(0.65f, -0.3f);


      glVertex2f(0.53f, -0.05f);//Right window from left 1 inside yellow
      glVertex2f(0.53f, 0.08f);

      glVertex2f(0.64f, 0.08f);
      glVertex2f(0.64f, -0.05);


      glVertex2f(0.53f, -0.05f);
      glVertex2f(0.64f, -0.05);

       glVertex2f(0.53f, 0.08f);
      glVertex2f(0.64f, 0.08f);


      glVertex2f(0.13f, -0.05f);//Right window from left 2 inside yellow
      glVertex2f(0.13f, 0.08f);

      glVertex2f(0.24f, 0.08f);
      glVertex2f(0.24f, -0.05f);

      glVertex2f(0.13f, 0.08f);
      glVertex2f(0.24f, 0.08f);

      glVertex2f(0.12f, -0.3f);//Right window from left 2
      glVertex2f(0.12f, 0.1f);

      glVertex2f(0.12f, -0.3f);
      glVertex2f(0.25f, -0.3f);

      glVertex2f(0.25f, 0.1f);
      glVertex2f(0.25f, -0.3f);


      glVertex2f(0.12f, 0.1f);
      glVertex2f(0.25f, 0.1f);

//left door black border

      glVertex2f(-0.13f, -0.05f);
      glVertex2f(-0.25f, -0.05f);

    glEnd();
    glFlush();
}
void myInit (void) {
    glClearColor(1, 1, 1, 1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

    int main(int argc, char**argv){

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1000, 1000);
    glutInitWindowPosition (400, 150);
    glutCreateWindow ("MID LAB TASK ");
    glutDisplayFunc(display);
    myInit ();
    glutMainLoop();


    }
