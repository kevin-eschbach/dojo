#include <iostream>
#include <fstream>
#include <string>
#include <map>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main(){
	
	std::map<std::string, int> move_code{{"A", 1}, {"B", 2}, {"C", 3}, {"X", 1}, {"Y", 2}, {"Z", 3}};

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
			int my_code = move_code[me];
			round_score += my_code;
			if (my_code == enemy_code) round_score += 3;
			else {
				if (my_code == ROCK){
					round_score += enemy_code == SCISSORS ? 6 : 0;
				} else if (my_code == PAPER) {
					round_score += enemy_code == ROCK ? 6 : 0;
				} else if (my_code == SCISSORS) {
					round_score += enemy_code == PAPER ? 6 : 0;
				}
			}
			score += round_score;
			
		}
		newfile.close();
		std::cout << score << std::endl;
	}
}

