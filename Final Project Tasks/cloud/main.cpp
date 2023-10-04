#include <windows.h>

#include <GL/glut.h>
#include"product.h"

void display() {

     glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);
     glLoadIdentity();

     glColor3f(0.0f,0.0f,1.0f);

      cloud();


glFlush();
//angle +=1;

}





int main(int argc, char** argv) {

glutInit(&argc, argv);

glutInitDisplayMode(GLUT_RGB);

glutInitWindowSize(1366,768);

glutCreateWindow("FAN");

glutDisplayFunc(display);



glutMainLoop();

return 0;

}
