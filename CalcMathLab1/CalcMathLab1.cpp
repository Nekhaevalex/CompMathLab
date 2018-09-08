// CalcMathLab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <math.h>

float getY(float P1, float P0) {
	return P1 / P0;
}

float getX(float P3, float P0) {
	return P3 / P0;
}

float getAlpha0(float gamma0) {
	return (gamma0 + 1.0) / (gamma0 - 1.0);
}

int main()
{
	printf("Computational Mathematics Lab #1\nVariant I.1\n(c)2018, Alexander Nekhaev\n\n");
	//Initial values
	float gamma0 = 5.0 / 3.0;
	float rho0 = 1.694 * powf(10.0, -4.0);
	float P0 = 1.013 * powf(10.0, 6.0);
	float U0 = 0.0;

	float gamma3 = 7.0 / 5;
	float C3 = 3.6537 * powf(10.0, -4.0);
	float P3 = 1.6768 * powf(10.0, 6.0);
	float U3 = 0.0;

	printf("Initial values:\n\tgamma_0=%f\n\trho_0=%f\n\tP_0=%f\n\tU_0=%f\n\n\tgamma_3=%f\n\tC_3=%f\n\tP_3=%f\n\tU_3=%f\n",gamma0, rho0, P0, U0, gamma3, C3, P3, U3);

	
	return 0;
}
