void centerBoat()
{

    glPushMatrix();
    glTranslatef(0.0f,-0.30f,0.0f);
    glScalef(0.6f,0.7f,0.7f);
    //center boat
// deck

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.80f,0.85f,0.92f);
            glVertex2f(0.062f, -0.468f);
            glVertex2f(0.142f, -0.516f);
            glVertex2f(0.238f, -0.583f);
            glVertex2f(0.347f, -0.674f);
            glVertex2f(0.467f, -0.789f);
            glVertex2f(0.602f, -0.943f);
            glVertex2f(0.656f, -1.006f);
            glVertex2f(-0.678f, -1.002f);
            glVertex2f(-0.531f, -0.844f);
            glVertex2f(-0.400f, -0.713f);
            glVertex2f(-0.291f, -0.619f);
            glVertex2f(-0.202f, -0.551f);
            glVertex2f(-0.113f, -0.488f);
            glVertex2f(-0.038f, -0.453f);
            glVertex2f(-0.007f, -0.437f);
            glEnd();


// hatch
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.75f,0.77f,0.79f);
            glVertex2f(-0.004f, -0.484f);
            glVertex2f(-0.144f, -0.575f);
            glVertex2f(-0.273f, -0.702f);
            glVertex2f(0.238f, -0.702f);
            glVertex2f(0.107f, -0.567f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.75f,0.77f,0.79f);
            glVertex2f(-0.344f, -0.804f);
            glVertex2f(-0.064f, -0.804f);
            glVertex2f(-0.073f, -0.994f);
            glVertex2f(-0.424f, -1.002f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.75f,0.77f,0.79f);
            glVertex2f(0.318f, -0.808f);
            glVertex2f(0.380f, -1.006f);
            glVertex2f(-0.002f, -1.002f);
            glVertex2f(0.000f, -0.808f);
            glEnd();


/////left rail
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.30f,0.34f,0.38f);
            glVertex2f(-0.776f, -0.796f);
            glVertex2f(-0.971f, -1.006f);
            glVertex2f(-0.996f, -1.002f);
            glVertex2f(-1.002f, -0.99f);
            glVertex2f(-0.713f, -0.686f);
            glVertex2f(-0.580f, -0.555f);
            glVertex2f(-0.576f, -0.587f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.30f,0.34f,0.38f);
            glVertex2f(-0.396f, -0.417f);
            glVertex2f(-0.509f, -0.516f);
            glVertex2f(-0.580f, -0.591f);
            glVertex2f(-0.584f, -0.559f);
            glVertex2f(-0.498f, -0.476f);
            glVertex2f(-0.384f, -0.381f);
            glVertex2f(-0.300f, -0.318f);
            glVertex2f(-0.304f, -0.35f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.30f,0.34f,0.38f);
            glVertex2f(-0.231f, -0.294f);
            glVertex2f(-0.316f, -0.354f);
            glVertex2f(-0.304f, -0.322f);
            glVertex2f(-0.229f, -0.271f);
            glVertex2f(-0.156f, -0.231f);
            glVertex2f(-0.164f, -0.259f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.30f,0.34f,0.38f);
            glVertex2f(-0.053f, -0.208f);
            glVertex2f(-0.171f, -0.259f);
            glVertex2f(-0.164f, -0.239f);
            glVertex2f(-0.011f, -0.172f);
            glVertex2f(-0.011f, -0.208f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.29f,0.34f,0.38f);
            glVertex2f(-0.598f, -0.947f);
            glVertex2f(-0.613f, -0.955f);
            glVertex2f(-0.618f, -0.943f);
            glVertex2f(-0.511f, -0.52f);
            glVertex2f(-0.484f, -0.496f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.29f,0.34f,0.38f);
            glVertex2f(-0.227f, -0.595f);
            glVertex2f(-0.244f, -0.595f);
            glVertex2f(-0.164f, -0.243f);
            glVertex2f(-0.149f, -0.243f);
            glEnd();


