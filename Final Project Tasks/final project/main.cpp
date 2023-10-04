/*
* GL02Primitive.cpp: Vertex, Primitive and Color
* Draw Simple 2D colored Shapes: quad, triangle and polygon.
*/
#include <iostream>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>


#include"day sky.h"
#include"day sea.h"

#include"sun (D).h"

#include"night sky.h"
#include"night sea.h"

#include"moon (D).h"

#include"cloud 1.h"
#include"cloud 2.h"

#include"bird 1.h"
#include"bird 2.h"

#include"roads.h"

#include"tree (M).h"
#include"tree 1 (D).h"
#include"tree 2 (D).h"
#include"tree 3 (D).h"
#include"tree red (W).h"

#include"bush (M).h"
#include"grass 1 (M).h"
#include"grass 2 (M).h"

#include"light stand.h"
#include"bench.h"

#include"car.h"

#include"building shadow.h"
#include"buildings.h"

#include"center boat.h"
#include"yatch boat 1.h"
#include"yatch boat 2.h"

static float tx = -0.55f;
static float ty = -0.1f;
static float tz = -0.1f;
static float tk = -0.1f;


static float x = -0.55f;
static float y = -0.1f;
static float z = -0.1f;

static float ab=0.8f; //ship
static float cd=0.8f; //ship


/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}


void run()
{
     tx +=0.0009;
     ty+=0.0005;
     tz-=0.0005;
   tk+=0.1;
   ab +=0.0001;
    cd+=0.0001;
  if(tx>=1.5)tx=-0.5;
        if(ty>=1.5)ty=-0.5;
         if(tz<=-2.0)tz=0.1;
         if(tk<=1.5)tk=0.5;

        if(ab>=2.5)ab=1.0;
        if(cd>=2.5)cd=1.0;

       glutPostRedisplay();
}

void ani_car()
{
    glPushMatrix();
   glTranslatef(tx,0.0f,0.0f);
     car();
  glPopMatrix();
}


void ani_yatchBoat1()
{
     glPushMatrix();
    glTranslatef(tz,0.0f,0.0f);
   yatchBoat1();
   glPopMatrix();
   }

void ani_bird1()
{
     glPushMatrix();
    glTranslatef(tz,0.0f,0.0f);
   bird1();
   glPopMatrix();
   }


   void ani_bird2()
{
     glPushMatrix();
    glTranslatef(tz,0.0f,0.0f);
   bird2();
   glPopMatrix();
   }

void ani_yatchBoat2(){
     glPushMatrix();
    glTranslatef(ty,0.0f,0.0f);
   yatchBoat2();
  glPopMatrix();
  }

  void ani_cloud2(){
     glPushMatrix();
    glTranslatef(ty,0.0f,0.0f);
   cloud2();
  glPopMatrix();
  }

   void ani_cloud1(){
     glPushMatrix();
    glTranslatef(ty,0.0f,0.0f);
   cloud1();
  glPopMatrix();
  }

    void ani_sun(){
     glPushMatrix();
    glTranslatef(ty,0.0f,0.0f);
   sun();
  glPopMatrix();
  }

     void ani_moon(){
     glPushMatrix();
    glTranslatef(ty,0.0f,0.0f);
   moon();
  glPopMatrix();
  }


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */




void ani_every_day()
{
   glPushMatrix();
   glScalef(ab,cd,0.0f);


daySky();
daySea();
sun();
//ani_sun();

//nightSea();
//nightSky();
//moon();
////ani_moon();

ani_cloud1();
ani_cloud2();

roads();


//building shadow
    glPushMatrix();
    glTranslatef(-0.80f,0.670f,0.0f);
    glScalef(0.5f,0.6f,0.6f);
    buildingShadow();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.20f,0.670f,0.0f);
    glScalef(0.5f,0.6f,0.6f);
    buildingShadow();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.80f,0.670f,0.0f);
    glScalef(0.5f,0.6f,0.6f);
    buildingShadow();
    glPopMatrix();



buildings();

//bird1();
//bird2();

