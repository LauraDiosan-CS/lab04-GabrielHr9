#include<iostream>
#include"Film.h"
#include"Repository.h"
#include"Controller.h"
#include"Console.h"

int main() {

	Test_film();
	Test_Repo();
	Test_Controller();
	{
		Repository repo{};
		Controller ctr{ repo };
		Console ui{ ctr };
		ui.start();
	}
	
	return 0;

	
}