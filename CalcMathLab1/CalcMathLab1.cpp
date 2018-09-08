// CalcMathLab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <math.h>

float getXY(float PN, float P0) {
	return PN / P0;
}


float getAlpha(float gamma) {
	return (gamma + 1.0) / (gamma - 1.0);
}

float getE(float C, float gamma, float U3, float U0) {
	return (2.0*powf(C, 2.0)) / (gamma*(gamma - 1)*powf((U3 - U0),2));
}

float getC(float gamma, float P, float rho) {
	return sqrtf(gamma*(P / rho));
}


int main()
{
	printf("Computational Mathematics Lab #1\nVariant I.1\n(c)2018, Alexander Nekhaev\n\n");
	//Initial values
	float gamma0 = 5.0 / 3.0;
	float rho0 = 2.219 * powf(10.0, -4.0);
	float U0 = -1.587 * powf(10.0, 5.0);
	float P0 = 3.7812 * powf(10.0, 6.0);
	

	float gamma3 = 5.0 / 3;
	float rho3 = 2.71 * powf(10.0, -3.0);
	float U3 = 10.0;
	float P3 = 5.0 * powf(10.0, 5.0);

	printf("Initial values:\n\tgamma_0=%f\n\trho_0=%f\n\tU_0=%f\n\tP_0=%f\n\n\tgamma_3=%f\n\trho_3=%f\n\tU_3=%f\n\tP_3=%f\n",gamma0, rho0, U0, P0, gamma3, rho3, U3, P3);

	float X = getXY(P3, P0);
	float alpha0 = getAlpha(gamma0);
	float alpha3 = getAlpha(gamma3);
	float C0 = getC(gamma0, P0, rho0);
	float C3 = getC(gamma3, P3, rho3);
	float e3 = getE(C3, gamma3, U3, U0);
	float e0 = getE(C0, gamma3, U3, U0);

	float a0 = powf((alpha0*e3 - alpha3 * X*e0), 2.0);
	float a1 = 2.0*((a0*e3 - alpha3 * X*e0) * (e3*(1.0 - 2.0*alpha0*X) - e0 * X*(X - 2.0*alpha3)) - alpha0 * alpha3*X*(alpha0*e3 + alpha3 * X*e0));

	return 0;
}
