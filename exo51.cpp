#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
	vector <string> listeNom;
	string nom;
	do{	
		getline(cin,nom);
		listeNom.push_back(nom);
		
	}while (!nom.empty());
	for (auto x : listeNom){
		cout<<x<<endl;
	}
}
