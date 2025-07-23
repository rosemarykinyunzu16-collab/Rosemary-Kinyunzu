

using namespace std;

int main()
{
	float salary, years_of_service, bonus, total_salary;
	cout<<"Enter your salary, years_of_service: "<<endl;
	cin>>salary>>years_of_service;
	
	if (years_of_service > 10){
		bonus=0.1*salary;
		total_salary=bonus+salary;
	}
	else if (years_of_service>=6 && years_of_service<=10){
		bonus=0.08*salary;
		total_salary=bonus+salary;
	}
	else if (years_of_service<6){
		bonus=0.06*salary;
		total_salary=bonus+salary;
	}
    cout <<"The Net bonus is: "<<endl;
    cout<<"The total_salary is: "<<endl;
    
    return 0;
    