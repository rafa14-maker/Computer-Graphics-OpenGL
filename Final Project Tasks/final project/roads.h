void roads()
{
    glPushMatrix();
    glTranslatef(0.0f,0.15f,0.0f);
    glScalef(1.4f,1.4f,1.4f);
    ////base
  glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.45f,0.46f,0.40f);
            glVertex2f(-1.0f, -0.016f);
            glVertex2f(-1.0f, -0.112f);
            glVertex2f(1.0f, -0.112f);
            glVertex2f(1.0f, -0.016f);
            glEnd();


////////////////roads
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.23f,0.23f,0.23f);
            glVertex2f(-1.0f, -0.192f);
            glVertex2f(-1.0f, -0.112f);
            glVertex2f(1.0f, -0.112f);
            glVertex2f(1.0f, -0.192f);
            glEnd();

            //SIDE borders
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.64f,0.64f,0.57f);
            glVertex2f(1.0f, -0.125f);
            glVertex2f(1.0f, -0.112f);
            glVertex2f(-1.0f, -0.112f);
            glVertex2f(-1.0f, -0.125f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.64f,0.64f,0.57f);
            glVertex2f(-1.0f, -0.192f);
            glVertex2f(-1.0f, -0.208f);
            glVertex2f(1.0f, -0.208f);
            glVertex2f(1.0f, -0.192f);
            glEnd();

            //mid borders
            glBegin(GL_LINES);
            glColor3f(0.91f,0.90f,0.85f);
                glVertex2f(-1.0f, -0.161f);
                glVertex2f(1.0f, -0.161f);
            glEnd();


//////beach
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.91f,0.87f,0.59f);
            glVertex2f(0.009f, -0.294f);
            glVertex2f(-0.104f, -0.314f);
            glVertex2f(-0.193f, -0.31f);
            glVertex2f(-0.253f, -0.279f);
            glVertex2f(-0.336f, -0.243f);
            glVertex2f(-0.391f, -0.239f);
            glVertex2f(-0.487f, -0.247f);
            glVertex2f(-0.604f, -0.291f);
            glVertex2f(-0.664f, -0.306f);
            glVertex2f(-0.707f, -0.302f);
            glVertex2f(-1.0f, -0.275f);
            glVertex2f(-1.0f, -0.208f);
            glVertex2f(1.0f, -0.208f);
            glVertex2f(1.0f, -0.283f);
            glVertex2f(0.538f, -0.259f);
            glVertex2f(0.498f, -0.269f);
            glVertex2f(0.433f, -0.294f);
            glVertex2f(0.376f, -0.318f);
            glVertex2f(0.336f, -0.306f);
            glVertex2f(0.262f, -0.283f);
            glVertex2f(0.224f, -0.275f);
            glVertex2f(0.173f, -0.275f);
            glEnd();

        glPopMatrix();
}
