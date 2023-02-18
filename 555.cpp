#include <stdio.h>
#include <iostream>

using namespace std;

main(){
	int year, m, d;
	cin >> year >> m >> d;
	if(year%400==0){
		cout << "visokosniy" << endl;	
	} else if(year%100==0){
		cout  << "nevisokosniy" << endl;
	} else if(year%4==0){
		cout  << "visokosniy" << endl;
	} else{ 
	    cout << "nevisokosniy" << endl;
	}
	
	switch (year%12){
		case 4:
			cout << "krisa" << endl;
			break;
		case 5:
			cout << "bik" << endl;
			break;
		case 6:
			cout << "tigr" << endl;
			break;
		case 7:
			cout << "krol" << endl;
			break;
		case 8:
			cout << "drakon" << endl;
			break;
		case 9:
			cout << "zmeya" << endl;
			break;
		case 10:
			cout << "loshad" << endl;
			break;
		case 11:
			cout << "koza" << endl;
			break;
		case 0:
			cout << "obezyana" << endl;
			break;
		case 1:
			cout << "petuh" << endl;
			break;
		case 2:
			cout << "sobaka" << endl;
			break;
		case 3:
			cout << "svinya" << endl;
			break;		
	}
	
	if((m==1&&d>19) || (m==2&&d<22)){
		cout << "vodolei" << endl;
			
	}else if((m==2&&d>19) || (m==3&&d<22)){
		cout << "ribi" << endl;
    }else if((m==3&&d>19) || (m==4&&d<22)){
		cout << "oven" << endl;
	}else if((m==4&&d>19) || (m==5&&d<22)){
		cout << "telec" << endl;
	}else if((m==5&&d>19) || (m==6&&d<22)){
		cout << "bliznecy" << endl;
	}else if((m==6&&d>19) || (m==7&&d<22)){
		cout << "rak" << endl;
	}else if((m==7&&d>19) || (m==8&&d<22)){
		cout << "lev" << endl;
	}else if((m==8&&d>19) || (m==9&&d<22)){
		cout << "deva" << endl;
	}else if((m==9&&d>19) || (m==10&&d<22)){
		cout << "visi" << endl;
	}else if((m==10&&d>19) || (m==11&&d<22)){
		cout << "scorpion" << endl;
	}else if((m==11&&d>19) || (m==12&&d<22)){
		cout << "strelec" << endl;
	}else if((m==12&&d>19) || (m==1&&d<22)){
		cout << "kozerog" << endl;
		}
				
}
