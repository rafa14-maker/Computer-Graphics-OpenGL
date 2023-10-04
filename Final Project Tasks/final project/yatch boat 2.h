void yatchBoat2()
{
    glPushMatrix();
    glTranslatef(-0.55f,-0.25f,0.0f);
    glScalef(0.5f,0.4f,0.4f);


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.25f,0.23f,0.31f);
            glVertex2f(-0.405f, 0.291f);
            glVertex2f(-0.412f, 0.346f);    // upper window black left
            glVertex2f(-0.409f, 0.346f);
            glVertex2f(-0.156f, 0.358f);
            glVertex2f(-0.134f, 0.271f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.25f,0.23f,0.31f);
            glVertex2f(-0.523f, 0.188f);
            glVertex2f(-0.520f, 0.192f);
            glVertex2f(-0.483f, 0.188f);    // 2nd layer left , mid glass
            glVertex2f(-0.512f, 0.062f);
            glVertex2f(-0.556f, 0.062f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.25f,0.23f,0.31f);
            glVertex2f(-0.263f, 0.18f);
            glVertex2f(-0.065f, 0.176f);    // 2nd layer mid glass right
            glVertex2f(-0.040f, 0.101f);
            glVertex2f(-0.263f, 0.089f);
            glVertex2f(-0.263f, 0.18f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.39f,0.36f,0.46f);
            glVertex2f(-0.132f, 0.271f);
            glVertex2f(-0.156f, 0.358f);// upper window right
            glVertex2f(-0.160f, 0.358f);
            glVertex2f(-0.065f, 0.366f);
            glVertex2f(-0.040f, 0.271f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.39f,0.36f,0.46f);
            glVertex2f(-0.483f, 0.188f);
            glVertex2f(-0.329f, 0.18f);     // 2nd layer left , mid, window
            glVertex2f(-0.338f, 0.078f);
            glVertex2f(-0.516f, 0.062f);
            glVertex2f(-0.487f, 0.188f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.39f,0.36f,0.46f);
            glVertex2f(-0.043f, 0.101f);
            glVertex2f(-0.063f, 0.172f);    //2nd layer right glass
            glVertex2f(-0.063f, 0.172f);
            glVertex2f(0.048f, 0.172f);
            glVertex2f(0.080f, 0.109f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.1f,0.6f,1.0f);
            glVertex2f(-0.400f, 0.287f);
            glVertex2f(-0.038f, 0.271f);
            glVertex2f(-0.032f, 0.228f);
            glVertex2f(-0.467f, 0.271f);    // top layer
            glVertex2f(-0.472f, 0.271f);
            glVertex2f(-0.454f, 0.366f);
            glVertex2f(-0.078f, 0.406f);
            glVertex2f(-0.072f, 0.366f);
            glVertex2f(-0.412f, 0.346f);
            glEnd();



            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.98f,0.98f,0.98f);
            glVertex2f(-0.843f, -0.254f);
            glVertex2f(0.224f, -0.254f);        //lower left ash
            glVertex2f(0.177f, -0.345f);
            glVertex2f(-0.854f, -0.345f);
            glVertex2f(-0.845f, -0.247f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.98f,0.98f,0.98f);
            glVertex2f(-0.274f, 0.042f);
            glVertex2f(-0.374f, 0.022f);
            glVertex2f(-0.432f, 0.01f);
            glVertex2f(-0.529f, -0.005f);
            glVertex2f(-0.583f, -0.017f);
            glVertex2f(-0.716f, -0.057f);
            glVertex2f(-0.760f, -0.069f);
            glVertex2f(-0.794f, -0.084f);
            glVertex2f(-0.809f, -0.1f);
            glVertex2f(-0.820f, -0.124f);
            glVertex2f(-0.823f, -0.144f);   // mid part left
            glVertex2f(-0.832f, -0.167f);
            glVertex2f(-0.834f, -0.199f);
            glVertex2f(-0.838f, -0.227f);
            glVertex2f(-0.834f, -0.219f);
            glVertex2f(0.244f, -0.215f);
            glVertex2f(0.282f, -0.144f);
            glVertex2f(0.315f, -0.077f);
            glVertex2f(0.355f, -0.001f);
            glVertex2f(0.377f, 0.058f);
            glVertex2f(0.391f, 0.097f);
            glVertex2f(0.240f, 0.101f);
            glVertex2f(0.128f, 0.089f);
            glVertex2f(0.044f, 0.082f);
            glVertex2f(-0.029f, 0.074f);
            glVertex2f(-0.096f, 0.07f);
            glVertex2f(-0.178f, 0.058f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.9f,0.9f,0.9f);
            glVertex2f(0.337f, -0.041f);
            glVertex2f(0.302f, -0.108f);
            glVertex2f(0.260f, -0.179f);
            glVertex2f(0.244f, -0.207f);
            glVertex2f(0.233f, -0.223f);
            glVertex2f(0.337f, -0.223f);
            glVertex2f(0.382f, -0.136f);        // mid right part ash
            glVertex2f(0.422f, -0.049f);
            glVertex2f(0.446f, 0.018f);
            glVertex2f(0.457f, 0.078f);
            glVertex2f(0.460f, 0.093f);
            glVertex2f(0.384f, 0.089f);
            glVertex2f(0.382f, 0.093f);
            glVertex2f(0.362f, 0.018f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.90f,0.90f,0.90f);
            glVertex2f(0.222f, -0.254f);
            glVertex2f(0.182f, -0.345f);
            glVertex2f(0.177f, -0.345f);    // lower right part
            glVertex2f(0.268f, -0.345f);
            glVertex2f(0.322f, -0.254f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(1.0f,0.0f,0.0f);
            glVertex2f(-0.838f, -0.219f);
            glVertex2f(0.333f, -0.227f);
            glVertex2f(0.317f, -0.258f);        //lower yellow divider
            glVertex2f(-0.845f, -0.254f);
            glVertex2f(-0.845f, -0.247f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.89f,0.98f,0.49f);
            glVertex2f(-0.740f, -0.057f);
            glVertex2f(-0.738f, -0.061f);   // back wing left
            glVertex2f(-0.798f, 0.129f);
            glVertex2f(-0.720f, 0.133f);
            glVertex2f(-0.629f, -0.025f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.89f,0.98f,0.49f);
            glVertex2f(-0.665f, 0.121f);
            glVertex2f(-0.567f, -0.009f);   // back wing right
            glVertex2f(-0.629f, -0.029f);
            glVertex2f(-0.709f, 0.121f);
            glVertex2f(-0.712f, 0.121f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(1.0f,0.0f,0.0f);
            glVertex2f(-0.743f, 0.161f);
            glVertex2f(-0.805f, 0.161f);     // back wing left top
            glVertex2f(-0.798f, 0.129f);
            glVertex2f(-0.718f, 0.129f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(1.0f,0.1f,0.06f);
            glVertex2f(-0.709f, 0.117f);
            glVertex2f(-0.663f, 0.117f);         // back wing right top
            glVertex2f(-0.685f, 0.141f);
            glVertex2f(-0.723f, 0.141f);
            glVertex2f(-0.734f, 0.153f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.98f,0.98f,0.98f);
            glVertex2f(-0.332f, 0.18f);
            glVertex2f(-0.485f, 0.192f);
            glVertex2f(-0.472f, 0.271f);
            glVertex2f(-0.467f, 0.271f);
            glVertex2f(0.017f, 0.22f);
            glVertex2f(0.035f, 0.172f);     // mid layer
            glVertex2f(-0.267f, 0.18f);
            glVertex2f(-0.265f, 0.089f);
            glVertex2f(-0.143f, 0.097f);
            glVertex2f(-0.138f, 0.089f);
            glVertex2f(-0.267f, 0.07f);
            glVertex2f(-0.407f, 0.038f);
            glVertex2f(-0.518f, 0.014f);
            glVertex2f(-0.512f, 0.058f);
            glVertex2f(-0.338f, 0.074f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.9f,0.9f,0.9f);
            glVertex2f(-0.556f, 0.058f);
            glVertex2f(-0.567f, 0.002f);
            glVertex2f(-0.576f, -0.001f);       // mid layer left ash part lower
            glVertex2f(-0.518f, 0.01f);
            glVertex2f(-0.512f, 0.058f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.9f,0.9f,0.9f);
            glVertex2f(-0.485f, 0.192f);
            glVertex2f(-0.467f, 0.275f);    // mid layer left ash part , mid
            glVertex2f(-0.512f, 0.259f);
            glVertex2f(-0.529f, 0.18f);
            glVertex2f(-0.483f, 0.192f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.1f,0.6f,1.0f);
            glVertex2f(-0.265f, 0.042f);
            glVertex2f(-0.407f, 0.014f);
            glVertex2f(-0.516f, -0.005f);
            glVertex2f(-0.583f, -0.021f);
            glVertex2f(-0.574f, 0.01f);
            glVertex2f(-0.574f, 0.002f);
            glVertex2f(-0.518f, 0.018f);    // mid yellow divider
            glVertex2f(-0.400f, 0.042f);
            glVertex2f(-0.267f, 0.07f);
            glVertex2f(-0.120f, 0.093f);
            glVertex2f(0.082f, 0.109f);
            glVertex2f(0.084f, 0.089f);
            glVertex2f(-0.074f, 0.07f);
            glVertex2f(-0.176f, 0.062f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.1f,0.6f,1.0f);
            glVertex2f(-0.467f, 0.275f);
            glVertex2f(-0.452f, 0.366f);        // mid layer left top ash
            glVertex2f(-0.518f, 0.271f);
            glVertex2f(-0.472f, 0.267f);
            glEnd();



            glBegin(GL_LINES);
            glColor3f(0.24f,0.24f,0.24f);
                glVertex2f(0.069f, -1.0*-0.126f);   // front border start
                glVertex2f(0.193f, -1.0*-0.138f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.24f,0.24f,0.24f);
                glVertex2f(0.193f, -1.0*-0.138f); // fb
                glVertex2f(0.336f, -1.0*-0.15f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.24f,0.24f,0.24f);
                glVertex2f(0.336f, -1.0*-0.15f);    // fb
                glVertex2f(0.471f, -1.0*-0.15f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.24f,0.24f,0.24f);
                glVertex2f(0.458f, -1.0*-0.091f);   // | starts
                glVertex2f(0.471f, -1.0*-0.15f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.24f,0.24f,0.24f);
                glVertex2f(0.104f, -1.0*-0.091f);
                glVertex2f(0.116f, -1.0*-0.134f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.24f,0.24f,0.24f);
                glVertex2f(0.144f, -1.0*-0.091f);
                glVertex2f(0.156f, -1.0*-0.13f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.24f,0.24f,0.24f);
                glVertex2f(0.191f, -1.0*-0.091f);
                glVertex2f(0.202f, -1.0*-0.138f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.24f,0.24f,0.24f);
                glVertex2f(0.236f, -1.0*-0.095f);
                glVertex2f(0.247f, -1.0*-0.146f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.24f,0.24f,0.24f);
                glVertex2f(0.276f, -1.0*-0.095f);
                glVertex2f(0.289f, -1.0*-0.154f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.24f,0.24f,0.24f);
                glVertex2f(0.322f, -1.0*-0.095f);
                glVertex2f(0.336f, -1.0*-0.15f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.24f,0.24f,0.24f);
                glVertex2f(0.358f, -1.0*-0.095f);
                glVertex2f(0.371f, -1.0*-0.15f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.24f,0.24f,0.24f);
                glVertex2f(0.398f, -1.0*-0.087f);
                glVertex2f(0.409f, -1.0*-0.15f);
            glEnd();
            glBegin(GL_LINES);
            glColor3f(0.24f,0.24f,0.24f);
                glVertex2f(0.424f, -1.0*-0.091f);
                glVertex2f(0.438f, -1.0*-0.154f);   // fb end
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.24f,0.38f,0.49f);
            glVertex2f(-0.267f, -0.385f);
            glVertex2f(-0.707f, -0.377f);
            glVertex2f(-0.856f, -0.361f);
            glVertex2f(-0.932f, -0.361f);
            glVertex2f(-0.972f, -0.353f);
            glVertex2f(-0.849f, -0.333f);
            glVertex2f(-0.856f, -0.333f);   // shadow water
            glVertex2f(-0.852f, -0.345f);
            glVertex2f(0.268f, -0.345f);
            glVertex2f(0.277f, -0.333f);
            glVertex2f(0.451f, -0.341f);
            glVertex2f(0.333f, -0.361f);
            glVertex2f(0.195f, -0.361f);
            glVertex2f(0.017f, -0.377f);
            glEnd();
      glPopMatrix();

}
