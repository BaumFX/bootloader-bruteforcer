#include <iostream>
#include <string>
#include <iostream>
#include <time.h>
#include <algorithm>

std::string get_random(size_t length)
{
	auto randchar = []() -> char
	{
		const char charset[] =
			"0123456789"
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"abcdefghijklmnopqrstuvwxyz";
		const size_t max_index = (sizeof(charset) - 1);
		return charset[rand() % max_index];
	};
	std::string str(length, 0);
	std::generate_n(str.begin(), length, randchar);
	return str;
}

int main()
{
	system("@echo off");
	system("cd ../../../");
	system("cls");
  std::cout << "welcome to baumfx' bootloader unlocking tool.\n";
	std::cout << "this tool was made & tested with a huawei p10 (vtr-l09).\n";
	std::cout << "please do not except this to work with other phones (it might though).\n";
	std::cout << "also the speed of this might depend on your cpu (shouldn't be bottlenecked by it but idk).\n";
	std::cout << "\n\nplease enter the path to your adb/fastboot executable (enter = standard path): ";
	std::string adb_path = "";
	std::getline(std::cin, adb_path);
	std::string cmd = adb_path + "fastboot oem unlock ";
	if (adb_path == "" || adb_path == " ") { cmd = "D:/huaweip10/platform-tools/fastboot oem unlock "; }
	std::string hahayes = "";
	unsigned long long int i = 0;
	while(true)
	{
		std::string command = cmd + get_random(16);
		system(command.c_str());
		std::cout << "\ndone with iteration " << i << ".\n";
		i++;
	}

	std::cout << "hahayes\n";
	std::getline(std::cin, hahayes);
}
