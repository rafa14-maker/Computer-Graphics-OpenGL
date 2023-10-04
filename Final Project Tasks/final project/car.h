void car()
{

    glPushMatrix();
    glTranslatef(-0.55f,-0.01f,0.0f);
    glScalef(0.07f,0.06f,0.06f);

            glBegin(GL_TRIANGLE_FAN);       // CAR START
            glColor3f(0.70f,0.06f,0.10f);
            glVertex2f(-0.941f, 0.227f);
            glVertex2f(-0.956f, 0.112f);
            glVertex2f(-0.996f, 0.116f);
            glVertex2f(-0.987f, 0.251f);    // red light
            glVertex2f(-0.987f, 0.251f);
            glVertex2f(-0.869f, 0.314f);
            glVertex2f(-0.845f, 0.282f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.98f,0.93f,0.29f);
            glVertex2f(0.079f, 0.527f);
            glVertex2f(-0.021f, 0.551f);
            glVertex2f(-0.098f, 0.547f);
            glVertex2f(-0.274f, 0.524f);
            glVertex2f(-0.447f, 0.468f);
            glVertex2f(-0.612f, 0.401f);
            glVertex2f(-0.505f, 0.342f);
            glVertex2f(-0.407f, 0.302f);
            glVertex2f(-0.314f, 0.271f);
            glVertex2f(-0.327f, 0.207f);
            glVertex2f(-0.867f, 0.314f);        // upper hood
            glVertex2f(-0.869f, 0.314f);
            glVertex2f(-0.645f, 0.441f);
            glVertex2f(-0.429f, 0.531f);
            glVertex2f(-0.187f, 0.591f);
            glVertex2f(-0.092f, 0.603f);
            glVertex2f(-0.021f, 0.607f);
            glVertex2f(0.031f, 0.599f);
            glVertex2f(0.097f, 0.579f);
            glVertex2f(0.213f, 0.52f);
            glVertex2f(0.342f, 0.441f);
            glVertex2f(0.511f, 0.29f);
            glVertex2f(0.542f, 0.251f);
            glVertex2f(0.664f, 0.207f);
            glVertex2f(0.746f, 0.152f);
            glVertex2f(0.671f, 0.136f);
            glVertex2f(0.748f, 0.069f);
            glVertex2f(0.299f, 0.108f);
            glVertex2f(0.279f, 0.172f);
            glVertex2f(0.375f, 0.176f);
            glVertex2f(0.524f, 0.188f);
            glVertex2f(0.457f, 0.282f);
            glVertex2f(0.348f, 0.373f);
            glVertex2f(0.199f, 0.472f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.70f,0.06f,0.10f);
            glVertex2f(-0.856f, 0.073f);
            glVertex2f(-0.863f, 0.085f);    // back side light
            glVertex2f(-0.789f, 0.045f);
            glVertex2f(-0.829f, 0.01f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.94f,0.46f,0.14f);
            glVertex2f(0.711f, -0.061f);    // front side
            glVertex2f(0.704f, -0.058f);
            glVertex2f(0.744f, -0.046f);
            glVertex2f(0.719f, -0.085f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.54f,0.55f,0.55f);
            glVertex2f(-0.996f, 0.108f);        // back side
            glVertex2f(-0.963f, 0.112f);
            glVertex2f(-0.996f, -0.022f);
            glVertex2f(-0.996f, 0.108f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.25f,0.24f,0.24f);
            glVertex2f(0.004f, 0.203f);
            glVertex2f(-0.149f, 0.227f);
            glVertex2f(-0.298f, 0.267f);
            glVertex2f(-0.507f, 0.346f);
            glVertex2f(-0.603f, 0.393f);
            glVertex2f(-0.609f, 0.401f);
            glVertex2f(-0.609f, 0.401f);
            glVertex2f(-0.481f, 0.46f);
            glVertex2f(-0.356f, 0.504f);
            glVertex2f(-0.247f, 0.531f);
            glVertex2f(-0.147f, 0.547f);
            glVertex2f(-0.063f, 0.563f);
            glVertex2f(-0.023f, 0.563f);
            glVertex2f(0.035f, 0.547f);
            glVertex2f(0.099f, 0.524f);
            glVertex2f(0.186f, 0.484f);
            glVertex2f(0.271f, 0.433f);
            glVertex2f(0.359f, 0.369f);
            glVertex2f(0.459f, 0.282f);
            glVertex2f(0.524f, 0.192f);     // front window border
            glVertex2f(0.362f, 0.176f);
            glVertex2f(0.237f, 0.184f);
            glVertex2f(0.244f, 0.211f);
            glVertex2f(0.362f, 0.211f);
            glVertex2f(0.466f, 0.219f);
            glVertex2f(0.375f, 0.31f);
            glVertex2f(0.279f, 0.377f);
            glVertex2f(0.175f, 0.444f);
            glVertex2f(0.057f, 0.496f);
            glVertex2f(-0.032f, 0.52f);
            glVertex2f(-0.216f, 0.5f);
            glVertex2f(-0.252f, 0.286f);
            glVertex2f(-0.083f, 0.247f);
            glVertex2f(0.059f, 0.227f);
            glVertex2f(0.206f, 0.215f);
            glVertex2f(0.193f, 0.176f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.25f,0.24f,0.24f);
            glVertex2f(0.953f, -0.338f);
            glVertex2f(0.908f, -0.322f);
            glVertex2f(0.937f, -0.16f);     // front black
            glVertex2f(0.937f, -0.16f);
            glVertex2f(0.999f, -0.172f);
            glVertex2f(0.997f, -0.342f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.414f, 0.448f);
            glVertex2f(-0.303f, 0.484f);
            glVertex2f(-0.241f, 0.496f);        // back window
            glVertex2f(-0.274f, 0.302f);
            glVertex2f(-0.367f, 0.334f);
            glVertex2f(-0.452f, 0.369f);
            glVertex2f(-0.509f, 0.401f);
            glVertex2f(-0.514f, 0.405f);
            glEnd();

             glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(0.162f, 0.307f);
            glVertex2f(0.162f, 0.275f);
            glVertex2f(0.173f, 0.24f);
            glVertex2f(0.202f, 0.216f);
            glVertex2f(-0.007f, 0.24f);
            glVertex2f(-0.100f, 0.248f);
            glVertex2f(-0.249f, 0.287f);
            glVertex2f(-0.249f, 0.291f);
            glVertex2f(-0.216f, 0.504f);    // window
            glVertex2f(-0.118f, 0.512f);
            glVertex2f(-0.029f, 0.516f);
            glVertex2f(0.077f, 0.493f);
            glVertex2f(0.177f, 0.445f);
            glVertex2f(0.282f, 0.374f);
            glVertex2f(0.384f, 0.307f);
            glVertex2f(0.466f, 0.216f);
            glVertex2f(0.348f, 0.212f);
            glVertex2f(0.248f, 0.212f);
            glVertex2f(0.260f, 0.295f);
            glVertex2f(0.235f, 0.315f);
            glVertex2f(0.191f, 0.331f);
            glVertex2f(0.166f, 0.319f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(0.297f, 0.065f);
            glVertex2f(0.297f, -0.366f);        // front strip
            glVertex2f(0.313f, -0.366f);
            glVertex2f(0.313f, 0.069f);
            glVertex2f(0.277f, 0.176f);
            glVertex2f(0.266f, 0.176f);
            glVertex2f(0.264f, 0.176f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.345f, 0.057f);
            glVertex2f(-0.301f, 0.267f);
            glVertex2f(-0.312f, 0.271f);
            glVertex2f(-0.314f, 0.267f);        // back strip
            glVertex2f(-0.358f, 0.065f);
            glVertex2f(-0.256f, -0.37f);
            glVertex2f(-0.238f, -0.37f);
            glEnd();
/*


            */

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.841f, 0.077f);
            glVertex2f(-0.903f, 0.097f);
            glVertex2f(-0.941f, 0.105f);
            glVertex2f(-0.956f, 0.108f);
            glVertex2f(-0.954f, 0.124f);        // back strip
            glVertex2f(-0.952f, 0.124f);
            glVertex2f(-0.896f, 0.112f);
            glVertex2f(-0.832f, 0.089f);
            glVertex2f(-0.767f, 0.053f);
            glVertex2f(-0.749f, 0.037f);
            glVertex2f(-0.767f, 0.029f);
            glVertex2f(-0.787f, 0.045f);
            glEnd();



            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.98f,0.93f,0.29f);
            glVertex2f(0.164f, 0.286f);
            glVertex2f(0.164f, 0.298f);
            glVertex2f(0.164f, 0.31f);
            glVertex2f(0.168f, 0.322f);
            glVertex2f(0.168f, 0.322f);     // side mirror
            glVertex2f(0.206f, 0.306f);
            glVertex2f(0.235f, 0.282f);
            glVertex2f(0.206f, 0.263f);
            glVertex2f(0.171f, 0.259f);
            glVertex2f(0.164f, 0.271f);
            glEnd();



            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.98f,0.93f,0.29f);
            glVertex2f(0.071f, 0.192f);
            glVertex2f(0.188f, 0.18f);
            glVertex2f(0.179f, 0.148f);
            glVertex2f(0.204f, 0.136f);
            glVertex2f(0.215f, 0.136f);
            glVertex2f(0.233f, 0.148f);
            glVertex2f(0.233f, 0.164f);
            glVertex2f(0.233f, 0.172f);
            glVertex2f(0.264f, 0.172f);
            glVertex2f(0.279f, 0.116f);
            glVertex2f(0.224f, 0.124f);     // under hood
            glVertex2f(0.102f, 0.136f);
            glVertex2f(-0.056f, 0.164f);
            glVertex2f(-0.214f, 0.188f);
            glVertex2f(-0.309f, 0.195f);
            glVertex2f(-0.309f, 0.203f);
            glVertex2f(-0.301f, 0.263f);
            glVertex2f(-0.301f, 0.263f);
            glVertex2f(-0.114f, 0.215f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.83f,0.80f,0.22f);
            glVertex2f(0.208f, 0.255f);
            glVertex2f(0.228f, 0.263f);
            glVertex2f(0.233f, 0.271f);
            glVertex2f(0.235f, 0.282f);
            glVertex2f(0.222f, 0.294f);
            glVertex2f(0.208f, 0.306f);
            glVertex2f(0.197f, 0.314f);
            glVertex2f(0.182f, 0.314f);
            glVertex2f(0.168f, 0.322f);
            glVertex2f(0.213f, 0.326f);
            glVertex2f(0.253f, 0.306f);     // watching glass
            glVertex2f(0.259f, 0.29f);
            glVertex2f(0.244f, 0.207f);
            glVertex2f(0.226f, 0.14f);
            glVertex2f(0.199f, 0.144f);
            glVertex2f(0.188f, 0.144f);
            glVertex2f(0.199f, 0.195f);
            glVertex2f(0.208f, 0.223f);
            glVertex2f(0.188f, 0.227f);
            glVertex2f(0.177f, 0.243f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.83f,0.80f,0.22f);
            glVertex2f(-0.641f, 0.069f);
            glVertex2f(-0.665f, 0.069f);
            glVertex2f(-0.689f, 0.069f);
            glVertex2f(-0.718f, 0.065f);
            glVertex2f(-0.743f, 0.057f);
            glVertex2f(-0.752f, 0.049f);
            glVertex2f(-0.823f, 0.089f);
            glVertex2f(-0.896f, 0.108f);    // back body
            glVertex2f(-0.954f, 0.124f);
            glVertex2f(-0.952f, 0.128f);
            glVertex2f(-0.941f, 0.219f);
            glVertex2f(-0.843f, 0.286f);
            glVertex2f(-0.867f, 0.31f);
            glVertex2f(-0.327f, 0.203f);
            glVertex2f(-0.358f, 0.069f);
            glVertex2f(-0.258f, -0.366f);
            glVertex2f(-0.481f, -0.362f);
            glVertex2f(-0.483f, -0.188f);
            glVertex2f(-0.498f, -0.125f);
            glVertex2f(-0.514f, -0.069f);
            glVertex2f(-0.529f, -0.034f);
            glVertex2f(-0.547f, -0.01f);
            glVertex2f(-0.567f, 0.018f);
            glVertex2f(-0.592f, 0.037f);
            glVertex2f(-0.614f, 0.057f);
            glEnd();

              glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.452f, 0.025f);
            glVertex2f(-0.445f, -0.026f);
            glVertex2f(-0.429f, -0.101f);
            glVertex2f(-0.372f, -0.287f);       // sticker
            glVertex2f(-0.525f, 0.101f);
            glVertex2f(-0.527f, 0.101f);
            glVertex2f(-0.392f, 0.112f);
            glVertex2f(-0.438f, 0.077f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.83f,0.80f,0.22f);
            glVertex2f(-0.243f, -0.366f);
            glVertex2f(-0.343f, 0.057f);
            glVertex2f(-0.312f, 0.203f);  //  middle body
            glVertex2f(-0.314f, 0.195f);
            glVertex2f(0.282f, 0.112f);
            glVertex2f(0.295f, 0.069f);
            glVertex2f(0.295f, -0.37f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.83f,0.80f,0.22f);
            glVertex2f(-0.854f, -0.133f);
            glVertex2f(-0.863f, -0.172f);
            glVertex2f(-0.869f, -0.224f);
            glVertex2f(-0.869f, -0.255f);
            glVertex2f(-0.869f, -0.295f);
            glVertex2f(-0.867f, -0.334f);
            glVertex2f(-0.941f, -0.291f);
            glVertex2f(-0.981f, -0.255f);       //back body
            glVertex2f(-0.992f, -0.148f);
            glVertex2f(-0.996f, -0.065f);
            glVertex2f(-0.996f, -0.026f);
            glVertex2f(-0.998f, -0.03f);
            glVertex2f(-0.958f, 0.108f);
            glVertex2f(-0.892f, 0.089f);
            glVertex2f(-0.863f, 0.077f);
            glVertex2f(-0.843f, 0.029f);
            glVertex2f(-0.825f, 0.006f);
            glVertex2f(-0.792f, 0.045f);
            glVertex2f(-0.772f, 0.029f);
            glVertex2f(-0.796f, -0.002f);
            glVertex2f(-0.816f, -0.03f);
            glVertex2f(-0.834f, -0.069f);
            glVertex2f(-0.843f, -0.097f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.98f,0.93f,0.29f);
            glVertex2f(0.204f, 0.247f);
            glVertex2f(0.213f, 0.251f);
            glVertex2f(0.226f, 0.259f);
            glVertex2f(0.233f, 0.267f);     // middle body
            glVertex2f(0.235f, 0.282f);
            glVertex2f(0.226f, 0.294f);
            glVertex2f(0.213f, 0.302f);
            glVertex2f(0.199f, 0.306f);
            glVertex2f(0.186f, 0.31f);
            glVertex2f(0.168f, 0.275f);
            glVertex2f(0.168f, 0.267f);
            glVertex2f(0.177f, 0.243f);
            glEnd();
            /*
            glBegin(GL_LINES);
            glColor3f(0.98f,0.93f,0.29f);
                glVertex2f(-0.864f, -1.0*-0.304f);
                glVertex2f(-0.329f, -1.0*-0.206f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.83f,0.80f,0.22f);
                glVertex2f(-0.58f, -1.0*-0.751f);
                glVertex2f(-0.567f, -1.0*-0.767f);
            glEnd();


*/
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.83f,0.80f,0.22f);
            glVertex2f(0.911f, -0.326f);
            glVertex2f(0.940f, -0.16f);
            glVertex2f(0.995f, -0.175f);
            glVertex2f(0.984f, -0.084f);
            glVertex2f(0.968f, -0.057f);
            glVertex2f(0.762f, -0.049f);
            glVertex2f(0.724f, -0.088f);
            glVertex2f(0.717f, -0.096f);
            glVertex2f(0.728f, -0.136f);
            glVertex2f(0.740f, -0.179f);
            glVertex2f(0.746f, -0.227f);
            glVertex2f(0.748f, -0.274f);
            glVertex2f(0.748f, -0.326f);
            glVertex2f(0.746f, -0.413f);
            glVertex2f(0.811f, -0.416f);
            glVertex2f(0.855f, -0.413f);    // front body
            glVertex2f(0.902f, -0.405f);
            glVertex2f(0.940f, -0.393f);
            glVertex2f(0.977f, -0.373f);
            glVertex2f(0.995f, -0.353f);
            glVertex2f(1.002f, -0.345f);
            glVertex2f(0.944f, -0.341f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.83f,0.80f,0.22f);
            glVertex2f(0.495f, 0.062f);
            glVertex2f(0.471f, 0.05f);
            glVertex2f(0.446f, 0.03f);
            glVertex2f(0.422f, -0.005f);
            glVertex2f(0.402f, -0.041f);
            glVertex2f(0.384f, -0.081f);
            glVertex2f(0.368f, -0.128f);
            glVertex2f(0.357f, -0.179f);
            glVertex2f(0.355f, -0.219f);
            glVertex2f(0.355f, -0.353f);
            glVertex2f(0.315f, -0.353f);
            glVertex2f(0.311f, 0.062f);
            glVertex2f(0.304f, 0.097f);
            glVertex2f(0.304f, 0.101f);     // front side body
            glVertex2f(0.757f, 0.062f);
            glVertex2f(0.851f, -0.037f);
            glVertex2f(0.740f, -0.029f);
            glVertex2f(0.702f, -0.049f);
            glVertex2f(0.680f, -0.017f);
            glVertex2f(0.655f, 0.018f);
            glVertex2f(0.637f, 0.038f);
            glVertex2f(0.617f, 0.054f);
            glVertex2f(0.591f, 0.07f);
            glVertex2f(0.562f, 0.07f);
            glVertex2f(0.528f, 0.07f);
            glEnd();

    /*
            glBegin(GL_LINES);
            glColor3f(0.83f,0.80f,0.22f);
                glVertex2f(0.304f, -1.0*-0.099f);
                glVertex2f(0.747f, -1.0*-0.059f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.83f,0.80f,0.22f);
                glVertex2f(0.676f, -1.0*-0.13f);
                glVertex2f(0.676f, -1.0*-0.13f);
            glEnd();
  */


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.85f,0.85f,0.84f);
            glVertex2f(0.784f, 0.038f);
            glVertex2f(0.735f, 0.078f);
            glVertex2f(0.680f, 0.129f);     // head light
            glVertex2f(0.673f, 0.133f);
            glVertex2f(0.748f, 0.149f);
            glVertex2f(0.868f, 0.054f);
            glVertex2f(0.971f, -0.057f);
            glVertex2f(0.851f, -0.041f);
            glEnd();
