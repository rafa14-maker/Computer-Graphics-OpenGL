#include <windows.h>

#include <GL/glut.h>


void display() {

     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
     glClear(GL_COLOR_BUFFER_BIT);
     glLoadIdentity();


        glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.76f,0.76f,0.76f);
            glVertex2f(-0.172f, 0.274f);
            glVertex2f(-0.172f, 0.278f);
            glVertex2f(-0.212f, 0.4f);
            glVertex2f(-0.223f, 0.483f);
            glVertex2f(-0.089f, 0.27f);
            glVertex2f(-0.101f, 0.199f);
            glVertex2f(-0.194f, 0.119f);
            glVertex2f(-0.198f, 0.143f);
            glVertex2f(-0.174f, 0.27f);
            glEnd();

              glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.73f,0.73f,0.73f);
            glVertex2f(-0.154f, -0.074f);
            glVertex2f(-0.218f, -0.414f);
            glVertex2f(-0.074f, -0.035f);
            glVertex2f(-0.098f, 0.096f);
            glVertex2f(-0.096f, 0.104f);
            glVertex2f(-0.203f, 0.072f);
            glVertex2f(-0.174f, 0.025f);
            glVertex2f(-0.187f, 0.076f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.74f,0.74f,0.74f);
            glVertex2f(-0.245f, 0.088f);
            glVertex2f(-0.407f, 0.108f);
            glVertex2f(-0.298f, 0.048f);
            glVertex2f(-0.387f, -0.058f);
            glVertex2f(-0.243f, 0.029f);
            glVertex2f(-0.232f, 0.04f);
            glVertex2f(-0.169f, 0.009f);
            glVertex2f(-0.189f, 0.068f);
            glVertex2f(-0.185f, 0.096f);
            glVertex2f(-0.194f, 0.127f);
            glVertex2f(-0.198f, 0.147f);
            glVertex2f(-0.216f, 0.116f);
            glVertex2f(-0.198f, 0.135f);
            glEnd();

             glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.72f,0.72f,0.72f);
            glVertex2f(-0.092f, 0.202f);
            glVertex2f(-0.096f, 0.199f);
            glVertex2f(-0.101f, 0.199f);
            glVertex2f(-0.103f, 0.206f);
            glVertex2f(-0.103f, 0.214f);
            glVertex2f(-0.103f, 0.222f);
            glVertex2f(-0.103f, 0.222f);
            glVertex2f(-0.101f, 0.214f);
            glVertex2f(-0.098f, 0.202f);
            glVertex2f(-0.085f, 0.206f);
            glVertex2f(-0.078f, 0.214f);
            glVertex2f(-0.074f, 0.218f);
            glVertex2f(-0.074f, 0.218f);
            glVertex2f(-0.083f, 0.206f);
            glEnd();

               glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.75f,0.75f,0.75f);
            glVertex2f(-0.194f, 0.155f);
            glVertex2f(-0.194f, 0.163f);
            glVertex2f(-0.098f, 0.218f);
            glVertex2f(-0.092f, 0.068f);
            glVertex2f(-0.181f, 0.029f);
            glEnd();

              glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.73f,0.73f,0.73f);
            glVertex2f(-0.038f, 0.163f);
            glVertex2f(-0.032f, 0.191f);
            glVertex2f(-0.027f, 0.202f);
            glVertex2f(-0.018f, 0.218f);
            glVertex2f(-0.014f, 0.222f);
            glVertex2f(-0.025f, 0.222f);
            glVertex2f(-0.036f, 0.23f);
            glVertex2f(-0.049f, 0.234f);
            glVertex2f(-0.058f, 0.23f);
            glVertex2f(-0.074f, 0.222f);
            glVertex2f(-0.087f, 0.206f);
            glVertex2f(-0.098f, 0.199f);
            glVertex2f(-0.101f, 0.202f);
            glVertex2f(-0.094f, 0.056f);
            glVertex2f(-0.094f, 0.052f);
            glVertex2f(-0.089f, 0.052f);
            glVertex2f(-0.069f, 0.076f);
            glVertex2f(-0.056f, 0.116f);
            glVertex2f(-0.045f, 0.135f);
            glEnd();

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
