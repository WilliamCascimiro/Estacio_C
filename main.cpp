#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int idade;
		
	cout<<"Entre com sua idade: ";
	cin >> idade;
	
	if(idade >= 18)
		cout<<"Bem vindo.";
	else
		cout<<"Saia daqui.";
	
	return 0;
}
