#pragma once
#include <iostream>
using namespace std;
class Ticket_Staff
{
private:
	int idCar;
	string name;
	double n_o_t_s;

public:
	Ticket_Staff();
	Ticket_Staff(int idCar, string name, double n_o_t_s);

	//SET
	void setIDCar(int idCar);
	void setName(string name);
	void setN_O_T_S(double n_o_t_s);

	//GET
	int getIDCar();
	string getName();
	double getN_O_T_S();

	//INPUT
	void input();

	//OUTPUT
	void ouput();

	//CACULATESALARY
	double caculatesalary();

	//CACULATEBONUS
	double caculatebonus();
};

