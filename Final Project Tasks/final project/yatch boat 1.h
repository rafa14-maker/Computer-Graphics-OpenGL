void yatchBoat1()
{
    glPushMatrix();
    glTranslatef(0.80f,-0.30f,0.0f);
    glScalef(0.3f,0.3f,0.3f);

            glBegin(GL_TRIANGLE_FAN);		// boat 1 start
            glColor3f(0.94f,0.93f,0.87f);
            glVertex2f(-0.247f, 0.168f);
            glVertex2f(-0.189f, 0.433f);
            glVertex2f(-0.109f, 0.824f);
            glVertex2f(-0.078f, 0.958f);
            glVertex2f(-0.154f, 0.524f);
            glVertex2f(-0.165f, 0.346f);    // pal  left, top
            glVertex2f(-0.167f, 0.215f);
            glVertex2f(-0.165f, 0.108f);
            glVertex2f(-0.418f, -0.623f);
            glVertex2f(-0.414f, -0.627f);
            glVertex2f(-0.365f, -0.386f);
            glVertex2f(-0.307f, -0.109f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(1.00f,0.99f,0.93f);
            glVertex2f(-0.221f, -0.571f);
            glVertex2f(-0.147f, -0.54f);
            glVertex2f(-0.069f, -0.488f);
            glVertex2f(-0.112f, -0.295f);
            glVertex2f(-0.141f, -0.121f); // pal  left, down
            glVertex2f(-0.158f, 0.049f);
            glVertex2f(-0.163f, 0.116f);
            glVertex2f(-0.416f, -0.623f);
            glVertex2f(-0.392f, -0.627f);
            glVertex2f(-0.414f, -0.635f);
            glVertex2f(-0.303f, -0.603f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.84f,0.24f,0.24f);
            glVertex2f(-0.323f, -0.864f);
            glVertex2f(0.455f, -0.812f);
            glVertex2f(0.453f, -0.753f);
            glVertex2f(0.448f, -0.714f);
            glVertex2f(0.444f, -0.682f);        // lower boat orange
            glVertex2f(-0.441f, -0.686f);
            glVertex2f(-0.445f, -0.682f);
            glVertex2f(-0.392f, -0.781f);
            glVertex2f(-0.356f, -0.844f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.40f,0.82f,1.00f);
            glVertex2f(0.268f, -0.484f);
            glVertex2f(0.344f, -0.52f);
            glVertex2f(0.386f, -0.469f);        // roof blue
            glVertex2f(0.302f, -0.425f);
            glVertex2f(0.197f, -0.429f);
            glVertex2f(0.168f, -0.488f);
            glVertex2f(0.168f, -0.492f);
            glEnd();

            // single line front border start

               glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.513f, -1.0*0.561f);
                glVertex2f(-0.442f, -1.0*0.696f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.513f, -1.0*0.561f);
                glVertex2f(-0.442f, -1.0*0.696f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.513f, -1.0*0.561f);
                glVertex2f(-0.442f, -1.0*0.696f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.511f, -1.0*0.561f);
                glVertex2f(-0.407f, -1.0*0.565f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.464f, -1.0*0.565f);
                glVertex2f(-0.444f, -1.0*0.672f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.456f, -1.0*0.672f);
                glVertex2f(0.16f, -1.0*0.664f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.16f, -1.0*0.664f);
                glVertex2f(0.171f, -1.0*0.625f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.171f, -1.0*0.625f);
                glVertex2f(0.422f, -1.0*0.636f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.424f, -1.0*0.636f);
                glVertex2f(0.431f, -1.0*0.684f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.384f, -1.0*0.47f);
                glVertex2f(0.411f, -1.0*0.64f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.342f, -1.0*0.522f);
                glVertex2f(0.351f, -1.0*0.636f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.198f, -1.0*0.494f);
                glVertex2f(0.218f, -1.0*0.632f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.167f, -1.0*0.49f);
                glVertex2f(0.176f, -1.0*0.569f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.209f, -1.0*0.561f);
                glVertex2f(-0.116f, -1.0*0.585f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.113f, -1.0*0.585f);
                glVertex2f(-0.156f, -1.0*0.668f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.424f, -1.0*0.676f);
                glVertex2f(-0.387f, -1.0*0.466f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.387f, -1.0*0.466f);
                glVertex2f(-0.307f, -1.0*0.091f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.307f, -1.0*0.095f);
                glVertex2f(-0.213f, -1.0*-0.348f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.213f, -1.0*-0.34f);
                glVertex2f(-0.147f, -1.0*-0.672f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.149f, -1.0*-0.664f);
                glVertex2f(-0.078f, -1.0*-0.976f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.078f, -1.0*-0.988f);
                glVertex2f(-0.064f, -1.0*0.585f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.031f, -1.0*0.581f);
                glVertex2f(-0.044f, -1.0*-0.992f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.044f, -1.0*-0.992f);
                glVertex2f(-0.078f, -1.0*-0.988f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.416f, -1.0*0.636f);
                glVertex2f(-0.293f, -1.0*0.601f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.293f, -1.0*0.601f);
                glVertex2f(-0.162f, -1.0*0.545f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.064f, -1.0*0.514f);
                glVertex2f(-0.071f, -1.0*0.498f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.071f, -1.0*0.498f);
                glVertex2f(-0.069f, -1.0*0.19f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.089f, -1.0*0.391f);
                glVertex2f(-0.107f, -1.0*0.32f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.107f, -1.0*0.32f);
                glVertex2f(-0.122f, -1.0*0.229f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.122f, -1.0*0.229f);
                glVertex2f(-0.144f, -1.0*0.103f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.142f, -1.0*0.107f);
                glVertex2f(-0.158f, -1.0*-0.063f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.158f, -1.0*-0.063f);
                glVertex2f(-0.164f, -1.0*-0.245f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.164f, -1.0*-0.245f);
                glVertex2f(-0.16f, -1.0*-0.368f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.16f, -1.0*-0.368f);
                glVertex2f(-0.151f, -1.0*-0.542f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.151f, -1.0*-0.542f);
                glVertex2f(-0.076f, -1.0*-0.96f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.4f, -1.0*0.632f);
                glVertex2f(-0.391f, -1.0*0.668f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.347f, -1.0*0.621f);
                glVertex2f(-0.327f, -1.0*0.672f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(1.00f,0.99f,0.93f);
            glVertex2f(0.089f, 0.101f);
            glVertex2f(0.031f, 0.397f);
            glVertex2f(0.004f, 0.611f);
            glVertex2f(-0.025f, 0.824f);
            glVertex2f(-0.043f, 0.982f);    // right pal
            glVertex2f(-0.027f, -0.457f);
            glVertex2f(-0.031f, -0.453f);
            glVertex2f(0.195f, -0.433f);
            glVertex2f(0.224f, -0.429f);
            glVertex2f(0.193f, -0.334f);
            glVertex2f(0.115f, -0.022f);
            glEnd();

            // border
            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.042f, -1.0*-0.976f);
                glVertex2f(0.018f, -1.0*-0.455f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.018f, -1.0*-0.458f);
                glVertex2f(0.056f, -1.0*-0.261f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.056f, -1.0*-0.261f);
                glVertex2f(0.096f, -1.0*-0.059f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.096f, -1.0*-0.059f);
                glVertex2f(0.156f, -1.0*0.19f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.156f, -1.0*0.19f);
                glVertex2f(0.224f, -1.0*0.435f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.031f, -1.0*0.462f);
                glVertex2f(0.224f, -1.0*0.431f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.169f, -1.0*0.494f);
                glVertex2f(0.191f, -1.0*0.435f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.224f, -1.0*0.431f);
                glVertex2f(0.304f, -1.0*0.427f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.304f, -1.0*0.427f);
                glVertex2f(0.391f, -1.0*0.47f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.171f, -1.0*0.498f);
                glVertex2f(0.273f, -1.0*0.486f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.273f, -1.0*0.486f);
                glVertex2f(0.347f, -1.0*0.526f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.344f, -1.0*0.526f);
                glVertex2f(0.389f, -1.0*0.466f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.44f, -1.0*0.7f);
                glVertex2f(-0.36f, -1.0*0.846f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.36f, -1.0*0.846f);
                glVertex2f(-0.318f, -1.0*0.87f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.318f, -1.0*0.87f);
                glVertex2f(0.451f, -1.0*0.814f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.451f, -1.0*0.814f);
                glVertex2f(0.453f, -1.0*0.775f);
            glEnd();


            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(0.444f, -1.0*0.684f);
                glVertex2f(0.453f, -1.0*0.779f);
            glEnd();



            glBegin(GL_LINES);
            glColor3f(0.00f,0.00f,0.00f);
                glVertex2f(-0.318f, -1.0*0.874f);
                glVertex2f(0.453f, -1.0*0.81f);
            glEnd();

        glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.33f,0.62f,0.71f);
            glVertex2f(-0.016f, -0.895f);
            glVertex2f(0.184f, -0.875f);
            glVertex2f(0.302f, -0.855f);
            glVertex2f(0.448f, -0.839f);
            glVertex2f(0.495f, -0.82f);
            glVertex2f(0.537f, -0.812f);    // water shadow
            glVertex2f(0.380f, -0.816f);
            glVertex2f(-0.318f, -0.867f);
            glVertex2f(-0.307f, -0.871f);
            glVertex2f(-0.416f, -0.887f);
            glVertex2f(-0.287f, -0.899f);
            glVertex2f(-0.154f, -0.891f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.07f,0.65f,0.85f);
            glVertex2f(0.166f, -0.669f);
            glVertex2f(0.173f, -0.622f);
            glVertex2f(0.415f, -0.63f);
            glVertex2f(0.426f, -0.638f); // mid blue
            glVertex2f(0.433f, -0.677f);
            glVertex2f(-0.440f, -0.689f);
            glVertex2f(-0.449f, -0.673f);
            glVertex2f(-0.452f, -0.669f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.93f,0.88f,0.21f);
            glVertex2f(0.162f, -0.658f);
            glVertex2f(-0.152f, -0.662f);
            glVertex2f(-0.149f, -0.658f);
            glVertex2f(-0.109f, -0.579f);   //yellow
            glVertex2f(0.211f, -0.559f);
            glVertex2f(0.222f, -0.618f);
            glVertex2f(0.173f, -0.622f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.49f,0.49f,0.47f);
            glVertex2f(-0.065f, -0.614f);
            glVertex2f(0.166f, -0.598f);    // window
            glVertex2f(0.166f, -0.63f);
            glVertex2f(-0.065f, -0.638f);
            glVertex2f(-0.065f, -0.614f);
            glEnd();					// boat 1 end

      glPopMatrix();
}