ani_bird1();
ani_bird2();




//Tree m
    glPushMatrix();
    glTranslatef(-0.65f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    treeM();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.55f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    treeM();
    glPopMatrix();

//tree 1 d
    glPushMatrix();
    glTranslatef(-0.75f,0.15f,0.0f);
    glScalef(0.25f,0.25f,0.25f);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.55f,0.10f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    tree1();
    glPopMatrix();



//tree 2 d

    glPushMatrix();
    glTranslatef(-0.75f,0.15f,0.0f);
    glScalef(0.25f,0.25f,0.25f);
    tree2();
    glPopMatrix();



//tree 3 d

    glPushMatrix();
    glTranslatef(-0.9f,0.15f,0.0f);
    glScalef(0.25f,0.25f,0.25f);
    tree3();
    glPopMatrix();



//tree red w

    glPushMatrix();
    glTranslatef(-0.95f,0.25f,0.0f);
    glScalef(0.25f,0.25f,0.25f);
    treeRed();
    glPopMatrix();

//bush m

    glPushMatrix();
    glTranslatef(0.59f,0.25f,0.0f);
    glScalef(0.25f,0.25f,0.25f);
    bush();
    glPopMatrix();

//grass 1 m

    glPushMatrix();
    glTranslatef(0.89f,-0.12f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    grass1();
    glPopMatrix();


//grass 2 m

    glPushMatrix();
    glTranslatef(0.79f,0.10f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    grass2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.5f,0.10f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    grass2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f,0.10f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    grass2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.2f,0.10f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    grass2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.65f,-0.10f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    grass2();
    glPopMatrix();
//
//    glPushMatrix();
//    glTranslatef(0.5f,0.10f,0.0f);
//    glScalef(0.15f,0.15f,0.15f);
//    grass2();
//    glPopMatrix();
//
//    glPushMatrix();
//    glTranslatef(0.5f,-0.10f,0.0f);
//    glScalef(0.15f,0.15f,0.15f);
//    grass2();
//    glPopMatrix();



 //light stand
    glPushMatrix();
    glTranslatef(-1.0f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.7f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.1f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.5f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.8f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();


//bench


    glPushMatrix();
    glTranslatef(-0.775f,0.15f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    bench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.475f,0.15f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    bench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.175f,0.15f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    bench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.125f,0.15f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    bench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.425f,0.15f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    bench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.725f,0.15f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    bench();
    glPopMatrix();


//car();

//yatchBoat1();
//yatchBoat2();
//centerBoat();

    ani_car();
    ani_yatchBoat2();
    ani_yatchBoat1();
    glutIdleFunc(run);

   glPopMatrix();

}




void ani_every_night()
{
   glPushMatrix();
   glScalef(ab,cd,0.0f);


//daySky();
//daySea();
//sun();
//ani_sun();

nightSea();
nightSky();
moon();
//ani_moon();

ani_cloud1();
ani_cloud2();

roads();


//building shadow
    glPushMatrix();
    glTranslatef(-0.80f,0.670f,0.0f);
    glScalef(0.5f,0.6f,0.6f);
    buildingShadow();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.20f,0.670f,0.0f);
    glScalef(0.5f,0.6f,0.6f);
    buildingShadow();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0.80f,0.670f,0.0f);
    glScalef(0.5f,0.6f,0.6f);
    buildingShadow();
    glPopMatrix();



buildings();

//bird1();
//bird2();

ani_bird1();
ani_bird2();




//Tree m
    glPushMatrix();
    glTranslatef(-0.65f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    treeM();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.55f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    treeM();
    glPopMatrix();

//tree 1 d
    glPushMatrix();
    glTranslatef(-0.75f,0.15f,0.0f);
    glScalef(0.25f,0.25f,0.25f);
    tree1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.55f,0.10f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    tree1();
    glPopMatrix();



//tree 2 d

    glPushMatrix();
    glTranslatef(-0.75f,0.15f,0.0f);
    glScalef(0.25f,0.25f,0.25f);
    tree2();
    glPopMatrix();



//tree 3 d

    glPushMatrix();
    glTranslatef(-0.9f,0.15f,0.0f);
    glScalef(0.25f,0.25f,0.25f);
    tree3();
    glPopMatrix();



//tree red w

    glPushMatrix();
    glTranslatef(-0.95f,0.25f,0.0f);
    glScalef(0.25f,0.25f,0.25f);
    treeRed();
    glPopMatrix();

//bush m

    glPushMatrix();
    glTranslatef(0.59f,0.25f,0.0f);
    glScalef(0.25f,0.25f,0.25f);
    bush();
    glPopMatrix();

//grass 1 m

    glPushMatrix();
    glTranslatef(0.89f,-0.12f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    grass1();
    glPopMatrix();


//grass 2 m

    glPushMatrix();
    glTranslatef(0.79f,0.10f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    grass2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.5f,0.10f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    grass2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f,0.10f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    grass2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.2f,0.10f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    grass2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.65f,-0.10f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    grass2();
    glPopMatrix();
//
//    glPushMatrix();
//    glTranslatef(0.5f,0.10f,0.0f);
//    glScalef(0.15f,0.15f,0.15f);
//    grass2();
//    glPopMatrix();
//
//    glPushMatrix();
//    glTranslatef(0.5f,-0.10f,0.0f);
//    glScalef(0.15f,0.15f,0.15f);
//    grass2();
//    glPopMatrix();



 //light stand
    glPushMatrix();
    glTranslatef(-1.0f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.7f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.4f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.1f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.2f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.5f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.8f,0.20f,0.0f);
    glScalef(0.2f,0.2f,0.2f);
    lightStand();
    glPopMatrix();


//bench


    glPushMatrix();
    glTranslatef(-0.775f,0.15f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    bench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.475f,0.15f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    bench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.175f,0.15f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    bench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.125f,0.15f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    bench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.425f,0.15f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    bench();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.725f,0.15f,0.0f);
    glScalef(0.15f,0.15f,0.15f);
    bench();
    glPopMatrix();


//car();

//yatchBoat1();
//yatchBoat2();
//centerBoat();

    ani_car();
    ani_yatchBoat2();
    ani_yatchBoat1();
    glutIdleFunc(run);

   glPopMatrix();

}


void display_day() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


    glPushMatrix();
    glScalef(ab,cd,0.8f);
    ani_every_day();
    glPopMatrix();


    centerBoat();

	glFlush();  // Render now
	glutSwapBuffers();
}



void display_night() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


    glPushMatrix();
    glScalef(ab,cd,0.8f);
    ani_every_night();
    glPopMatrix();


    centerBoat();

	glFlush();  // Render now
}




void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'r':
            glutIdleFunc(run);
			break;

		case 's':
			 glutIdleFunc(NULL);
			 break;
//
//        case 'o':
//			 //glutIdleFunc(NULL);
////                x+=0.0001;
////                y+=0.0001;
////                z-=0.0001;
//			 break;
//
//        case 'l':
//			 //glutIdleFunc(NULL);
//			 //ty+=0.0005;
//			 break;


	  default:
			break;
	}
}


void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:

 glutDisplayFunc(display_day);
break;
case GLUT_KEY_DOWN:

 glutDisplayFunc(display_night);
break;

}
glutPostRedisplay();
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutInitWindowSize(1920, 1080);
	glutCreateWindow("SHORELINE VIEW ");  // Create window with the given title
	   // Set the window's initial width & height
	glutDisplayFunc(display_day);       // Register callback handler for window re-paint event
	//glutDisplayFunc(display_night);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization


    //glutTimerFunc(20, update1, 0); //Add a timer

    //    glutKeyboardFunc(handleKeypress);
    //   glutKeyboardFunc(SpecialInput);

    glutSpecialFunc(SpecialInput);


    glutKeyboardFunc(my_keyboard);

//    glutSpecialFunc(my_keyboard);


    //glutMouseFunc(my_mouse);

    //utMouseFunc(handleMouse);


	glutMainLoop();                 // Enter the event-processing loop


	return 0;
}
