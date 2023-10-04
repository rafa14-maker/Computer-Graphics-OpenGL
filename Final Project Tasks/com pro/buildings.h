void buildings()
{
    glPushMatrix();
    glTranslatef(0.0f,0.10f,0.0f);
    glScalef(0.9f,0.8f,0.8f);
    // building left 1
            //structure
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.98f,0.75f,0.62f);
            glVertex2f(-0.569f, 0.706f);
            glVertex2f(-0.569f, 0.8f);
            glVertex2f(-0.629f, 0.8f);
            glVertex2f(-0.629f, 0.709f);
            glVertex2f(-0.642f, 0.709f);
            glVertex2f(-0.642f, -0.057f);
            glVertex2f(-0.553f, -0.057f);
            glVertex2f(-0.553f, 0.706f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.64f,0.51f,0.44f);
            glVertex2f(-0.553f, 0.706f);
            glVertex2f(-0.569f, 0.706f);
            glVertex2f(-0.569f, 0.8f);
            glVertex2f(-0.551f, 0.8f);
            glVertex2f(-0.551f, 0.709f);
            glVertex2f(-0.540f, 0.709f);
            glVertex2f(-0.540f, -0.057f);
            glVertex2f(-0.553f, -0.057f);
            glEnd();


            //glass
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.24f,0.76f,0.74f);
            glVertex2f(-0.569f, 0.67f);
            glVertex2f(-0.569f, -0.022f);
            glVertex2f(-0.558f, -0.022f);
            glVertex2f(-0.558f, 0.67f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.24f,0.76f,0.74f);
            glVertex2f(-0.638f, 0.67f);
            glVertex2f(-0.638f, -0.022f);
            glVertex2f(-0.627f, -0.022f);
            glVertex2f(-0.627f, 0.67f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.65f,0.51f,0.33f);
            glVertex2f(-0.622f, 0.777f);
            glVertex2f(-0.622f, -0.038f);
            glVertex2f(-0.611f, -0.038f);
            glVertex2f(-0.611f, 0.777f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.65f,0.51f,0.33f);
            glVertex2f(-0.586f, 0.777f);
            glVertex2f(-0.586f, -0.038f);
            glVertex2f(-0.575f, -0.038f);
            glVertex2f(-0.575f, 0.777f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.77f,0.61f,0.50f);
            glVertex2f(-0.603f, 0.777f);
            glVertex2f(-0.603f, -0.038f);
            glVertex2f(-0.592f, -0.038f);
            glVertex2f(-0.592f, 0.777f);
            glEnd();


 //building left 2
            //structure
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.98f,0.93f,0.66f);
            glVertex2f(-0.433f, -0.057f);
            glVertex2f(-0.433f, 0.306f);
            glVertex2f(-0.507f, 0.306f);
            glVertex2f(-0.507f, -0.057f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.46f,0.45f,0.26f);
            glVertex2f(-0.420f, 0.306f);
            glVertex2f(-0.420f, -0.057f);
            glVertex2f(-0.433f, -0.057f);
            glVertex2f(-0.433f, 0.306f);
            glEnd();

            //tower
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.53f,0.54f,0.55f);
            glVertex2f(-0.491f, 0.310f);
            glVertex2f(-0.491f, 0.342f);
            glVertex2f(-0.471f, 0.342f);
            glVertex2f(-0.471f, 0.310f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.53f,0.54f,0.55f);
            glVertex2f(-0.482f, 0.342f);
            glVertex2f(-0.482f, 0.433f);
            glVertex2f(-0.478f, 0.314f);
            glEnd();


            //glass
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.22f,0.74f,0.73f);
            glVertex2f(-0.502f, 0.291f);
            glVertex2f(-0.502f, 0.239f);
            glVertex2f(-0.440f, 0.239f);
            glVertex2f(-0.440f, 0.291f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.22f,0.74f,0.73f);
            glVertex2f(-0.502f, 0.176f);
            glVertex2f(-0.440f, 0.176f);
            glVertex2f(-0.440f, 0.227f);
            glVertex2f(-0.502f, 0.227f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.22f,0.74f,0.73f);
            glVertex2f(-0.502f, 0.164f);
            glVertex2f(-0.502f, 0.117f);
            glVertex2f(-0.440f, 0.117f);
            glVertex2f(-0.440f, 0.164f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.22f,0.74f,0.73f);
            glVertex2f(-0.502f, 0.097f);
            glVertex2f(-0.502f, 0.049f);
            glVertex2f(-0.440f, 0.049f);
            glVertex2f(-0.440f, 0.097f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.22f,0.74f,0.73f);
            glVertex2f(-0.484f, -0.057f);
            glVertex2f(-0.484f, 0.038f);
            glVertex2f(-0.451f, 0.038f);
            glVertex2f(-0.451f, -0.057f);
            glEnd();

