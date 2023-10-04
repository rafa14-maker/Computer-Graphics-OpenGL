void bench()
{
        glPushMatrix();
//       glTranslatef(0.0f,0.10f,0.0f);
//       glScalef(0.2f,0.2f,0.2f);
            glBegin(GL_TRIANGLE_FAN);   // bench start
            glColor3f(0.36f,0.31f,0.29f);
            glVertex2f(-0.407f, -0.536f);
            glVertex2f(-0.407f, -0.532f);  //left stick
            glVertex2f(-0.407f, -0.911f);
            glVertex2f(-0.392f, -0.911f);
            glVertex2f(-0.394f, -0.532f);
            glEnd();



            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.36f,0.31f,0.29f);
            glVertex2f(-0.023f, -0.536f);
            glVertex2f(-0.025f, -0.536f);
            glVertex2f(-0.029f, -0.899f);// right stick
            glVertex2f(-0.016f, -0.895f);
            glVertex2f(-0.012f, -0.536f);
            glEnd();



            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.36f,0.31f,0.29f);
            glVertex2f(-0.429f, -0.54f);
            glVertex2f(-0.432f, -0.544f); // row 1 -
            glVertex2f(0.013f, -0.544f);
            glVertex2f(0.013f, -0.603f);
            glVertex2f(-0.429f, -0.599f);
            glEnd();



            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.36f,0.31f,0.29f);
            glVertex2f(-0.432f, -0.619f);
            glVertex2f(-0.432f, -0.615f);// row 2 -
            glVertex2f(0.013f, -0.615f);
            glVertex2f(0.013f, -0.674f);
            glVertex2f(-0.434f, -0.674f);
            glEnd();




            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.36f,0.31f,0.29f);
            glVertex2f(-0.432f, -0.694f);
            glVertex2f(-0.432f, -0.686f); // row 3 --
            glVertex2f(0.013f, -0.69f);
            glVertex2f(0.015f, -0.741f);
            glVertex2f(-0.432f, -0.737f);
            glEnd();



            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.36f,0.31f,0.29f);
            glVertex2f(-0.438f, -0.765f);
            glVertex2f(-0.441f, -0.761f);// lower stick -
            glVertex2f(-0.441f, -0.785f);
            glVertex2f(0.024f, -0.785f);
            glVertex2f(0.024f, -0.765f);
            glEnd();



            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.36f,0.31f,0.29f);
            glVertex2f(-0.416f, -0.793f);
            glVertex2f(-0.416f, -0.777f);
            glVertex2f(-0.429f, -0.781f);// left lower stick
            glVertex2f(-0.432f, -0.785f);
            glVertex2f(-0.432f, -0.895f);
            glVertex2f(-0.418f, -0.895f);
            glEnd();



            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.36f,0.31f,0.29f);
            glVertex2f(-0.001f, -0.785f);
            glVertex2f(-0.001f, -0.895f); // right lower stick
            glVertex2f(0.013f, -0.895f);
            glVertex2f(0.011f, -0.777f);
            glVertex2f(-0.001f, -0.781f);
            glEnd();            //bench end

     glPopMatrix();
}
