#pragma once
#include <iostream>
using namespace std;

class Laptop {
	string firm_name;
	string model;
	int RAM_size;
	string GPU_name;
	int GPU_size;
	string CPU_name;
	double CPU_size;
	string motherboard;
public:
	Laptop() = default;
	Laptop(string firm_name, string model, int RAM_size, string GPU_name, int GPU_size, 
		string CPU_name, int CPU_size, string motherboard);
	
	void SetFirmName(string firm_name);
	void SetModel(string model);
	void SetRamSize(int ram_size);
	void SetGpuName(string gpu_name);
	void SetGpuSize(int gpu_size);
	void SetCpuName(string cpu_name);
	void SetCpuSize(double firm_name);
	void SetMotherboard(string motherboard);

	string GetFirmName();
	string GetModel();
	int GetRamSize();
	string GetGpuName();
	int GetGpuSize();
	string GetCpuName();
	double GetCpuSize();
	string GetMotherboard();

	void Show();

	friend ostream& operator<<(ostream& out, const Laptop& obj);
};