//building left 3
            //structure
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.80f,0.91f,0.83f);
            glVertex2f(-0.304f, 0.5f);
            glVertex2f(-0.304f, -0.05f);
            glVertex2f(-0.390f, -0.05f);
            glVertex2f(-0.390f, 0.5f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.44f,0.47f,0.42f);
            glVertex2f(-0.296f, -0.05f);
            glVertex2f(-0.296f, 0.5f);
            glVertex2f(-0.304f, 0.5f);
            glVertex2f(-0.304f, -0.05f);
            glEnd();

            //glass
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.04f,0.24f,0.24f);
            glVertex2f(-0.364f, -0.049f);
            glVertex2f(-0.382f, -0.049f);
            glVertex2f(-0.382f, 0.496f);
            glVertex2f(-0.364f, 0.496f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.04f,0.24f,0.24f);
            glVertex2f(-0.313f, -0.049f);
            glVertex2f(-0.313f, 0.496f);
            glVertex2f(-0.329f, 0.496f);
            glVertex2f(-0.329f, -0.049f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.04f,0.24f,0.24f);
            glVertex2f(-0.344f, -0.049f);
            glVertex2f(-0.344f, 0.496f);
            glVertex2f(-0.351f, 0.496f);
            glVertex2f(-0.351f, -0.049f);
            glEnd();



//building left 4
            //glass
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.02f,0.48f,0.49f);
            glVertex2f(-0.260f, -0.038f);
            glVertex2f(-0.260f, 0.717f);
            glVertex2f(-0.024f, 0.717f);
            glVertex2f(-0.024f, -0.042f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.03f,0.35f,0.37f);
            glVertex2f(-0.009f, 0.713f);
            glVertex2f(-0.009f, -0.038f);
            glVertex2f(-0.024f, -0.038f);
            glVertex2f(-0.024f, 0.717f);
            glEnd();

            //structure
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.89f,0.90f,0.85f);
            glVertex2f(-0.273f, 0.737f);
            glVertex2f(-0.273f, 0.674f);
            glVertex2f(-0.011f, 0.674f);
            glVertex2f(-0.011f, 0.737f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.89f,0.90f,0.85f);
            glVertex2f(-0.273f, 0.623f);
            glVertex2f(-0.276f, 0.623f);
            glVertex2f(-0.276f, 0.571f);
            glVertex2f(-0.007f, 0.623f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.89f,0.90f,0.85f);
            glVertex2f(-0.273f, 0.52f);
            glVertex2f(-0.276f, 0.524f);
            glVertex2f(-0.276f, 0.453f);
            glVertex2f(-0.007f, 0.453f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.89f,0.90f,0.85f);
            glVertex2f(-0.273f, 0.401f);
            glVertex2f(-0.007f, 0.354f);
            glVertex2f(-0.007f, 0.401f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.89f,0.90f,0.85f);
            glVertex2f(-0.273f, 0.247f);
            glVertex2f(-0.007f, 0.247f);
            glVertex2f(-0.007f, 0.298f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.89f,0.90f,0.85f);
            glVertex2f(-0.273f, 0.188f);
            glVertex2f(-0.273f, 0.188f);
            glVertex2f(-0.273f, 0.132f);
            glVertex2f(-0.007f, 0.188f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.89f,0.90f,0.85f);
            glVertex2f(-0.273f, 0.081f);
            glVertex2f(-0.273f, 0.03f);
            glVertex2f(-0.007f, 0.03f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.89f,0.90f,0.85f);
            glVertex2f(-0.276f, -0.022f);
            glVertex2f(-0.276f, -0.053f);
            glVertex2f(-0.009f, -0.053f);
            glVertex2f(-0.009f, -0.022f);
            glEnd();

//building left 5
            //structure
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.14f,0.52f,0.64f);
            glVertex2f(0.027f, 0.294f);
            glVertex2f(0.142f, 0.294f);
            glVertex2f(0.142f, -0.049f);
            glVertex2f(0.027f, -0.049f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.21f,0.38f,0.45f);
            glVertex2f(0.142f, 0.294f);
            glVertex2f(0.158f, 0.334f);
            glVertex2f(0.158f, -0.049f);
            glVertex2f(0.142f, -0.049f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.64f,0.84f,0.92f);
            glVertex2f(0.044f, 0.334f);
            glVertex2f(0.160f, 0.334f);
            glVertex2f(0.142f, 0.294f);
            glVertex2f(0.027f, 0.294f);
            glEnd();


            //glass
            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.044f, -0.049f);
                glVertex2f(0.044f, 0.294f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.073f, -0.049f);
                glVertex2f(0.073f, 0.294f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.1f, -0.049f);
                glVertex2f(0.1f, 0.294f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.131f, -0.049f);
                glVertex2f(0.131f, 0.294f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.031f, 0.261f);
                glVertex2f(0.142f, 0.261f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.031f, 0.202f);
                glVertex2f(0.142f, 0.202f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.031f, 0.166f);
                glVertex2f(0.142f, 0.166f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.031f, 0.103f);
                glVertex2f(0.142f, 0.103f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.031f, 0.067f);
                glVertex2f(0.142f, 0.067f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.031f, 0.004f);
                glVertex2f(0.142f, 0.004f);
            glEnd();



