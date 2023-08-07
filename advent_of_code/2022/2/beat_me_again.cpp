#include <iostream>
#include <fstream>
#include <string>
#include <map>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3
#define WIN 6
#define DRAW 3
#define LOSS 0

int main(){
	
	std::map<std::string, int> move_code{{"A", 1}, {"B", 2}, {"C", 3}};
	std::map<std::string, int> strat_code{{"X", 0}, {"Y", 3}, {"Z", 6}};
	std::cout << "Hello World!" << std::endl;
	std::fstream newfile;
	newfile.open("input.txt", std::fstream::in);
	if (newfile.is_open()){
		std::string line;
		int score = 0;
		while(getline(newfile, line)){
			int round_score = 0;
			std::string enemy = line.substr(0, line.find(' ')); 
			std::string me = line.substr(line.find(' ')+1);
			// split line into your and enemys move
			// A,X=Rock; B,Y=Paper; C,Z=Scissors
			//
			// Calculate Score:
			// 	loss = 0; draw = 3; win = 6
			// 	rock = 1; paper = 2; scissors = 3;

			// check round result:
			int enemy_code = move_code[enemy];
			int my_strat = strat_code[me];
			round_score += my_strat;
			if (my_strat == DRAW) round_score += enemy_code;
			else if (enemy_code == ROCK) round_score += my_strat == WIN ? PAPER : SCISSORS;
			else if (enemy_code == PAPER) round_score += my_strat == WIN ? SCISSORS : ROCK;
			else if (enemy_code == SCISSORS) round_score += my_strat == WIN ? ROCK : PAPER; 
			score += round_score;
			
		}
		newfile.close();
		std::cout << score << std::endl;
	}
}

