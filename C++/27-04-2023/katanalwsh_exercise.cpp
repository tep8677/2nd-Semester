#include <iostream>
#include <vector>

using namespace std;


vector<string> kwdikos;
vector<int> katanalwsh;
vector<float> logariasmos;
vector<float> revEYDAP;

int setKatanalwsh(int tempKatanal){
	if(tempKatanal<1){
			return 1;
		}
		else{
			return 0;
		}
};

int setResume(string resume){
	if (resume=="n"||resume=="y"){
		return 0;
	}
	else{
		return 1;
	}
};

float EYDAPkerdh(float xrewshNerou){
			xrewshNerou;
			float apoxeteysh;
			float tempEYDAP;
			apoxeteysh=0.75*xrewshNerou;
			return xrewshNerou+apoxeteysh+3;
		};
		
		float Logariasmos(float EYDAPkerdh){
			float FPA=EYDAPkerdh*0.2;
			return EYDAPkerdh+FPA;
		};

void YpologismosKatanalwshs(vector<int> katanalwsh,vector<int> logariasmos){
	for (int i=0;i<katanalwsh.size();i++){
		int nowKatanalwsh=katanalwsh[i];
		float xrewshNerou;
		
			if(nowKatanalwsh>=1||nowKatanalwsh<16){
				xrewshNerou=nowKatanalwsh*0.35;
				revEYDAP.push_back(EYDAPkerdh(xrewshNerou));
				logariasmos.push_back(Logariasmos(EYDAPkerdh(xrewshNerou)));
			}
			else if(nowKatanalwsh>=16||nowKatanalwsh<61){
				xrewshNerou=nowKatanalwsh*0.64;
				revEYDAP.push_back(EYDAPkerdh(xrewshNerou));
				logariasmos.push_back(Logariasmos(EYDAPkerdh(xrewshNerou)));
			}
			else if(nowKatanalwsh>=61||nowKatanalwsh<86){
				xrewshNerou=nowKatanalwsh*1.83;
				revEYDAP.push_back(EYDAPkerdh(xrewshNerou));
				logariasmos.push_back(Logariasmos(EYDAPkerdh(xrewshNerou)));
			}
			else if(nowKatanalwsh>=86||nowKatanalwsh<111){
				xrewshNerou=nowKatanalwsh*2.56;
				revEYDAP.push_back(EYDAPkerdh(xrewshNerou));
				logariasmos.push_back(Logariasmos(EYDAPkerdh(xrewshNerou)));
			}
			else if(nowKatanalwsh>=111){
				xrewshNerou=nowKatanalwsh*3.2;
				revEYDAP.push_back(EYDAPkerdh(xrewshNerou));
				logariasmos.push_back(Logariasmos(EYDAPkerdh(xrewshNerou)));
			}
		
		
	}
};


int main(){
	bool gettingInput=true;
	
	string tempKwd;
	int tempKatanal;


	string resume;
	
	while (gettingInput){
		
		cout << endl << "Eishgage kwdiko pelath:";
		cin >> tempKwd;
		kwdikos.push_back(tempKwd);
		do {
			cout << endl << "Eishgage katanalwsh pelath se m^3 prohgoymenou 3hmhnou:";
			cin >> tempKatanal;
		}while(setKatanalwsh(tempKatanal));
		katanalwsh.push_back(tempKatanal);
		
		do{
			cout << endl << "Continue (y or n):";
			cin >> resume;
		}while(setResume(resume));
		
		if(resume=="y"){
			continue;
		}
		else {break;}
		
		
		
	};
	
	cout << "Kwdikoi xrhstwn" << endl;
	cout << "===============" << endl;

	for(int i=0;i<kwdikos.size();i++){	
		cout << i << ": "<< kwdikos[i] << endl;
	}
	
	cout << "Katanalwsh xrhstwn" << endl;
	cout << "===============" << endl;
	
	for(int i=0;i<kwdikos.size();i++){		
		cout << i << ": "<< katanalwsh[i] << endl;
	}
	
	cout << endl;
	
	
		
	return 0;
}
