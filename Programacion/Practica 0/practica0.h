#include <iostream>

using namespace std;

class BrazoMecanico{
	private:
		double x, y, z;
		bool sujetando;
	public:
		BrazoRobotico(double, double, double);
		void cojer();
		void soltar();
		double consultx();
		double consulty();
		double consultz();
		bool consultsujetando();
		void mover(double, double, double);

};
