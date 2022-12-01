#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <windows.h>

std::map<std::string, std::string>stateCapitols; 
std::vector<std::string>stateNames;
std::string name;
char yesorno;
bool isrunning; 
int random{};
int tries{};
int score{};
void initialSetup();
void guessing();
void loadStates();

int main() {
	srand(time(NULL));
	initialSetup();

	while (isrunning) {
		guessing(); 
	}; 
	return 0; 
}

void initialSetup() {
	random = rand() % 49 + 0;
	loadStates();
	std::cout << "-------------The Capital Guessing Game-----------------\n";
	std::cout << " \n";
	std::cout << "Whats your name: ";
	std::getline(std::cin, name);
	std::cout << "\nHello " << name <<", "<<"do you want to continue with the game? ";
	std::cin >> yesorno; 
	std::cin.ignore();
	if (yesorno == 'Y') {
		isrunning = true; 
	
	}
	else if (yesorno == 'y') {
		isrunning = true;
		
	}
	else{
		std::cout << "Goodbye"; 
		isrunning = false;
	}
}

void guessing() {
	system("CLS");
	std::string capitolname;
	std::string state_name = stateNames[random];
	std::cout << " _________The Capital Guessing Game___________\n";
	std::cout << "|                                             |\n";
	std::cout << "|       " << name << "'s SCORE: " << score << "\n";
	std::cout << "|                                             |\n";
	std::cout << "|       Type end to quit the program          |\n";
	std::cout << "|                                             |\n";
	std::cout << "|     Spelling and capitalization matter      |\n";
	std::cout << "|                                             |\n";
	std::cout << "|_____________________________________________|\n";
	std::cout << "What is the capital for " << state_name << "? \n";
	std::cout << "Answer: ";
	std::getline(std::cin, capitolname);
	
	
	if (tries <= 1) {
		if (capitolname == stateCapitols[state_name]) {
			std::cout << "That is the right answer\n";
			Sleep(1000);
			system("CLS");
			tries = 0;
			score += 1; 
			random = rand() % 49 + 0;
		
		}
		else if (capitolname == "end") {
			std::cout << "Goodbye";
			isrunning = false;
		}
		else if (capitolname == "End") {
			std::cout << "Goodbye";
			isrunning = false;
		}
		else {
			int num = 2;
			std::cout << "Wrong answer, try again!!!\n";
			std::cout << "You have " << num - tries << " tries left\n";
			Sleep(1000);
			system("CLS");
			tries += 1;
		}
	}
	else {
		std::cout << "The correct capital name is: " << stateCapitols[state_name] << "\n";
		Sleep(1000);
		system("CLS");
		random = rand() % 49 + 0;
		tries = 0;
	}
}

