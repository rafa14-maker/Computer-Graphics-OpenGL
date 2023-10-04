void buildingShadow()
{
    glPushMatrix();
//    glTranslatef(0.0f,0.870f,0.0f);
//    glScalef(0.6f,0.8f,0.8f);

            glBegin(GL_TRIANGLE_FAN); // shadow building  #3 start
            glColor3f(0.52f,0.64f,0.71f);
            glVertex2f(-0.937f, -0.097f);
            glVertex2f(-0.934f, 0.017f);
            glVertex2f(-0.917f, -0.014f);   //from left 1
            glVertex2f(-0.917f, -0.184f);
            glVertex2f(-0.932f, -0.109f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.52f,0.64f,0.71f);
            glVertex2f(-0.874f, -0.188f);
            glVertex2f(-0.799f, -0.24f);
            glVertex2f(-0.801f, -1.0f);//from left 2
            glVertex2f(-0.977f, -1.0f);
            glVertex2f(-0.977f, -1.0f);
            glVertex2f(-0.972f, -0.082f);
            glVertex2f(-0.879f, -0.082f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.52f,0.64f,0.71f);
            glVertex2f(-0.714f, -0.362f);
            glVertex2f(-0.714f, -0.24f);
            glVertex2f(-0.668f, -0.24f);
            glVertex2f(-0.668f, -0.109f);//from left 3
            glVertex2f(-0.577f, -0.113f);
            glVertex2f(-0.579f, -1.0f);
            glVertex2f(-0.826f, -1.0f);
            glVertex2f(-0.803f, -0.358f);
            glVertex2f(-0.821f, -0.366f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.52f,0.64f,0.71f);
            glVertex2f(-0.417f, -0.248f);
            glVertex2f(-0.226f, -0.252f);
            glVertex2f(-0.226f, -1.0f);
            glVertex2f(-0.532f, -1.0f);
            glVertex2f(-0.528f, -0.192f);//from left 4
            glVertex2f(-0.497f, -0.2f);
            glVertex2f(-0.499f, -0.192f);
            glVertex2f(-0.470f, -0.192f);
            glVertex2f(-0.419f, -0.192f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.52f,0.64f,0.71f);
            glVertex2f(-0.179f, -0.283f);
            glVertex2f(-0.177f, -0.188f);//from left 5
            glVertex2f(-0.043f, -0.188f);
            glVertex2f(-0.039f, -0.058f);
            glVertex2f(0.112f, -0.058f);
            glVertex2f(0.108f, -1.0f);
            glVertex2f(-0.252f, -1.0f);
            glVertex2f(-0.250f, -0.287f);
            glVertex2f(-0.230f, -0.295f);
            glVertex2f(-0.239f, -0.283f);
            glEnd();
                     glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.52f,0.64f,0.71f);
            glVertex2f(0.143f, -0.256f);
            glVertex2f(0.143f, -0.125f);
            glVertex2f(0.346f, -0.125f);
            glVertex2f(0.343f, -0.232f);//from left 6
            glVertex2f(0.374f, -0.232f);
            glVertex2f(0.374f, -1.0f);
            glVertex2f(0.072f, -1.0f);
            glVertex2f(0.077f, -0.256f);
            glVertex2f(0.106f, -0.264f);
            glVertex2f(0.099f, -0.256f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.52f,0.64f,0.71f);
            glVertex2f(0.494f, -0.441f);
            glVertex2f(0.517f, -0.441f);
            glVertex2f(0.521f, -0.414f);
            glVertex2f(0.552f, -0.414f);
            glVertex2f(0.552f, -0.311f);//from left 7
            glVertex2f(0.619f, -0.311f);
            glVertex2f(0.623f, -1.0f);
            glVertex2f(0.348f, -1.0f);
            glVertex2f(0.354f, -0.315f);
            glVertex2f(0.370f, -0.315f);
            glVertex2f(0.357f, -0.315f);
            glVertex2f(0.488f, -0.319f);
            glEnd();
             glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.52f,0.64f,0.71f);
            glVertex2f(0.594f, -1.0f);
            glVertex2f(0.603f, 0.128f);
            glVertex2f(0.808f, 0.128f);//from left 8
            glVertex2f(0.810f, -1.0f);
            glVertex2f(0.597f, -1.0f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.52f,0.64f,0.71f);
            glVertex2f(0.770f, 0.017f);
            glVertex2f(0.748f, 0.017f);
            glVertex2f(0.752f, 0.013f);//from left 9
            glVertex2f(0.752f, 0.27f);
            glVertex2f(0.772f, 0.274f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.52f,0.64f,0.71f);
            glVertex2f(0.817f, -0.042f);
            glVertex2f(0.801f, -0.042f);
            glVertex2f(0.968f, -0.042f);//from left 10
            glVertex2f(0.968f, -1.0f);
            glVertex2f(0.799f, -1.0f);
            glVertex2f(0.801f, -0.042f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.52f,0.64f,0.71f);
            glVertex2f(0.923f, -0.078f);
            glVertex2f(0.926f, 0.049f);
            glVertex2f(0.950f, 0.037f);
            glVertex2f(0.950f, -0.082f);//from left 11
            glVertex2f(0.923f, -0.078f);
            glEnd();        // shadow building  #3 end





            glBegin(GL_TRIANGLE_FAN);       // //shadow building start #2
            glColor3f(0.11f,0.27f,0.40f);
            glVertex2f(-0.919f, -0.509f);
            glVertex2f(-0.919f, -0.43f);
            glVertex2f(-0.892f, -0.374f);
            glVertex2f(-0.712f, -0.378f);   // from left 1
            glVertex2f(-0.706f, -1.0f);
            glVertex2f(-0.986f, -1.0f);
            glVertex2f(-0.981f, -1.0f);
            glVertex2f(-0.979f, -0.509f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.11f,0.27f,0.40f);
            glVertex2f(-0.666f, -0.422f);
            glVertex2f(-0.666f, -0.256f);
            glVertex2f(-0.643f, -0.22f);
            glVertex2f(-0.643f, -0.129f);  // from left 2
            glVertex2f(-0.492f, -0.125f);
            glVertex2f(-0.497f, -1.0f);
            glVertex2f(-0.721f, -1.0f);
            glVertex2f(-0.719f, -0.422f);
            glVertex2f(-0.712f, -0.422f);
            glVertex2f(-0.712f, -0.422f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.11f,0.27f,0.40f);
            glVertex2f(-0.439f, -0.904f);
            glVertex2f(-0.437f, -0.295f);
            glVertex2f(-0.412f, -0.264f);
            glVertex2f(-0.261f, -0.264f);  // from left 3
            glVertex2f(-0.261f, -1.0f);
            glVertex2f(-0.488f, -1.0f);
            glVertex2f(-0.481f, -0.9f);
            glVertex2f(-0.488f, -0.9f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.11f,0.27f,0.40f);
            glVertex2f(0.010f, -0.73f);
            glVertex2f(0.077f, -0.726f);
            glVertex2f(0.072f, -1.0f);
            glVertex2f(-0.132f, -1.0f);
            glVertex2f(-0.132f, -0.43f);  // from left 4
            glVertex2f(-0.083f, -0.43f);
            glVertex2f(-0.092f, -0.437f);
            glVertex2f(-0.066f, -0.473f);
            glVertex2f(0.010f, -0.473f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.11f,0.27f,0.40f);
            glVertex2f(0.170f, -0.24f);
            glVertex2f(0.170f, -0.113f);
            glVertex2f(0.241f, -0.113f);
            glVertex2f(0.241f, -0.094f);
            glVertex2f(0.254f, -0.094f);  // from left 5
            glVertex2f(0.257f, -0.125f);
            glVertex2f(0.292f, -0.125f);
            glVertex2f(0.290f, -1.0f);
            glVertex2f(0.094f, -1.0f);
            glVertex2f(0.094f, -1.0f);
            glVertex2f(0.094f, -0.236f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.11f,0.27f,0.40f);
            glVertex2f(0.381f, -0.469f);
            glVertex2f(0.672f, -0.469f);
            glVertex2f(0.668f, -0.675f);  // from left 6
            glVertex2f(0.668f, -1.0f);
            glVertex2f(0.326f, -1.0f);
            glVertex2f(0.326f, -0.35f);
            glVertex2f(0.361f, -0.35f);
            glVertex2f(0.357f, -0.35f);
            glVertex2f(0.379f, -0.35f);
            glEnd();

            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.11f,0.27f,0.40f);
            glVertex2f(0.850f, -0.267f);
            glVertex2f(0.950f, -0.267f);
            glVertex2f(0.966f, -0.299f);
            glVertex2f(0.992f, -0.303f);
            glVertex2f(0.986f, -1.0f);  // from left 7
            glVertex2f(0.712f, -1.0f);
            glVertex2f(0.712f, -1.0f);
            glVertex2f(0.712f, -1.0f);
            glVertex2f(0.712f, -0.184f);
            glVertex2f(0.730f, -0.184f);
            glVertex2f(0.730f, -0.074f);
            glVertex2f(0.850f, -0.074f);
            glEnd();

             // shadow building end #2




            glBegin(GL_TRIANGLE_FAN);   // shadow building start #1
            glColor3f(0.03f,0.17f,0.26f);
            glVertex2f(-0.970f, -0.92f);
            glVertex2f(-0.972f, -0.916f);
            glVertex2f(-0.883f, -0.916f);       // from left 1
            glVertex2f(-0.883f, -1.0f);
            glVertex2f(-0.970f, -1.0f);
            glEnd();




            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.03f,0.17f,0.26f);
            glVertex2f(-0.799f, -0.524f);
            glVertex2f(-0.799f, -0.422f);
            glVertex2f(-0.632f, -0.426f);// 2
            glVertex2f(-0.634f, -1.0f);
            glVertex2f(-0.863f, -1.0f);
            glVertex2f(-0.863f, -1.0f);
            glVertex2f(-0.863f, -0.524f);
            glEnd();
            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.03f,0.17f,0.26f);
            glVertex2f(-0.590f, -0.785f);
            glVertex2f(-0.588f, -0.232f);
            glVertex2f(-0.454f, -0.374f);//3
            glVertex2f(-0.454f, -1.0f);
            glVertex2f(-0.632f, -1.0f);
            glVertex2f(-0.632f, -0.785f);
            glVertex2f(-0.630f, -0.785f);
            glEnd();



            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.03f,0.17f,0.26f);
            glVertex2f(-0.266f, -0.631f);
            glVertex2f(-0.266f, -0.422f);
            glVertex2f(-0.083f, -0.43f);
            glVertex2f(-0.083f, -0.726f);
            glVertex2f(-0.037f, -0.769f);
            glVertex2f(-0.034f, -1.0f);//4
            glVertex2f(-0.403f, -1.0f);
            glVertex2f(-0.403f, -1.0f);
            glVertex2f(-0.332f, -0.833f);
            glVertex2f(-0.330f, -0.631f);
            glEnd();

                 glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.03f,0.17f,0.26f);
            glVertex2f(0.152f, -0.256f);
            glVertex2f(0.157f, -0.157f);
            glVertex2f(0.330f, -0.161f);
            glVertex2f(0.328f, -0.335f);
            glVertex2f(0.361f, -0.331f);
            glVertex2f(0.363f, -1.0f);
            glVertex2f(-0.043f, -1.0f);//5
            glVertex2f(-0.039f, -0.9f);
            glVertex2f(-0.028f, -0.9f);
            glVertex2f(-0.030f, -0.896f);
            glVertex2f(0.037f, -0.896f);
            glVertex2f(0.037f, -0.299f);
            glVertex2f(0.061f, -0.256f);
            glEnd();


            glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.03f,0.17f,0.26f);
            glVertex2f(0.390f, -0.848f);
            glVertex2f(0.390f, -0.524f);
            glVertex2f(0.512f, -0.43f);
            glVertex2f(0.512f, -1.0f);//6
            glVertex2f(0.352f, -1.0f);
            glVertex2f(0.354f, -0.856f);
            glVertex2f(0.370f, -0.852f);
            glVertex2f(0.357f, -0.848f);
            glEnd();

                     glBegin(GL_TRIANGLE_FAN);
            glColor3f(0.03f,0.17f,0.26f);
            glVertex2f(0.734f, -0.631f);
            glVertex2f(0.734f, -0.208f);
            glVertex2f(0.788f, -0.208f);
            glVertex2f(0.843f, -0.299f);
            glVertex2f(0.934f, -0.295f);
            glVertex2f(0.932f, -0.73f);
            glVertex2f(0.992f, -0.789f);
            glVertex2f(0.988f, -1.0f);//7
            glVertex2f(0.517f, -1.0f);
            glVertex2f(0.521f, -0.975f);
            glVertex2f(0.517f, -0.975f);
            glVertex2f(0.552f, -0.975f);
            glVertex2f(0.552f, -0.631f);
            glEnd();                // shadow building end #1


        glPopMatrix();
}