////right rail


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.29f,0.34f,0.38f);
            glVertex2f(0.691f, -0.733f);
            glVertex2f(0.549f, -0.587f);
            glVertex2f(0.531f, -0.607f);
            glVertex2f(0.898f, -1.006f);
            glVertex2f(0.947f, -1.002f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.29f,0.34f,0.38f);
            glVertex2f(0.533f, -0.615f);
            glVertex2f(0.418f, -0.496f);
            glVertex2f(0.431f, -0.472f);
            glVertex2f(0.556f, -0.595f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.29f,0.34f,0.38f);
            glVertex2f(0.353f, -0.405f);
            glVertex2f(0.436f, -0.476f);
            glVertex2f(0.422f, -0.5f);
            glVertex2f(0.260f, -0.362f);
            glVertex2f(0.276f, -0.342f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.29f,0.34f,0.38f);
            glVertex2f(0.267f, -0.37f);
            glVertex2f(0.122f, -0.263f);
            glVertex2f(0.129f, -0.243f);
            glVertex2f(0.280f, -0.342f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.29f,0.34f,0.38f);
            glVertex2f(0.004f, -0.204f);
            glVertex2f(-0.020f, -0.204f);
            glVertex2f(-0.011f, -0.176f);
            glVertex2f(0.133f, -0.247f);
            glVertex2f(0.127f, -0.267f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.29f,0.34f,0.38f);
            glVertex2f(0.127f, -0.275f);
            glVertex2f(0.227f, -0.591f);
            glVertex2f(0.218f, -0.599f);
            glVertex2f(0.211f, -0.591f);
            glVertex2f(0.100f, -0.235f);
            glVertex2f(0.127f, -0.255f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.29f,0.34f,0.38f);
            glVertex2f(0.447f, -0.492f);
            glVertex2f(0.422f, -0.472f);
            glVertex2f(0.429f, -0.504f);
            glVertex2f(0.562f, -0.951f);
            glVertex2f(0.576f, -0.955f);
            glVertex2f(0.580f, -0.939f);
            glEnd();


// shadow

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.32f,0.43f,0.57f);
            glVertex2f(0.544f, -0.939f);
            glVertex2f(0.278f, -0.63f);
            glVertex2f(0.558f, -0.923f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.32f,0.43f,0.57f);
            glVertex2f(0.607f, -1.002f);
            glVertex2f(0.620f, -1.002f);
            glVertex2f(0.593f, -0.966f);
            glVertex2f(0.587f, -0.982f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.32f,0.43f,0.57f);
            glVertex2f(0.207f, -0.587f);
            glVertex2f(0.164f, -0.551f);
            glVertex2f(0.224f, -0.583f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.32f,0.43f,0.57f);
            glVertex2f(0.004f, -0.457f);
            glVertex2f(0.276f, -0.769f);
            glVertex2f(-0.018f, -0.453f);
            glEnd();

//mast

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.23f,0.22f,0.24f);
            glVertex2f(-0.016f, -0.457f);
            glVertex2f(-0.016f, 0.397f);
            glVertex2f(0.004f, 0.397f);
            glVertex2f(0.004f, -0.457f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.23f,0.22f,0.24f);
            glVertex2f(-0.002f, 0.5f);
            glVertex2f(0.004f, 0.393f);
            glVertex2f(-0.016f, 0.397f);
            glVertex2f(-0.011f, 0.5f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.23f,0.22f,0.24f);
            glVertex2f(-0.004f, 0.496f);
            glVertex2f(-0.011f, 0.492f);
            glVertex2f(-0.024f, 0.532f);
            glVertex2f(-0.007f, 0.555f);
            glVertex2f(0.007f, 0.532f);
            glEnd();

//deck ornaments
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.23f,0.22f,0.24f);
            glVertex2f(-0.184f, -0.678f);
            glVertex2f(-0.198f, -0.713f);
            glVertex2f(-0.167f, -0.713f);
            glVertex2f(-0.160f, -0.686f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.23f,0.22f,0.24f);
            glVertex2f(0.144f, -0.678f);
            glVertex2f(0.118f, -0.678f);
            glVertex2f(0.127f, -0.709f);
            glVertex2f(0.153f, -0.706f);
            glEnd();

        glPopMatrix();
}
