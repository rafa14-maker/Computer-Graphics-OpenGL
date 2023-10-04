void bird1()
{
        glPushMatrix();
        glTranslatef(0.75f,0.75f,0.0f);
        glScalef(0.3f,0.3f,0.3f);

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.28f,0.25f,0.22f);
            glVertex2f(0.046f, 0.01f);
            glVertex2f(0.040f, -0.002f);
            glVertex2f(0.077f, 0.125f);
            glVertex2f(0.157f, 0.204f);
            glVertex2f(0.280f, 0.306f);
            glVertex2f(0.222f, 0.196f);
            glVertex2f(0.182f, 0.152f);
            glVertex2f(0.142f, 0.097f);
            glVertex2f(0.109f, 0.018f);
            glVertex2f(0.082f, -0.042f);
            glVertex2f(0.095f, -0.073f);
            glVertex2f(0.120f, -0.097f);
            glVertex2f(0.144f, -0.101f);
            glVertex2f(0.135f, -0.117f);
            glVertex2f(0.102f, -0.113f);
            glVertex2f(0.082f, -0.109f);
            glVertex2f(0.033f, -0.121f);
            glVertex2f(0.009f, -0.121f);
            glVertex2f(-0.011f, -0.101f);
            glVertex2f(-0.029f, -0.081f);
            glVertex2f(-0.045f, -0.073f);
            glVertex2f(-0.071f, -0.069f);
            glVertex2f(-0.049f, -0.049f);
            glVertex2f(-0.047f, -0.038f);
            glVertex2f(-0.018f, -0.03f);
            glVertex2f(-0.040f, 0.038f);
            glVertex2f(-0.063f, 0.073f);
            glVertex2f(-0.096f, 0.136f);
            glVertex2f(-0.163f, 0.219f);
            glVertex2f(-0.089f, 0.176f);
            glVertex2f(-0.045f, 0.156f);
            glVertex2f(0.000f, 0.101f);
            glEnd();
      glPopMatrix();
}
