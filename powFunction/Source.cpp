#include <iostream>
#include <math.h>
using namespace std;
int main() {

	double fx(double xKeyfi, double us, double usAlýnacakSayý);
	double usfonk(double x, double y);
	double fxtrv(double xKeyfi, double us); 

	double eps = 0.001;
	double xKeyfi;
	double sonuc;
	double usAlinacakSayi;
	double us;

	cout << "usalinacak sayiyi giriniz : " << endl;
	cin >> usAlinacakSayi;
	cout << "sayinn ussunu bolume gore ters halini giriniz : " << endl;
	cin >> us;
	cout << "xkeyfi giriniz : ! xkeyfi degeriniz usalinacak sayinizdan buyuk olmalidir!" << endl;
	cin >> xKeyfi;


	while (fabs(fx(xKeyfi, us, usAlinacakSayi)) > eps) { //Newton Raphson yöntemi ile ile kök bulma.
		sonuc = xKeyfi - fx(xKeyfi, us, usAlinacakSayi) / fxtrv(xKeyfi, us);
		xKeyfi = sonuc;
	}
	cout << "sonucunuz :" << endl;
	cout << sonuc;
}
double fx(double xKeyfi, double us, double usAlinacakSayi) { // f(x) fonksiyonu
	double usfonk(double x, double y);
	return (usfonk(xKeyfi, us) - usAlinacakSayi);
}
double fxtrv(double xKeyfi, double us) {  // f(x) fonksiyonun türevi.
	double usfonk(double x, double y);
	return (us * usfonk(xKeyfi, us - 1));
}
double usfonk(double x, double y) { // üssü pozitif lan sayýlarda recursýve ile pow fonksiyonu .
	if (y == 1) {
		return x;
	}
	else if (y == 0) {
		return 1;
	}
	else {
		return x * usfonk(x, y - 1);
	}
}