/*

            glBegin(GL_LINES);
            glColor3f(0.85f,0.85f,0.84f);
                glVertex2f(0.702f, -1.0*0.067f);
                glVertex2f(0.738f, -1.0*0.04f);
            glEnd();


*/

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(0.746f, -0.041f);
            glVertex2f(0.704f, -0.061f);
            glVertex2f(0.704f, -0.057f);
            glVertex2f(0.704f, -0.049f);    // front stripe
            glVertex2f(0.744f, -0.029f);
            glVertex2f(0.962f, -0.057f);
            glVertex2f(0.762f, -0.049f);
            glVertex2f(0.717f, -0.096f);
            glVertex2f(0.717f, -0.084f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(0.511f, 0.022f);
            glVertex2f(0.482f, 0.014f);
            glVertex2f(0.460f, -0.005f);
            glVertex2f(0.444f, -0.025f);
            glVertex2f(0.426f, -0.049f);
            glVertex2f(0.411f, -0.084f);
            glVertex2f(0.393f, -0.128f);
            glVertex2f(0.382f, -0.187f);
            glVertex2f(0.373f, -0.254f);
            glVertex2f(0.373f, -0.314f);
            glVertex2f(0.380f, -0.365f);
            glVertex2f(0.384f, -0.416f);
            glVertex2f(0.388f, -0.42f);
            glVertex2f(0.357f, -0.42f);
            glVertex2f(0.357f, -0.42f);
            glVertex2f(0.355f, -0.298f);
            glVertex2f(0.357f, -0.207f);
            glVertex2f(0.366f, -0.136f);
            glVertex2f(0.380f, -0.096f);
            glVertex2f(0.393f, -0.061f);
            glVertex2f(0.413f, -0.021f);
            glVertex2f(0.428f, 0.01f);
            glVertex2f(0.451f, 0.034f);
            glVertex2f(0.471f, 0.054f);
            glVertex2f(0.511f, 0.07f);
            glVertex2f(0.540f, 0.074f);
            glVertex2f(0.580f, 0.07f);
            glVertex2f(0.606f, 0.062f);     // tire border
            glVertex2f(0.640f, 0.038f);
            glVertex2f(0.662f, 0.018f);
            glVertex2f(0.688f, -0.017f);
            glVertex2f(0.715f, -0.069f);
            glVertex2f(0.733f, -0.136f);
            glVertex2f(0.740f, -0.183f);
            glVertex2f(0.748f, -0.247f);
            glVertex2f(0.751f, -0.345f);
            glVertex2f(0.751f, -0.416f);
            glVertex2f(0.715f, -0.413f);
            glVertex2f(0.724f, -0.353f);
            glVertex2f(0.733f, -0.286f);
            glVertex2f(0.722f, -0.199f);
            glVertex2f(0.704f, -0.128f);
            glVertex2f(0.688f, -0.088f);
            glVertex2f(0.668f, -0.057f);
            glVertex2f(0.646f, -0.021f);
            glVertex2f(0.615f, 0.01f);
            glVertex2f(0.602f, 0.014f);
            glVertex2f(0.580f, 0.022f);
            glVertex2f(0.566f, 0.022f);
            glVertex2f(0.544f, 0.03f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.640f, 0.022f);
            glVertex2f(-0.609f, 0.01f);
            glVertex2f(-0.585f, -0.005f);
            glVertex2f(-0.565f, -0.037f);
            glVertex2f(-0.552f, -0.061f);
            glVertex2f(-0.534f, -0.088f);
            glVertex2f(-0.520f, -0.124f);
            glVertex2f(-0.507f, -0.167f);
            glVertex2f(-0.498f, -0.223f);
            glVertex2f(-0.496f, -0.278f);
            glVertex2f(-0.494f, -0.302f);
            glVertex2f(-0.507f, -0.42f);
            glVertex2f(-0.512f, -0.416f);
            glVertex2f(-0.478f, -0.413f);
            glVertex2f(-0.483f, -0.286f);
            glVertex2f(-0.485f, -0.199f);
            glVertex2f(-0.498f, -0.14f);
            glVertex2f(-0.507f, -0.104f);
            glVertex2f(-0.520f, -0.069f);
            glVertex2f(-0.534f, -0.041f);
            glVertex2f(-0.552f, -0.009f);
            glVertex2f(-0.576f, 0.022f);
            glVertex2f(-0.596f, 0.042f);
            glVertex2f(-0.627f, 0.062f);
            glVertex2f(-0.663f, 0.07f);
            glVertex2f(-0.698f, 0.062f);
            glVertex2f(-0.752f, 0.042f);
            glVertex2f(-0.776f, 0.018f);
            glVertex2f(-0.805f, -0.017f);
            glVertex2f(-0.827f, -0.057f);       // back tire border
            glVertex2f(-0.845f, -0.108f);
            glVertex2f(-0.860f, -0.16f);
            glVertex2f(-0.865f, -0.207f);
            glVertex2f(-0.867f, -0.266f);
            glVertex2f(-0.865f, -0.333f);
            glVertex2f(-0.849f, -0.333f);
            glVertex2f(-0.849f, -0.258f);
            glVertex2f(-0.840f, -0.195f);
            glVertex2f(-0.832f, -0.16f);
            glVertex2f(-0.827f, -0.12f);
            glVertex2f(-0.805f, -0.069f);
            glVertex2f(-0.776f, -0.029f);
            glVertex2f(-0.743f, 0.002f);
            glVertex2f(-0.716f, 0.03f);
            glVertex2f(-0.694f, 0.03f);
            glVertex2f(-0.667f, 0.03f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.56f,0.55f,0.26f);
            glVertex2f(0.315f, -0.365f);
            glVertex2f(-0.478f, -0.365f);
            glVertex2f(-0.478f, -0.42f);
            glVertex2f(-0.476f, -0.416f);   // tire back
            glVertex2f(0.360f, -0.416f);
            glVertex2f(0.357f, -0.357f);
            glVertex2f(0.315f, -0.357f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.27f,0.27f,0.27f);
            glVertex2f(-0.849f, -0.333f);
            glVertex2f(-0.845f, -0.381f);
            glVertex2f(-0.834f, -0.432f);
            glVertex2f(-0.820f, -0.472f);
            glVertex2f(-0.805f, -0.511f);
            glVertex2f(-0.794f, -0.531f);
            glVertex2f(-0.772f, -0.555f);
            glVertex2f(-0.760f, -0.559f);
            glVertex2f(-0.727f, -0.583f);
            glVertex2f(-0.683f, -0.594f);
            glVertex2f(-0.643f, -0.598f);
            glVertex2f(-0.620f, -0.583f);
            glVertex2f(-0.596f, -0.563f);
            glVertex2f(-0.574f, -0.551f);
            glVertex2f(-0.554f, -0.523f);
            glVertex2f(-0.534f, -0.48f);
            glVertex2f(-0.518f, -0.432f);
            glVertex2f(-0.509f, -0.405f);
            glVertex2f(-0.496f, -0.314f);
            glVertex2f(-0.494f, -0.239f);
            glVertex2f(-0.500f, -0.187f);
            glVertex2f(-0.509f, -0.164f);
            glVertex2f(-0.516f, -0.128f);
            glVertex2f(-0.529f, -0.088f);
            glVertex2f(-0.549f, -0.049f);
            glVertex2f(-0.576f, -0.009f);
            glVertex2f(-0.598f, 0.01f);
            glVertex2f(-0.640f, 0.022f);
            glVertex2f(-0.687f, 0.034f);
            glVertex2f(-0.712f, 0.03f);     // back tire
            glVertex2f(-0.745f, 0.002f);
            glVertex2f(-0.776f, -0.025f);
            glVertex2f(-0.796f, -0.057f);
            glVertex2f(-0.816f, -0.084f);
            glVertex2f(-0.829f, -0.116f);
            glVertex2f(-0.834f, -0.156f);
            glVertex2f(-0.840f, -0.187f);
            glVertex2f(-0.849f, -0.227f);
            glVertex2f(-0.854f, -0.274f);
            glVertex2f(-0.854f, -0.314f);
            glVertex2f(-0.852f, -0.341f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.27f,0.27f,0.27f);
            glVertex2f(0.380f, -0.333f);
            glVertex2f(0.382f, -0.365f);
            glVertex2f(0.384f, -0.401f);
            glVertex2f(0.388f, -0.42f);
            glVertex2f(0.388f, -0.416f);
            glVertex2f(0.400f, -0.464f);
            glVertex2f(0.413f, -0.496f);
            glVertex2f(0.428f, -0.519f);
            glVertex2f(0.446f, -0.551f);
            glVertex2f(0.468f, -0.575f);
            glVertex2f(0.502f, -0.594f);
            glVertex2f(0.526f, -0.598f);
            glVertex2f(0.557f, -0.598f);
            glVertex2f(0.588f, -0.598f);
            glVertex2f(0.622f, -0.583f);
            glVertex2f(0.646f, -0.555f);
            glVertex2f(0.668f, -0.523f);
            glVertex2f(0.693f, -0.472f);
            glVertex2f(0.706f, -0.432f);
            glVertex2f(0.715f, -0.397f);
            glVertex2f(0.726f, -0.322f);
            glVertex2f(0.733f, -0.266f);
            glVertex2f(0.715f, -0.16f);
            glVertex2f(0.702f, -0.104f);
            glVertex2f(0.666f, -0.041f);
            glVertex2f(0.640f, -0.009f);//front tire
            glVertex2f(0.604f, 0.014f);
            glVertex2f(0.577f, 0.018f);
            glVertex2f(0.551f, 0.018f);
            glVertex2f(0.522f, 0.014f);
            glVertex2f(0.477f, -0.001f);
            glVertex2f(0.446f, -0.025f);
            glVertex2f(0.422f, -0.061f);
            glVertex2f(0.406f, -0.088f);
            glVertex2f(0.391f, -0.14f);
            glVertex2f(0.380f, -0.199f);
            glVertex2f(0.377f, -0.262f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(0.726f, -0.278f);
            glVertex2f(0.728f, -0.318f);
            glVertex2f(0.728f, -0.373f);
            glVertex2f(0.717f, -0.405f);        // front tire
            glVertex2f(0.744f, -0.345f);
            glVertex2f(0.735f, -0.227f);
            glVertex2f(0.724f, -0.16f);
            glVertex2f(0.717f, -0.16f);
            glVertex2f(0.722f, -0.223f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(0.713f, -0.413f);
            glVertex2f(0.733f, -0.282f);
            glVertex2f(0.722f, -0.416f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(0.382f, -0.282f);
            glVertex2f(0.382f, -0.227f);
            glVertex2f(0.384f, -0.175f);
            glVertex2f(0.388f, -0.144f);
            glVertex2f(0.362f, -0.278f);
            glVertex2f(0.368f, -0.361f);
            glVertex2f(0.382f, -0.397f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.845f, -0.254f);
            glVertex2f(-0.840f, -0.195f);
            glVertex2f(-0.834f, -0.144f);
            glVertex2f(-0.805f, -0.061f);
            glVertex2f(-0.865f, -0.254f);
            glVertex2f(-0.860f, -0.333f);
            glVertex2f(-0.849f, -0.333f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.832f, -0.116f);
            glVertex2f(-0.829f, -0.136f);
            glVertex2f(-0.816f, -0.081f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.676f, 0.038f);
            glVertex2f(-0.640f, 0.034f);
            glVertex2f(-0.743f, 0.038f);
            glVertex2f(-0.743f, 0.002f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.685f, 0.038f);
            glVertex2f(-0.698f, 0.03f);
            glVertex2f(-0.612f, 0.018f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.494f, -0.286f);
            glVertex2f(-0.505f, -0.416f);
            glVertex2f(-0.487f, -0.401f);
            glVertex2f(-0.487f, -0.219f);
            glVertex2f(-0.509f, -0.136f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.487f, -0.298f);
            glVertex2f(-0.498f, -0.223f);
            glVertex2f(-0.500f, -0.333f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.760f, 0.05f);
            glVertex2f(-0.672f, 0.07f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.665f, 0.074f);
            glVertex2f(-0.629f, 0.07f);
            glVertex2f(-0.616f, 0.038f);
            glVertex2f(-0.752f, 0.03f);
            glVertex2f(-0.760f, 0.05f);
            glVertex2f(-0.763f, 0.05f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.540f, -0.009f);
            glVertex2f(-0.512f, -0.065f);
            glVertex2f(-0.498f, -0.108f);
            glVertex2f(-0.485f, -0.16f);
            glVertex2f(-0.478f, -0.235f);
            glVertex2f(-0.487f, -0.274f);
            glVertex2f(-0.516f, -0.096f);
            glVertex2f(-0.574f, -0.005f);
            glVertex2f(-0.627f, 0.034f);
            glVertex2f(-0.623f, 0.058f);
            glVertex2f(-0.627f, 0.07f);
            glVertex2f(-0.574f, 0.038f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.472f, -0.373f);
            glVertex2f(-0.472f, -0.405f);
            glVertex2f(-0.483f, -0.413f);
            glVertex2f(-0.487f, -0.298f);
            glVertex2f(-0.476f, -0.239f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(-0.474f, -0.278f);
            glVertex2f(-0.483f, -0.322f);
            glVertex2f(-0.487f, -0.247f);
            glVertex2f(-0.483f, -0.219f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.38f,0.38f,0.38f);
            glVertex2f(0.537f, -0.326f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.27f,0.27f,0.27f);
            glVertex2f(0.524f, 0.03f);
            glVertex2f(0.540f, 0.034f);
            glVertex2f(0.557f, 0.034f);
            glVertex2f(0.573f, 0.034f);
            glVertex2f(0.595f, 0.022f);// center ring

            glVertex2f(0.613f, 0.018f);
            glVertex2f(0.628f, 0.014f);
            glVertex2f(0.637f, -0.005f);
            glVertex2f(0.528f, -0.037f);
            glVertex2f(0.428f, -0.057f);
            glVertex2f(0.422f, -0.065f);
            glVertex2f(0.428f, -0.041f);
            glVertex2f(0.446f, -0.021f);
            glVertex2f(0.457f, -0.005f);
            glVertex2f(0.471f, 0.01f);
            glVertex2f(0.484f, 0.014f);
            glVertex2f(0.504f, 0.022f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.74f,0.74f,0.74f);
            glVertex2f(-0.687f, -0.274f);
            glVertex2f(-0.689f, -0.274f);
            glVertex2f(-0.689f, -0.254f);
            glVertex2f(-0.683f, -0.239f);
            glVertex2f(-0.672f, -0.239f);
            glVertex2f(-0.663f, -0.243f);
            glVertex2f(-0.660f, -0.258f);
            glVertex2f(-0.660f, -0.274f);
            glVertex2f(-0.660f, -0.282f);
            glVertex2f(-0.665f, -0.294f);
            glVertex2f(-0.672f, -0.298f);
            glVertex2f(-0.678f, -0.298f);
            glVertex2f(-0.685f, -0.294f);
            glVertex2f(-0.687f, -0.282f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.74f,0.74f,0.74f);
            glVertex2f(0.555f, -0.282f);
            glVertex2f(0.544f, -0.282f);
            glVertex2f(0.544f, -0.278f);
            glVertex2f(0.540f, -0.262f);
            glVertex2f(0.540f, -0.262f);
            glVertex2f(0.540f, -0.258f);
            glVertex2f(0.540f, -0.239f);
            glVertex2f(0.544f, -0.227f);
            glVertex2f(0.551f, -0.223f);
            glVertex2f(0.560f, -0.223f);
            glVertex2f(0.568f, -0.235f);
            glVertex2f(0.571f, -0.243f);
            glVertex2f(0.571f, -0.258f);
            glVertex2f(0.568f, -0.266f);
            glVertex2f(0.568f, -0.278f);
            glVertex2f(0.566f, -0.282f);
            glEnd();

            // back ring start
            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.676f, -1.0*0.249f);
                glVertex2f(-0.673f, -1.0*0.028f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.664f, -1.0*0.273f);
                glVertex2f(-0.538f, -1.0*0.277f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.673f, -1.0*0.285f);
                glVertex2f(-0.673f, -1.0*0.514f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.682f, -1.0*0.273f);
                glVertex2f(-0.811f, -1.0*0.273f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.667f, -1.0*0.265f);
                glVertex2f(-0.578f, -1.0*0.099f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.682f, -1.0*0.289f);
                glVertex2f(-0.771f, -1.0*0.431f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.669f, -1.0*0.277f);
                glVertex2f(-0.578f, -1.0*0.435f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.684f, -1.0*0.257f);
                glVertex2f(-0.771f, -1.0*0.126f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.667f, -1.0*0.257f);
                glVertex2f(-0.62f, -1.0*0.047f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.676f, -1.0*0.273f);
                glVertex2f(-0.553f, -1.0*0.186f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.669f, -1.0*0.281f);
                glVertex2f(-0.549f, -1.0*0.36f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.673f, -1.0*0.281f);
                glVertex2f(-0.616f, -1.0*0.482f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.676f, -1.0*0.292f);
                glVertex2f(-0.727f, -1.0*0.498f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.678f, -1.0*0.273f);
                glVertex2f(-0.798f, -1.0*0.364f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.68f, -1.0*0.253f);
                glVertex2f(-0.724f, -1.0*0.063f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.68f, -1.0*0.273f);
                glVertex2f(-0.791f, -1.0*0.198f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.798f, -1.0*0.372f);
                glVertex2f(-0.811f, -1.0*0.277f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.811f, -1.0*0.277f);
                glVertex2f(-0.802f, -1.0*0.19f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.802f, -1.0*0.19f);
                glVertex2f(-0.776f, -1.0*0.115f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.776f, -1.0*0.115f);
                glVertex2f(-0.727f, -1.0*0.051f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.727f, -1.0*0.051f);
                glVertex2f(-0.671f, -1.0*0.028f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.671f, -1.0*0.028f);
                glVertex2f(-0.618f, -1.0*0.043f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.618f, -1.0*0.043f);
                glVertex2f(-0.576f, -1.0*0.099f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.576f, -1.0*0.099f);
                glVertex2f(-0.542f, -1.0*0.182f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.542f, -1.0*0.182f);
                glVertex2f(-0.533f, -1.0*0.285f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.533f, -1.0*0.285f);
                glVertex2f(-0.538f, -1.0*0.375f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.538f, -1.0*0.375f);
                glVertex2f(-0.567f, -1.0*0.451f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.564f, -1.0*0.451f);
                glVertex2f(-0.609f, -1.0*0.506f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.609f, -1.0*0.506f);
                glVertex2f(-0.671f, -1.0*0.526f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.671f, -1.0*0.526f);
                glVertex2f(-0.724f, -1.0*0.51f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.724f, -1.0*0.51f);
                glVertex2f(-0.771f, -1.0*0.443f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.771f, -1.0*0.443f);
                glVertex2f(-0.796f, -1.0*0.372f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.578f, -1.0*0.435f);
                glVertex2f(-0.564f, -1.0*0.458f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.551f, -1.0*0.36f);
                glVertex2f(-0.536f, -1.0*0.368f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.562f, -1.0*0.194f);
                glVertex2f(-0.542f, -1.0*0.178f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.782f, -1.0*0.206f);
                glVertex2f(-0.798f, -1.0*0.194f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(-0.618f, -1.0*0.482f);
                glVertex2f(-0.609f, -1.0*0.51f);
            glEnd();

            // back ring end

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.27f,0.27f,0.27f);
            glVertex2f(0.482f, -0.196f);
            glVertex2f(0.455f, -0.188f);
            glVertex2f(0.640f, -0.184f);
            glVertex2f(0.600f, -0.385f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.74f,0.74f,0.74f);
            glVertex2f(0.537f, -0.298f);
            glVertex2f(0.533f, -0.287f);
            glVertex2f(0.533f, -0.275f);
            glVertex2f(0.533f, -0.271f);
            glVertex2f(0.537f, -0.259f);
            glVertex2f(0.544f, -0.259f);
            glVertex2f(0.549f, -0.259f);    // center ring
            glVertex2f(0.555f, -0.259f);
            glVertex2f(0.557f, -0.267f);
            glVertex2f(0.560f, -0.279f);
            glVertex2f(0.562f, -0.294f);
            glVertex2f(0.560f, -0.302f);
            glVertex2f(0.555f, -0.306f);
            glVertex2f(0.549f, -0.314f);
            glVertex2f(0.544f, -0.314f);
            glVertex2f(0.537f, -0.31f);
            glVertex2f(0.537f, -0.302f);
            glEnd();



           // front ring
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.74f,0.74f,0.74f);
            glVertex2f(0.535f, -0.306f);
            glVertex2f(0.546f, -0.306f);
            glVertex2f(0.537f, -0.291f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.74f,0.74f,0.74f);
            glVertex2f(0.535f, -0.287f);
            glVertex2f(0.540f, -0.283f);
            glVertex2f(0.540f, -0.306f);
            glVertex2f(0.533f, -0.298f);
            glEnd();
            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.547f, -1.0*0.273f);
                glVertex2f(0.547f, -1.0*0.04f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.547f, -1.0*0.04f);
                glVertex2f(0.547f, -1.0*0.04f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.549f, -1.0*0.292f);
                glVertex2f(0.549f, -1.0*0.53f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.553f, -1.0*0.277f);
                glVertex2f(0.689f, -1.0*0.273f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.542f, -1.0*0.281f);
                glVertex2f(0.418f, -1.0*0.277f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.549f, -1.0*0.277f);
                glVertex2f(0.64f, -1.0*0.095f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.538f, -1.0*0.292f);
                glVertex2f(0.456f, -1.0*0.458f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.556f, -1.0*0.292f);
                glVertex2f(0.66f, -1.0*0.451f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.538f, -1.0*0.265f);
                glVertex2f(0.453f, -1.0*0.126f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.549f, -1.0*0.273f);
                glVertex2f(0.598f, -1.0*0.055f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.544f, -1.0*0.292f);
                glVertex2f(0.498f, -1.0*0.51f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.544f, -1.0*0.296f);
                glVertex2f(0.613f, -1.0*0.498f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.54f, -1.0*0.281f);
                glVertex2f(0.431f, -1.0*0.202f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.558f, -1.0*0.289f);
                glVertex2f(0.68f, -1.0*0.364f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.556f, -1.0*0.281f);
                glVertex2f(0.662f, -1.0*0.182f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.538f, -1.0*0.292f);
                glVertex2f(0.429f, -1.0*0.379f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.544f, -1.0*0.273f);
                glVertex2f(0.496f, -1.0*0.063f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.431f, -1.0*0.387f);
                glVertex2f(0.418f, -1.0*0.281f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.418f, -1.0*0.281f);
                glVertex2f(0.422f, -1.0*0.19f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.422f, -1.0*0.19f);
                glVertex2f(0.449f, -1.0*0.111f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.449f, -1.0*0.111f);
                glVertex2f(0.496f, -1.0*0.055f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.496f, -1.0*0.055f);
                glVertex2f(0.547f, -1.0*0.036f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.547f, -1.0*0.036f);
                glVertex2f(0.6f, -1.0*0.055f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.6f, -1.0*0.055f);
                glVertex2f(0.64f, -1.0*0.103f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.64f, -1.0*0.103f);
                glVertex2f(0.673f, -1.0*0.186f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.673f, -1.0*0.186f);
                glVertex2f(0.687f, -1.0*0.281f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.687f, -1.0*0.281f);
                glVertex2f(0.68f, -1.0*0.368f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.68f, -1.0*0.368f);
                glVertex2f(0.656f, -1.0*0.443f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.653f, -1.0*0.443f);
                glVertex2f(0.609f, -1.0*0.498f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.609f, -1.0*0.498f);
                glVertex2f(0.547f, -1.0*0.526f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.547f, -1.0*0.526f);
                glVertex2f(0.498f, -1.0*0.51f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.498f, -1.0*0.51f);
                glVertex2f(0.458f, -1.0*0.462f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.458f, -1.0*0.462f);
                glVertex2f(0.427f, -1.0*0.375f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.436f, -1.0*0.206f);
                glVertex2f(0.42f, -1.0*0.194f);
            glEnd();

            glBegin(GL_LINES);
            glColor3f(0.74f,0.74f,0.74f);
                glVertex2f(0.456f, -1.0*0.134f);
                glVertex2f(0.449f, -1.0*0.119f);
            glEnd();                // car end
      glPopMatrix();
}