//building left 6
            //structure
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.35f,0.38f,0.42f);
            glVertex2f(0.193f, 0.374f);
            glVertex2f(0.193f, 0.334f);
            glVertex2f(0.251f, 0.334f);
            glVertex2f(0.251f, 0.374f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.22f,0.23f,0.28f);
            glVertex2f(0.251f, 0.374f);
            glVertex2f(0.251f, 0.322f);
            glVertex2f(0.262f, 0.322f);
            glVertex2f(0.262f, 0.374f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.82f,0.85f,0.67f);
            glVertex2f(0.258f, 0.536f);
            glVertex2f(0.184f, 0.536f);
            glVertex2f(0.184f, 0.37f);
            glVertex2f(0.258f, 0.37f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.82f,0.85f,0.67f);
            glVertex2f(0.258f, 0.334f);
            glVertex2f(0.184f, 0.334f);
            glVertex2f(0.184f, -0.057f);
            glVertex2f(0.258f, -0.057f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.63f,0.48f,0.26f);
            glVertex2f(0.258f, 0.536f);
            glVertex2f(0.258f, 0.366f);
            glVertex2f(0.269f, 0.366f);
            glVertex2f(0.269f, 0.536f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.63f,0.48f,0.26f);
            glVertex2f(0.258f, 0.334f);
            glVertex2f(0.258f, -0.057f);
            glVertex2f(0.271f, -0.057f);
            glVertex2f(0.271f, 0.334f);
            glEnd();


            //glass
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.27f,0.74f,0.72f);
            glVertex2f(0.189f, 0.512f);
            glVertex2f(0.189f, 0.476f);
            glVertex2f(0.251f, 0.476f);
            glVertex2f(0.251f, 0.512f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.27f,0.74f,0.72f);
            glVertex2f(0.251f, 0.453f);
            glVertex2f(0.189f, 0.453f);
            glVertex2f(0.189f, 0.445f);
            glVertex2f(0.251f, 0.445f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.27f,0.74f,0.72f);
            glVertex2f(0.251f, 0.421f);
            glVertex2f(0.189f, 0.421f);
            glVertex2f(0.189f, 0.385f);
            glVertex2f(0.251f, 0.385f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.27f,0.74f,0.72f);
            glVertex2f(0.196f, 0.318f);
            glVertex2f(0.189f, 0.318f);
            glVertex2f(0.189f, -0.034f);
            glVertex2f(0.196f, -0.034f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.27f,0.74f,0.72f);
            glVertex2f(0.209f, 0.318f);
            glVertex2f(0.202f, 0.318f);
            glVertex2f(0.202f, -0.018f);
            glVertex2f(0.209f, -0.018f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.27f,0.74f,0.72f);
            glVertex2f(0.218f, 0.318f);
            glVertex2f(0.218f, -0.018f);
            glVertex2f(0.225f, -0.018f);
            glVertex2f(0.225f, 0.318f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.27f,0.74f,0.72f);
            glVertex2f(0.231f, 0.318f);
            glVertex2f(0.231f, -0.018f);
            glVertex2f(0.238f, -0.018f);
            glVertex2f(0.238f, 0.318f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.27f,0.74f,0.72f);
            glVertex2f(0.244f, 0.318f);
            glVertex2f(0.244f, -0.034f);
            glVertex2f(0.252f, -0.034f);
            glVertex2f(0.252f, 0.318f);
            glEnd();


