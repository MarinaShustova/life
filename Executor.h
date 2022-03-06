#include <string>
#include <sstream>
#include "Body.h"
class Executor
{
public:
	void get_command(std::string ss, Body &BB, std::string &com, int &X, int &Y, std::string &filename);
	void perform_command(std::string com, int X, int Y, Body &BB, std::string &filename);
private:
	std::string command;
	std::stringstream str;
};