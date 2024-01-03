#include "utm.h"
#include <iostream>
#include <iomanip>
int main() {
	int ReferenceEllipsoid = 23;
	double Lat = 39.756131;
	double Long = 116.015991;
	double UTMNorthing;
	double UTMEasting;
	char *UTMZone = new char[10];
	LLtoUTM(ReferenceEllipsoid, Lat, Long,
		UTMNorthing, UTMEasting, UTMZone);
	UTMNorthing += 35;
	UTMEasting += 35;
	double lat, lon;
	UTMtoLL(ReferenceEllipsoid, UTMNorthing, UTMEasting, UTMZone, lat, lon);
	std::cout << "lat, lon via two transform:" << std::setprecision(10) << lat << "," << lon << std::endl;
	return 0;
}