void loadStates() {
	stateCapitols.insert(std::pair<std::string, std::string>("Alabama", "Montgomery"));
	stateCapitols.insert(std::pair<std::string, std::string>("Alaska", "Juneau"));
	stateCapitols.insert(std::pair<std::string, std::string>("Arizona", "Phoenix"));
	stateCapitols.insert(std::pair<std::string, std::string>("Arkansas", "Little Rock"));
	stateCapitols.insert(std::pair<std::string, std::string>("California", "Sacramento"));
	stateCapitols.insert(std::pair<std::string, std::string>("Colorado", "Denver"));
	stateCapitols.insert(std::pair<std::string, std::string>("Delaware", "Dover"));
	stateCapitols.insert(std::pair<std::string, std::string>("Florida", "Tallahassee"));
	stateCapitols.insert(std::pair<std::string, std::string>("Georgia", "Atlanta"));
	stateCapitols.insert(std::pair<std::string, std::string>("Hawaii", "Honolulu"));
	stateCapitols.insert(std::pair<std::string, std::string>("Idaho", "Boise"));
	stateCapitols.insert(std::pair<std::string, std::string>("Illinois", "Springfiel"));
	stateCapitols.insert(std::pair<std::string, std::string>("Indiana", "Indianapolis"));
	stateCapitols.insert(std::pair<std::string, std::string>("Iowa", "Des Moines"));
	stateCapitols.insert(std::pair<std::string, std::string>("Kansas", "Topeka"));
	stateCapitols.insert(std::pair<std::string, std::string>("Kentucky", "Frankfort"));
	stateCapitols.insert(std::pair<std::string, std::string>("Louisiana", "Baton Rouge"));
	stateCapitols.insert(std::pair<std::string, std::string>("Maine", "Augusta"));
	stateCapitols.insert(std::pair<std::string, std::string>("Maryland", "Annapolis"));
	stateCapitols.insert(std::pair<std::string, std::string>("Massachusetts", "Boston"));
	stateCapitols.insert(std::pair<std::string, std::string>("Michigan", "Lansing"));
	stateCapitols.insert(std::pair<std::string, std::string>("Minnesota", "Saint Paul"));
	stateCapitols.insert(std::pair<std::string, std::string>("Mississippi", "Jackson"));
	stateCapitols.insert(std::pair<std::string, std::string>("Missouri",	"Jefferson City"));
	stateCapitols.insert(std::pair<std::string, std::string>("Montana",	"Helena"));
	stateCapitols.insert(std::pair<std::string, std::string>("Nebraska",	"Lincoln"));
	stateCapitols.insert(std::pair<std::string, std::string>("Nevada",	"Carson City"));
	stateCapitols.insert(std::pair<std::string, std::string>("New Hampshire",	"Concord"));
	stateCapitols.insert(std::pair<std::string, std::string>("New Jersey",	"Trenton"));
	stateCapitols.insert(std::pair<std::string, std::string>("New Mexico",	"Santa Fe"));
	stateCapitols.insert(std::pair<std::string, std::string>("New York",	"Albany"));
	stateCapitols.insert(std::pair<std::string, std::string>("North Carolina",	"Raleigh"));
	stateCapitols.insert(std::pair<std::string, std::string>("North Dakota",	"Bismarck"));
	stateCapitols.insert(std::pair<std::string, std::string>("Ohio",	"Columbus"));
	stateCapitols.insert(std::pair<std::string, std::string>("Oklahoma",	"Oklahoma City"));
	stateCapitols.insert(std::pair<std::string, std::string>("Oregon",	"Salem"));
	stateCapitols.insert(std::pair<std::string, std::string>("Pennsylvania",	"Harrisburg"));
	stateCapitols.insert(std::pair<std::string, std::string>("Rhode Island",	"Providence"));
	stateCapitols.insert(std::pair<std::string, std::string>("South Carolina",	"Columbia"));
	stateCapitols.insert(std::pair<std::string, std::string>("South Dakota",	"Pierre"));
	stateCapitols.insert(std::pair<std::string, std::string>("Tennessee",	"Nashville"));
	stateCapitols.insert(std::pair<std::string, std::string>("Texas",	"Austin"));
	stateCapitols.insert(std::pair<std::string, std::string>("Utah",	"Salt Lake City"));
	stateCapitols.insert(std::pair<std::string, std::string>("Vermont",	"Montpelier"));
	stateCapitols.insert(std::pair<std::string, std::string>("Virginia",	"Richmond"));
	stateCapitols.insert(std::pair<std::string, std::string>("Washington",	"Olympia"));
	stateCapitols.insert(std::pair<std::string, std::string>("West Virginia",	"Charleston"));
	stateCapitols.insert(std::pair<std::string, std::string>("Wisconsin",	"Madison"));
	stateCapitols.insert(std::pair<std::string, std::string>("Wyoming",	"Cheyenne"));

	stateNames.push_back("Alabama");
	stateNames.push_back("Alaska");
	stateNames.push_back("Arizona");
	stateNames.push_back("Arkansas");
	stateNames.push_back("California");
	stateNames.push_back("Colorado");
	stateNames.push_back("Connecticut");
	stateNames.push_back("Delaware");
	stateNames.push_back("Florida");
	stateNames.push_back("Georgia");
	stateNames.push_back("Hawaii");
	stateNames.push_back("Idaho");
	stateNames.push_back("Illinois");
	stateNames.push_back("Indiana");
	stateNames.push_back("Iowa");
	stateNames.push_back("Kansas");
	stateNames.push_back("Kentucky");
	stateNames.push_back("Louisiana");
	stateNames.push_back("Maine");
	stateNames.push_back("Maryland");
	stateNames.push_back("Massachusetts");
	stateNames.push_back("Michigan");
	stateNames.push_back("Minnesota");
	stateNames.push_back("Mississippi");
	stateNames.push_back("Missouri");
	stateNames.push_back("Montana");
	stateNames.push_back("Nebraska");
	stateNames.push_back("Nevada");
	stateNames.push_back("New Hampshire");
	stateNames.push_back("New Jersey");
	stateNames.push_back("New Mexico");
	stateNames.push_back("New York");
	stateNames.push_back("North Carolina");
	stateNames.push_back("North Dakota");
	stateNames.push_back("Ohio");
	stateNames.push_back("Oregon");
	stateNames.push_back("Pennsylvania");
	stateNames.push_back("Rhode Island");
	stateNames.push_back("South Carolina");
	stateNames.push_back("South Dakota");
	stateNames.push_back("Tennessee");
	stateNames.push_back("Texas");
	stateNames.push_back("Utah");
	stateNames.push_back("Vermont");
	stateNames.push_back("Virginia");
	stateNames.push_back("Washington");
	stateNames.push_back("West Virginia");
	stateNames.push_back("Wisconsin");
	stateNames.push_back("Wyoming");
}