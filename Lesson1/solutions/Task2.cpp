/* Task 2: Калкулатор за преобразуване на температура
Преминаването от Фаренхайт към Целзий се извършва като извадите 32, умножите по 5 и разделите на 9. 
За преминаване от Целзий към Келвини добавяте 273.15. 
Напишете програма, която по въведени градуси по Фаренхайт да изведе на екрана градусите по Целзий и/или Келвини.
Изборът на изход зависи от въведена команда (след като сте въвели числената стойност) c, k, a (за целзий, кeлвин и и двете).

Пример: (примерните изходи са закръглени до втория знак)

Вход: 0 a Изход: Celsium: -17.78 Kelvin: 255.37

Вход: 40 c Изход: Celsium: 4.4

Вход: 56 k Изход: Kelvin: 286.48

*/
#include <iostream>
using namespace std;
int main()
{
	/// Първо ще си въведем входните данни
	
	// Дробно число за входната температура
	double tempFarenheit;
	
	// Към каква температура ще конвертираме
	char targetTemp;
	
	// Четем подадената температура
	cin >> tempFarenheit;
	
	// Четем към какво трябва да конвертираме
	cin >> targetTemp;
	
	/* cin И cin.get() за char
	
	Ако искаме да прочетем следващия ВИДИМ символ, четем със cin.get(targetTemp);
	Ако искаме да прочетем следващия символ, четем със cin>>targetTemp;
	
	*/
	
	/// Ще сметнем всичките температури
	
	// Правим си променлива за Целзий и я смятаме
	double tempCelsius = (tempFarenheit - 32) * 5 / 9;
	
	// Правим си променлива за Келвин и я смятаме
	double tempKelvin = tempCelsius + 273.15;
	
	
	/// Сметнали сме температурите, сега да ги изведем
	
	// Ако ще извеждаме и двете
	if(targetTemp == 'a')
	{
		cout<<"Celsium: "<<tempCelsius<<" "<<"Kelvin: "<<tempKelvin<<endl;
	}
	
	// Ако ще извеждаме Целзий
	if(targetTemp == 'c')
	{
		cout<<"Celsium: "<<tempCelsius<<endl;
	}
	
	// Ако ще извеждаме Келвин
	if(targetTemp == 'k')
	{
		cout<<"Kelvin: "<<tempKelvin<<endl;
	}
	
	
	/* С булеви изрази
	
	/// По-добре е да ползваме булеви изрази
	
	// Ако ще извеждаме и двете ИЛИ само Целзий
	if(targetTemp == 'a' || targetTemp == 'c')
	{
		cout<<"Celsius: "<<tempCelsius<<endl;
	}
	
	// Ако ще извеждаме и двете ИЛИ само Келвин
	if(targetTemp == 'a' || targetTemp == 'k')
	{
		cout<<"Kelvin: "<<tempKelvin<<endl;
	}
	
	*/
	return 0;
}













