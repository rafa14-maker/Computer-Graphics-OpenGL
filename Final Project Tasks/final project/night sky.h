void nightSky()
{
       glPushMatrix();
    glTranslatef(0.0f,0.0f,0.0f);
    glScalef(1.6f,1.6f,1.6f);

    ////////////////
//b1
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.04f,0.16f,0.30f);
            glVertex2f(-1.0f, 0.05f);
            glVertex2f(-1.0f, 1.0f);
            glVertex2f(1.0f, 1.0f);
            glVertex2f(1.0f, 0.05f);
            glEnd();
//b2
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.19f,0.25f,0.27f);
            glVertex2f(0.020f, 0.6f);
            glVertex2f(1.0f, 0.575f);
            glVertex2f(1.0f, 0.05f);
            glVertex2f(-1.0f, 0.05f);
            glVertex2f(-1.0f, 1.0f);
            glEnd();

//b3
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.34f,0.42f,0.46f);
            glVertex2f(-0.120f, 0.33f);
            glVertex2f(1.0f, 0.655f);
            glVertex2f(1.0f, -0.05f);
            glVertex2f(-1.0f, -0.05f);
            glVertex2f(-1.0f, 0.32f);
            glEnd();

        glPopMatrix();
//stars

        glPushMatrix();
        glPointSize(2.5);
        glTranslatef(0.10f,0.3f,0.0f);

            glBegin(GL_POINTS);
            glColor3f(1.0f,1.0f,1.0f);
            glVertex2f(0.142f, 0.587f);
            glVertex2f(-0.036f, 0.678f);
            glVertex2f(0.033f, 0.808f);
            glVertex2f(-0.033f, 0.86f);
            glVertex2f(-0.231f, 0.741f);
            glVertex2f(-0.149f, 0.642f);
            glVertex2f(-0.191f, 0.421f);
            glVertex2f(-0.069f, 0.417f);
            glVertex2f(-0.051f, 0.512f);
            glVertex2f(0.711f, 0.844f);
            glVertex2f(0.878f, 0.903f);
            glVertex2f(0.913f, 0.729f);
            glVertex2f(0.938f, 0.891f);
            glVertex2f(0.771f, 0.868f);
            glVertex2f(0.633f, 0.899f);
            glVertex2f(0.707f, 0.745f);
            glVertex2f(0.789f, 0.67f);
            glVertex2f(0.844f, 0.472f);
            glVertex2f(0.978f, 0.464f);
            glVertex2f(0.876f, 0.623f);
            glVertex2f(0.911f, 0.591f);
            glVertex2f(0.920f, 0.46f);
            glVertex2f(0.918f, 0.33f);
            glVertex2f(0.927f, 0.306f);
            glVertex2f(0.878f, 0.251f);
            glVertex2f(0.749f, 0.476f);
            glVertex2f(-0.891f, 0.962f);
            glVertex2f(-0.904f, 0.504f);
            glVertex2f(-0.936f, 0.298f);
            glVertex2f(-0.873f, 0.196f);
            glVertex2f(-0.751f, 0.425f);
            glVertex2f(-0.840f, 0.449f);
            glVertex2f(-0.862f, 0.46f);
            glVertex2f(-0.791f, 0.192f);
            glVertex2f(-0.920f, 0.911f);
            glVertex2f(-0.900f, 0.528f);
            glVertex2f(-0.653f, 0.856f);
            glVertex2f(-0.562f, 0.472f);
            glVertex2f(-0.342f, 0.097f);
            glVertex2f(0.042f, 0.429f);
            glVertex2f(0.087f, 0.753f);
            glVertex2f(0.511f, 0.879f);
            glVertex2f(0.580f, 0.449f);
            glVertex2f(0.222f, 0.709f);
            glVertex2f(-0.453f, 0.816f);
            glVertex2f(0.769f, 0.085f);
            glVertex2f(0.938f, 0.836f);
            glVertex2f(0.156f, 0.239f);
            glVertex2f(0.144f, 0.409f);
            glVertex2f(0.238f, 0.579f);
            glEnd();

        glPopMatrix();

}
