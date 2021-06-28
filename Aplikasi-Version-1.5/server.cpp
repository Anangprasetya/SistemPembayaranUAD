#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include <sstream>
#include "Run/server_running.h"
using namespace std;


int main(){

	Server * App;
	App = new Server();

	App->run();


	return 0;
}