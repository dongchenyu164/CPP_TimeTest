#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>
#include <string>
#include <sstream>

#include <sys/stat.h>
#include <sys/types.h>

int main()
{
	//dfsfsafsfsf
	auto t = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	std::stringstream Time;
	Time << std::put_time(std::localtime(&t), "%Y-%m-%d_%H-%M-%S");
	std::string Save_Path = "/home/dong/Workspace/dong/DataRecord/";
	std::string str = Save_Path + Time.str() + "/";
	mkdir(str.c_str(), S_IRWXU);
	return 0;
}
