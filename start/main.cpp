#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<vector>
#include<math.h>
using namespace std;

int pntX1, pntY1, choice = 0, edges;
vector<int> pntX;
vector<int> pntY;
int transX, transY;
int trans1X, trans1Y;
double scaleX, scaleY;

double round(double d)
{
return floor(d + 0.5);
}

void drawPolygonReflect(int val)
{
int a= 1;
int b= -1;
if (val==1){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    for (int i = 0; i < edges; i++)
    {
    glVertex2i(pntX[i]*a, pntY[i]*b );
    }
    glEnd();
}

else if (val==2){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    for (int i = 0; i < edges; i++)
    {
    glVertex2i(pntX[i]*b, pntY[i]*a );
    }
    glEnd();
}

}

void drawPolygonShear(int val, int a)
{
if (val==1){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    for (int i = 0; i < edges; i++)
    {
    glVertex2i(pntX[i]+a*pntY[i], pntY[i]);
    }
    glEnd();
}

else if (val==2){
    glBegin(GL_POLYGON);
    glColor3f(0.0, 1.0, 0.0);
    for (int i = 0; i < edges; i++)
    {
    glVertex2i(pntX[i], pntY[i]+a*pntX[i] );
    }
    glEnd();
}

}

void drawPolygon()
{
glBegin(GL_POLYGON);
glColor3f(1.0, 0.0, 0.0);
for (int i = 0; i < edges; i++)
{
glVertex2i(pntX[i], pntY[i]);
}
glEnd();
}


void drawPolygonTrans(int x, int y)
{
glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 0.0);
for (int i = 0; i < edges; i++)
{
glVertex2i(pntX[i] + x, pntY[i] + y);
}
glEnd();
}


void drawPolygonscal(int x, int y)
{
glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 0.0);
for (int i = 0; i < edges; i++)
{
glVertex2i(pntX[i] *x, pntY[i] * y);
}
glEnd();

}

void drawPolygonRoat(double value)
{
double radian=value*3.1416/180;
glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 0.0);

for (int i = 0; i < edges; i++)
{
glVertex2i(pntX[i]*cos(radian) + pntY[i]*sin(radian)  , pntY[i]*cos(radian)-pntX[i]*sin(radian)   );
}
glEnd();
}



void myInit(void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
//gluOrtho2D(-640.0, 640.0, -480.0, 480.0);
glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);

}


void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0, 0.0, 0.0);

if (choice == 1)
{
drawPolygon();
drawPolygonTrans(transX, transY);
}
else if(choice == 2)
{
drawPolygon();
drawPolygonscal(transX, transY);
}
else if (choice==3)
{
drawPolygon();
drawPolygonRoat(transX);
}

glFlush();
}

int main(int argc, char** argv)
{
cout << "Enter your choice:\n\n" << endl;

cout << "1. Translation" << endl;
cout << "2. Scaling" << endl;
cout << "3. Rotation" << endl;
cout << "4. Exit" << endl;


cin >> choice;

if (choice == 4) {
return 0;
}

cout << "\n\nFor Polygon:\n" << endl;

cout << "Enter no of edges: "; cin >> edges;

for (int i = 0; i < edges; i++)
{
cout << "Enter co-ordinates for vertex  " << i + 1 << " : "; cin >> pntX1 >> pntY1;
pntX.push_back(pntX1);
pntY.push_back(pntY1);
}

if (choice == 1)
{
   cout << "Enter the translation factor for X and Y: ";
   cin >> transX >> transY;
}
else if(choice ==2)
{
   cout << "Enter the Scaling factor for X and Y: ";
   cin >> transX >> transY;
}
else if (choice ==3)
{
   cout<<"Enter the Rotation Angular factor ";
   cin>> transX;
}
else if (choice ==4)
{
    return 0;
}

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(640, 480);
glutInitWindowPosition(100, 150);
glutCreateWindow("Basic Transformations");
glutDisplayFunc(myDisplay);
myInit();
glutMainLoop();
    return 0;
}

