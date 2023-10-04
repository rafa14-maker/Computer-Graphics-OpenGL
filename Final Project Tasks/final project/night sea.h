void nightSea()
{
        glPushMatrix();
    glTranslatef(0.0f,0.0f,0.0f);
     glScalef(1.6f,1.6f,1.6f);

//b1
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.18f,0.35f,0.49f);
            glVertex2f(-1.0f, -0.093f);
            glVertex2f(1.0f, -0.093f);
            glVertex2f(1.0f, -1.0f);
            glVertex2f(-1.0f, -1.0f);
            glEnd();
//b2
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.36f,0.67f,0.74f);
            glVertex2f(-1.0f, -0.268f);
            glVertex2f(1.0f, -0.228f);
            glVertex2f(1.0f, -1.0f);
            glVertex2f(-1.0f, -1.0f);
            glEnd();
//b3
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.64f,0.84f,0.88f);
            glVertex2f(-1.0f, -1.0f);
            glVertex2f(-1.0f, -0.394f);
            glVertex2f(1.0f, -0.319f);
            glVertex2f(1.0f, -1.0f);
            glEnd();
//b4
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.04f,0.16f,0.30f);
            glVertex2f(-1.0f, -1.0f);
            glVertex2f(-1.0f, -0.434f);
            glVertex2f(1.0f, -0.43f);
            glVertex2f(1.0f, -1.0f);
            glEnd();
//b5
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.05f,0.27f,0.44f);
            glVertex2f(1.0f, -1.0f);
            glVertex2f(-1.0f, -1.0f);
            glVertex2f(-1.0f, -0.60f);
            glVertex2f(1.0f, -0.43f);
            glEnd();
//b6
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.07f,0.38f,0.50f);
            glVertex2f(-1.0f, -0.62f);
            glVertex2f(1.0f, -0.62f);
            glVertex2f(1.0f, -1.0f);
            glVertex2f(-1.0f, -1.0f);
            glEnd();
//b7
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.04f,0.16f,0.30f);
            glVertex2f(1.0f, -0.625f);
            glVertex2f(-1.0f, -0.69f);
            glVertex2f(-1.0f, -1.0f);
            glVertex2f(1.0f, -1.0f);
            glEnd();
//b8
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.05f,0.27f,0.44f);
            glVertex2f(-1.0f, -1.0f);
            glVertex2f(1.0f, -1.0f);
            glVertex2f(1.0f, -0.72f);
            glVertex2f(-1.0f, -0.69f);
            glEnd();
//b9
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.04f,0.16f,0.30f);
            glVertex2f(-1.0f, -0.95f);
            glVertex2f(1.0f, -0.816f);
            glVertex2f(1.0f, -1.0f);
            glVertex2f(-1.0f, -1.0f);
            glEnd();

        glPopMatrix();

}
