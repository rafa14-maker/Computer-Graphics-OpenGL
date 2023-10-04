#include <windows.h>
#include <GL/glut.h>
void initGL() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 0.0f);

	glVertex2f(+0.0f, 0.6f);
	glVertex2f(-0.4f, 0.3f);
	glVertex2f(+0.4f, 0.3f);

	glEnd();

    glBegin(GL_QUADS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.3f);
	glVertex2f(+0.4f, 0.3f);
    glVertex2f(+0.4f, -0.4f);
	glVertex2f(-0.4f, -0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(-0.1f, 0.1f);
	glVertex2f(+0.1f, 0.1f);
    glVertex2f(+0.1f, -0.4f);
	glVertex2f(-0.1f, -0.4f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(+0.15f, -0.0f);
	glVertex2f(+0.3f, -0.0f);
    glVertex2f(+0.3f, -0.15f);
	glVertex2f(+0.15f, -0.15f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.15f, -0.0f);
	glVertex2f(-0.3f, -0.0f);
    glVertex2f(-0.3f, -0.15f);
	glVertex2f(-0.15f, -0.15f);
	glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("House");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	initGL();
	glutMainLoop();
	return 0;
}
