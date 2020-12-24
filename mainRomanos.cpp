#include <iostream>
#include <cstring>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string n;
	cout <<"Digita una letra que corresponda a un numero romano ";
	cin >>n;
	if((n=="I")||(n=="i")){cout<<"El numero es uno";
	}else if((n=="II")||(n=="ii")){cout<<"El numero es dos";
	}else if((n=="III")||(n=="iii")){cout<<"El numero es tres";
    }else if((n=="IV")||(n=="iv")){cout<<"El numero es cuatro";
    }else if((n=="V")||(n=="v")){cout<<"El numero es cinco";
    }else if((n=="VI")||(n=="vi")){cout<<"El numero es seis";
    }else if((n=="VII")||(n=="vii")){cout<<"El numero es siete";
    }else if((n=="VIII")||(n=="viii")){cout<<"El numero es ocho";
    }else if((n=="IX")||(n=="ix")){cout<<"El numero es nueve";
    }else if((n=="X")||(n=="x")){cout<<"El numero es diez";
    }else {cout<<"No es un numero romano valido";
}
	return 0;
}
