void lightStand()
{
        glPushMatrix();
//          glTranslatef(0.0f,0.10f,0.0f);
//          glScalef(0.2f,0.2f,0.2f);
            glBegin(GL_TRIANGLE_FAN);    // light stand start
            glColor3f(0.30f,0.25f,0.22f);
            glVertex2f(0.133f, -0.836f);
            glVertex2f(0.113f, -0.895f);
            glVertex2f(0.166f, -0.895f);    // lower stand
            glVertex2f(0.146f, -0.836f);
            glVertex2f(0.146f, -0.548f);
            glVertex2f(0.135f, -0.548f);
            glVertex2f(0.135f, -0.548f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(1.00f,0.93f,0.00f);
            glVertex2f(0.137f, -0.085f);
            glVertex2f(0.135f, -0.089f);
            glVertex2f(0.117f, 0.01f);      //light color
            glVertex2f(0.117f, 0.014f);
            glVertex2f(0.164f, 0.014f);
            glVertex2f(0.148f, -0.085f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.39f,0.33f,0.29f);
            glVertex2f(0.135f, -0.544f);
            glVertex2f(0.135f, -0.544f);
            glVertex2f(0.135f, -0.093f);        //under light stand
            glVertex2f(0.146f, -0.093f);
            glVertex2f(0.146f, -0.544f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.39f,0.33f,0.29f);
            glVertex2f(0.139f, 0.085f);
            glVertex2f(0.102f, 0.022f);     //top triangle cap
            glVertex2f(0.102f, 0.018f);
            glVertex2f(0.177f, 0.018f);
            glEnd();



            glBegin(GL_LINES);
            glColor3f(0.39f,0.33f,0.29f);
                glVertex2f(0.14f, -1.0*-0.016f);        //mid stick on light
                glVertex2f(0.14f, -1.0*0.099f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.39f,0.33f,0.29f);
                glVertex2f(0.144f, -1.0*0.091f);        //right stick on light
                glVertex2f(0.164f, -1.0*-0.024f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.39f,0.33f,0.29f);
                glVertex2f(0.136f, -1.0*0.095f);    //left stick on light
                glVertex2f(0.113f, -1.0*-0.02f);
            glEnd();        // light stand end
        glPopMatrix();
}