//building left 7

            //structure
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.89f,0.88f,0.84f);
            glVertex2f(0.309f, 0.875f);
            glVertex2f(0.309f, 0.583f);
            glVertex2f(0.382f, 0.583f);
            glVertex2f(0.382f, 0.875f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.89f,0.88f,0.84f);
            glVertex2f(0.300f, 0.583f);
            glVertex2f(0.300f, 0.294f);
            glVertex2f(0.389f, 0.294f);
            glVertex2f(0.389f, 0.583f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.89f,0.88f,0.84f);
            glVertex2f(0.291f, 0.294f);
            glVertex2f(0.291f, -0.053f);
            glVertex2f(0.398f, -0.053f);
            glVertex2f(0.398f, 0.294f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.47f,0.47f,0.43f);
            glVertex2f(0.382f, 0.583f);
            glVertex2f(0.389f, 0.583f);
            glVertex2f(0.389f, 0.875f);
            glVertex2f(0.382f, 0.875f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.47f,0.47f,0.43f);
            glVertex2f(0.398f, 0.583f);
            glVertex2f(0.389f, 0.583f);
            glVertex2f(0.389f, 0.294f);
            glVertex2f(0.398f, 0.294f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.47f,0.47f,0.43f);
            glVertex2f(0.398f, 0.294f);
            glVertex2f(0.398f, -0.053f);
            glVertex2f(0.407f, -0.053f);
            glVertex2f(0.407f, 0.294f);
            glEnd();


            //glass
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.21f,0.47f,0.45f);
            glVertex2f(0.331f, 0.583f);
            glVertex2f(0.331f, 0.875f);
            glVertex2f(0.316f, 0.875f);
            glVertex2f(0.316f, 0.583f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.21f,0.47f,0.45f);
            glVertex2f(0.361f, 0.875f);
            glVertex2f(0.361f, 0.583f);
            glVertex2f(0.374f, 0.583f);
            glVertex2f(0.374f, 0.875f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.21f,0.47f,0.45f);
            glVertex2f(0.307f, 0.583f);
            glVertex2f(0.307f, 0.291f);
            glVertex2f(0.327f, 0.291f);
            glVertex2f(0.327f, 0.583f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.21f,0.47f,0.45f);
            glVertex2f(0.381f, 0.291f);
            glVertex2f(0.381f, 0.583f);
            glVertex2f(0.364f, 0.583f);
            glVertex2f(0.364f, 0.291f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.21f,0.47f,0.45f);
            glVertex2f(0.324f, -0.049f);
            glVertex2f(0.324f, 0.294f);
            glVertex2f(0.300f, 0.294f);
            glVertex2f(0.300f, -0.049f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.21f,0.47f,0.45f);
            glVertex2f(0.368f, 0.294f);
            glVertex2f(0.368f, -0.05f);
            glVertex2f(0.390f, -0.05f);
            glVertex2f(0.390f, 0.294f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.17f,0.34f,0.35f);
            glVertex2f(0.354f, 0.875f);
            glVertex2f(0.340f, 0.875f);
            glVertex2f(0.340f, -0.05f);
            glVertex2f(0.354f, -0.05f);
            glEnd();


//building left 8

            //glass
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.10f,0.44f,0.43f);
            glVertex2f(0.498f, 0.31f);
            glVertex2f(0.433f, 0.31f);
            glVertex2f(0.433f, -0.049f);
            glVertex2f(0.498f, -0.049f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.33f,0.48f,0.45f);
            glVertex2f(0.496f, 0.31f);
            glVertex2f(0.496f, -0.049f);
            glVertex2f(0.503f, -0.049f);
            glVertex2f(0.503f, 0.31f);
            glEnd();


            //structure
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.80f,0.91f,0.83f);
            glVertex2f(0.433f, -0.045f);
            glVertex2f(0.496f, -0.045f);
            glVertex2f(0.433f, 0.31f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.80f,0.91f,0.83f);
            glVertex2f(0.491f, 0.306f);
            glVertex2f(0.491f, 0.215f);
            glVertex2f(0.451f, 0.306f);
            glEnd();



//building left 9
            //structure
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.57f,0.72f,0.44f);
            glVertex2f(0.604f, 0.445f);
            glVertex2f(0.527f, 0.445f);
            glVertex2f(0.527f, -0.049f);
            glVertex2f(0.604f, -0.049f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.02f,0.35f,0.35f);
            glVertex2f(0.604f, 0.445f);
            glVertex2f(0.604f, -0.049f);
            glVertex2f(0.615f, -0.049f);
            glVertex2f(0.615f, 0.445f);
            glEnd();

            //glass
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.35f,0.36f,0.42f);
            glVertex2f(0.533f, 0.425f);
            glVertex2f(0.533f, 0.366f);
            glVertex2f(0.564f, 0.366f);
            glVertex2f(0.564f, 0.425f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.35f,0.36f,0.42f);
            glVertex2f(0.533f, 0.346f);
            glVertex2f(0.533f, 0.16f);
            glVertex2f(0.564f, 0.16f);
            glVertex2f(0.564f, 0.346f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.35f,0.36f,0.42f);
            glVertex2f(0.573f, 0.208f);
            glVertex2f(0.573f, -0.014f);
            glVertex2f(0.598f, -0.014f);
            glVertex2f(0.598f, 0.208f);
            glEnd();

        glPopMatrix();
}
