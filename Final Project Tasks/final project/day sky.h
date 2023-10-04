void daySky()
{
    glPushMatrix();
    glTranslatef(0.0f,0.0f,0.0f);
    glScalef(1.6f,1.6f,1.6f);

    ////////////////
//b1
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.41f,0.77f,0.92f);
            glVertex2f(-1.0f, 0.05f);
            glVertex2f(-1.0f, 1.0f);
            glVertex2f(1.0f, 1.0f);
            glVertex2f(1.0f, 0.05f);
            glEnd();
//b2
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.59f,0.86f,0.95f);
            glVertex2f(0.020f, 0.6f);
            glVertex2f(1.0f, 0.575f);
            glVertex2f(1.0f, 0.05f);
            glVertex2f(-1.0f, 0.05f);
            glVertex2f(-1.0f, 1.0f);
            glEnd();

//b3
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.84f,0.98f,0.97f);
            glVertex2f(-0.120f, 0.33f);
            glVertex2f(1.0f, 0.655f);
            glVertex2f(1.0f, -0.05f);
            glVertex2f(-1.0f, -0.05f);
            glVertex2f(-1.0f, 0.32f);
            glEnd();
        glPopMatrix();

}
