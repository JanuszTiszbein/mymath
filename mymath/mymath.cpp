#include <iostream>
#include <cmath>



//paralaksa
//matrix
//paliwo - czym op�aca sie jechac
// jakies pi ???
//z�ota strefa
//parseki na ly na au na km

int parallaxH(double kat)
{

	int r=1,distance=0;
	kat=90-kat;

	distance= (tan(kat))*r;

	return distance;

}
