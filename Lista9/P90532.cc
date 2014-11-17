#include <iostream>
#include <vector>
using namespace std;


struct Province {
	string name;
	string capital; 
	int population; 
	int area; 
	double gdp; 
};

struct Country { 
	string name; 
	string capital; 
	vector<Province> provs;
};

typedef vector<Country> Countries;

double gdp(const Countries& p, char c, double d){
	double sum_gdp = 0, country_size = p.size();
	for(int i = 0; i < country_size; ++i){
		if(p[i].name[0] == c){
			
			vector<Province> provs = p[i].provs;
			int province_size = provs.size();
			
			for(int j = 0; j < province_size; ++j){
				//cout << "name: " << provs[j].name << " population: " <<  provs[j].population << endl;
				//cout << "name: " << provs[j].name << " area: " <<  provs[j].area << endl;
				double population = provs[j].population;
				double area = provs[j].area;
				double density = population / area;
				if(density > d) sum_gdp += provs[j].gdp;
				//cout << endl;
			}
		}
	}
	return sum_gdp;
}

int main(){
	Province p1;
	p1.name = "p1";
	p1.population = 2000;
	p1.area = 100;
	p1.gdp = 50;
	
	Province p2;
	p2.name = "p2";
	p2.population = 4000;
	p2.area = 200;
	p2.gdp = 50;	
	
	Province p3;
	p3.name = "p3";
	p3.population = 100;
	p3.area = 100;
	p3.gdp = 50;
	
	vector<Province> provs (3);
	provs[0]=p1;
	provs[1]=p2;
	provs[2]=p3;
	
	Country c1;
	c1.name="espa";
	c1.provs=provs;
	
	
	Province p21;
	p21.name = "p21";
	p21.population = 8000;
	p21.area = 400;
	p21.gdp = 50;
	
	Province p22;
	p22.name = "p22";
	p22.population = 40000;
	p22.area = 2000;
	p22.gdp = 50;
	
	vector<Province> provs2 (2);
	provs2[0]=p21;
	provs2[1]=p22;
	
	Country c2;
	c2.name="es";
	c2.provs=provs2;
	
	vector<Country> countryVec (2);
	countryVec[0] =c1;
	countryVec[1] =c2;
	Countries coun = countryVec;
	
	cout << gdp(coun,'e',19);
}
