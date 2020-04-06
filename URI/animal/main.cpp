#include <iostream>

using namespace std;

int main()
{
	string s[3];
	for (int i = 0 ; i < 3 ; i++)
    cin >> s[i];
     if (s[0]=="vertebrado"&&s[1]=="mamifero"&&s[2]=="onivoro"){
     	cout << "homem\n";
	 }

	 if (s[0]=="vertebrado"&&s[1]=="mamifero"&&s[2]=="herbivoro"){
     	cout << "vaca\n";
	 }

	 if (s[0]=="vertebrado"&&s[1]=="ave"&&s[2]=="carnivoro"){
     	cout << "aguia\n";
	 }
	 
	 if (s[0]=="vertebrado"&&s[1]=="ave"&&s[2]=="onivoro"){
     	cout << "pomba\n";
	 }
	 
	 //================================================================
	 
	 if (s[0]=="invertebrado"&&s[1]=="inseto"&&s[2]=="hematofago"){
     	cout << "pulga\n";
	 }
	 if (s[0]=="invertebrado"&&s[1]=="inseto"&&s[2]=="herbivoro"){
     	cout << "lagarta\n";
	 }
	 if (s[0]=="invertebrado"&&s[1]=="anelideo"&&s[2]=="hematofago"){
     	cout << "sanguessuga\n";
	 }
	 if (s[0]=="invertebrado"&&s[1]=="anelideo"&&s[2]=="onivoro"){
     	cout << "minhoca\n";
	 }
}
