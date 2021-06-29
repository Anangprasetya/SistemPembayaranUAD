#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include "Run/client_running.h"
using namespace std;


int main(){

	Client * App;
	App = new Client();

	App->run();


	return 0;
}
