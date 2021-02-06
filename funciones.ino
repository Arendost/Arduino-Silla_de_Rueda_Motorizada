//Adelante

void T(int v1,int v2)
{
servo0.write(v2);
servo1.write(v2);
}

//Derecha

void R(int v1,int v2)
{
servo0.write(v1);
servo1.write(v2);
}

//Izquierda

void I(int v1,int v2)
{
servo0.write(v2);
servo1.write(v1);
}

//Atras

void B(int v1,int v2)
{
servo0.write(v1);
servo1.write(v1);
}

//Detener

void O()
{
servo0.write(1400);
servo1.write(1400);
}

//Circulo mortal
 
void X(int v1,int v2)
{
servo0.write(v1);
servo1.write(v2);
}
