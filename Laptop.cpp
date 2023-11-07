#include "Laptop.h"
#include <iostream>
using namespace std;

Laptop::Laptop(string firm_name, string model, int RAM_size, string GPU_name, int GPU_size, 
			string CPU_name, int CPU_size, string motherboard) {
	this->firm_name = firm_name;
	this->model = model;
	this->RAM_size = RAM_size;
	this->GPU_name = GPU_name;
	this->GPU_size = GPU_size;
	this->CPU_name = CPU_name;
	this->CPU_size = CPU_size;
	this->motherboard = motherboard;
};

void Laptop::SetFirmName(string firm_name) { this->firm_name = firm_name; };
void Laptop::SetModel(string model) { this->model = model; };
void Laptop::SetRamSize(int ram_size) { RAM_size = ram_size; };
void Laptop::SetGpuName(string gpu_name) { GPU_name = gpu_name; };
void Laptop::SetGpuSize(int gpu_size) { GPU_size = gpu_size; };
void Laptop::SetCpuName(string cpu_name) { CPU_name = cpu_name; };
void Laptop::SetCpuSize(double cpu_size) { CPU_size = cpu_size; };
void Laptop::SetMotherboard(string motherboard) { this->motherboard = motherboard; };

string Laptop::GetFirmName() { return firm_name; };
string Laptop::GetModel() { return model; };
int Laptop::GetRamSize() { return RAM_size; };
string Laptop::GetGpuName() { return GPU_name; };
int Laptop::GetGpuSize() { return GPU_size; };
string Laptop::GetCpuName() { return CPU_name; };
double Laptop::GetCpuSize() { return CPU_size; };
string Laptop::GetMotherboard() { return motherboard; };

void Laptop::Show() {
	cout << "Laptop: " << firm_name << ' ' << model << endl;
	cout << "Motherboard: " << motherboard << endl;
	cout << "CPU: " << CPU_name << " - " << CPU_size << " HHz" << endl;
	cout << "GPU: " << GPU_name << " - " << GPU_size << " GB" << endl;
	cout << "RAM: " << RAM_size << " GB" << endl;
};

ostream& operator<<(ostream& out, const Laptop& obj) {
	out << "Laptop: " << obj.firm_name << ' ' << obj.model << endl;
	out << "Motherboard: " << obj.motherboard << endl;
	out << "CPU: " << obj.CPU_name << " - " << obj.CPU_size << " HHz" << endl;
	out << "GPU: " << obj.GPU_name << " - " << obj.GPU_size << " GB" << endl;
	out << "RAM: " << obj.RAM_size << " GB" << endl;
	return out;
}