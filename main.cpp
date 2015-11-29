//
//  main.cpp
//  TOEIC - Grammar
//  Created by Mathieu Spegagne on 29/11/2015.
//  Copyright (c) 2015 Mathieu Spegagne. All rights reserved.

#include <vector>
#include <iostream>
#include <string>
#include <random>

using namespace std;


void intro(){
	printf("##########################################################\n");
	printf("# Welcome to the ultimate english grammar lesson.		  \n");	
	printf("# Please choose an exercice:                    		  \n");	
	printf("# [1]: Prepositions                             		  \n");
	printf("# [2]: Grammar Test (20 random questions)       		  \n");	
	printf("# [stop]: Exit							           			  \n");	
	printf("##########################################################\n");
}


void prepositions(){

	printf("##########################################################\n");
	printf("# For each sentence, please write the right preposition.  \n");	
	printf("# write to+inf or to+ing if needed.						  \n");
	printf("# If no preposition is required, write 0.				  \n");
	printf("# To stop the exercice, write stop as an answer.		  \n");		
	printf("##########################################################\n");
	

	vector<std::pair<string, string> > questions;

	questions.push_back(std::make_pair("to be sorry", "about"));
	questions.push_back(std::make_pair("to be worried", "about"));
	questions.push_back(std::make_pair("to complain", "about"));
	questions.push_back(std::make_pair("to think", "about"));
	questions.push_back(std::make_pair("to approve", "of"));
	questions.push_back(std::make_pair("to be afraid", "of"));
	questions.push_back(std::make_pair("to be guilty", "of"));
	questions.push_back(std::make_pair("to be proud", "of"));
	//questions.push_back(std::make_pair("to think", "of"));
	questions.push_back(std::make_pair("to be aware", "of"));
	questions.push_back(std::make_pair("to be tired", "of"));
	questions.push_back(std::make_pair("to be short", "of"));
	questions.push_back(std::make_pair("to be in charge", "of"));
	questions.push_back(std::make_pair("to be surprised", "at"));
	questions.push_back(std::make_pair("to laugh", "at"));
	questions.push_back(std::make_pair("to depend", "on"));
	questions.push_back(std::make_pair("to live", "on"));
	questions.push_back(std::make_pair("to apologise", "for"));
	questions.push_back(std::make_pair("to forgive", "for"));
	questions.push_back(std::make_pair("to be responsible", "for"));
	questions.push_back(std::make_pair("to wait", "for"));
	questions.push_back(std::make_pair("a need", "for"));
	questions.push_back(std::make_pair("a reason", "for"));
	questions.push_back(std::make_pair("similar", "to"));
	questions.push_back(std::make_pair("superior", "to"));
	questions.push_back(std::make_pair("to listen", "to"));
	questions.push_back(std::make_pair("to forget", "to+inf"));
	questions.push_back(std::make_pair("to be accustomed", "to+ing"));
	questions.push_back(std::make_pair("to be/get used", "to+ing"));
	questions.push_back(std::make_pair("to look forward", "to+ing"));
	questions.push_back(std::make_pair("to borrow", "from"));
	questions.push_back(std::make_pair("to be different", "from"));
	questions.push_back(std::make_pair("to recover", "from"));
	questions.push_back(std::make_pair("to suffer", "from"));
	questions.push_back(std::make_pair("to agree", "with"));
	questions.push_back(std::make_pair("to be acquainted", "with"));
	questions.push_back(std::make_pair("to be bored", "with"));
	questions.push_back(std::make_pair("to be charged", "with"));
	questions.push_back(std::make_pair("to compare", "with"));
	questions.push_back(std::make_pair("to be happy", "with"));
	questions.push_back(std::make_pair("to be satisfied", "with"));
	questions.push_back(std::make_pair("to be crowded", "with"));
	questions.push_back(std::make_pair("to be interested", "in"));
	questions.push_back(std::make_pair("to access", "0"));
	questions.push_back(std::make_pair("to enter", "0"));
	questions.push_back(std::make_pair("to have difficulty (+ing)", "0"));
	questions.push_back(std::make_pair("to discuss", "0"));
	questions.push_back(std::make_pair("to phone", "0"));
	questions.push_back(std::make_pair("to call", "0"));

	bool doIt = true;
	int score = 0;
	int nbQuest = 0;

	while(doIt){
		nbQuest++;

		std::random_device random_device;
		std::mt19937 engine(random_device());
		std::uniform_int_distribution<int> dist(0, questions.size() - 1);
		
		std::pair<string, string>  random_question = questions[dist(engine)];

		string question = random_question.first;
		string right_answer = random_question.second;

		string answer; 

		cout << question << " ";
		cin >> answer;

		if(answer == "stop"){
			doIt = false;
			intro();
			return;
		}	
		if(answer == right_answer){
			score++;
			cout << "Right ! " << question << " " << right_answer << endl;			
			cout << "Score : " << score << "/"<< nbQuest << endl;
			cout << endl;
		}	
		else{
			cout << "False ! " << question << " " << right_answer << endl;			
			cout << "Score : " << score << "/"<< nbQuest << endl;
			cout << endl;
		}		
	

	}
	return;

}

void test(){

	printf("##########################################################\n");
	printf("# For each sentence, please write the right answer (A not a). \n");	
	printf("# To stop the exercice, write stop as an answer.		  \n");		
	printf("##########################################################\n");
	

	vector<std::pair<string, string> > questions;

	//Questions from ACHIEVE TOEIC Practice Test N°1
	questions.push_back(std::make_pair("I wish I .... reach Mr. Wang now, but unfortunately he does not have a cellular phone. \n A. can | B. could | C. have | D. would have\n", "B"));
	questions.push_back(std::make_pair("More and more British comapnies cut .... by outsourcing part of their services from India. \n A. costs | B. products | C. bribes | D. money\n", "A"));
	questions.push_back(std::make_pair("We closed .... the store located in Dublin because it was not profitable enough. \n A. away | B. up | C. down | D. through\n", "C"));
	questions.push_back(std::make_pair("We will take the necessary steps to .... that your order is delivered in time. \n A. ensure | B. assure | C. reassure | D. measure\n", "A"));
	questions.push_back(std::make_pair("The annual conference will .... in Munich next year in June. \n A. hold | B. be held | C. be holding | D. have held\n", "B"));
	questions.push_back(std::make_pair("If he is transferres to another department, we will have to .... a new production manager by the end of the year. \n A. apply | B. deplete | C. dismiss | D. appoint\n", "D"));
	questions.push_back(std::make_pair("Ferguson is a medium-size company organized .... five main departments. \n A. into | B. of | C. to | D. at\n", "A"));
	questions.push_back(std::make_pair("The candidate who was selected has a very good track .... in marketing. \n A. rate | B. path | C. record | D. career\n", "C"));
	questions.push_back(std::make_pair("Let me introduce you to Ms. Smith who is the personnal assistant .... Mr. Johnson. \n A. of | B. to | C. at | D. from\n", "B"));
	questions.push_back(std::make_pair("All the factory workers have to use an electronic card to .... in when they arrive. \n A. enter | B. clock | C. access | D. penetrate\n", "B"));
	questions.push_back(std::make_pair("He is very efficient and has an excellent background but does not like working .... deadlines. \n A. to | B. for | C. at | D. in\n", "A"));
	questions.push_back(std::make_pair(".... upstream planning will probably cause logistical problems at some stage. \n A. insistent | B. insolvent | C. dependant | D. insufficient\n", "D"));
	questions.push_back(std::make_pair("Due to poor sales, the company announced that ther will be some staff .... over the next year. \n A. settings | B. outdoors | C. cutbacks | D. premises\n", "C"));
	questions.push_back(std::make_pair("Two of our main .... are going to launch a similar model at the end of May. \n A. competes | B. competitors | C. competitive | D. competitions\n", "B"));
	questions.push_back(std::make_pair("This company is .... for its creativity and the quality of its products. \n A. proud | B. celebrate | C. renowned | D. outspoken\n", "C"));
	questions.push_back(std::make_pair("I would like .... my acceptance of the post of sales representative. \n A. confirm | B. to confirm | C. confirming | D. having confirmed\n", "B"));
	questions.push_back(std::make_pair("Most of our .... oulet are located in the USA and the middle East. \n A. shop | B. retail | C. custom | D. market share\n", "B"));
	questions.push_back(std::make_pair("She always talked about her new job so ..... that we never suspected she was going to resign. \n A. exciting | B. excited | C. excitedly | D. excitement\n", "C"));
	questions.push_back(std::make_pair("Our last advertising campaign was so successful because it really was attention-.... . \n A. taking | B. holding | C. noticing | D. grabbing\n", "D"));
	questions.push_back(std::make_pair("The announcement was such .... he thought he was dreaming. \n A. a surprise | B. surprise | C. surprised | D. surprising\n", "A"));
	questions.push_back(std::make_pair("Their start-up company has a .... of 60 people but it may double in size by the end of next year. \n A. skill | B. payroll | C. provider | D. employment\n", "B"));
	questions.push_back(std::make_pair("The new head office is  .... 25 miles away from the main airport. \n A. locating | B. locate | C. located | D. location\n", "C"));
	questions.push_back(std::make_pair("If you had told us that it was going to take so much time, we .... much earlier. \n A. had arrived | B. would have arrived | C. were arriving | D. were going to arrive\n", "B"));
	questions.push_back(std::make_pair("According to a recent survey, the government's new foreign policy is not .... to reduce unemployment. \n A. well | B. current | C. helping | D. suitable\n", "C"));
	questions.push_back(std::make_pair("Our company is not .... to face a hostile tender offer from its main competitor. \n A. enough large | B. large enough | C. as large | D. larger\n", "B"));
	questions.push_back(std::make_pair("This position .... a lot of flexibility and at least five years' experience in the tourist industry. \n A. requires | B. requests | C. resigns | D. refills\n", "A"));
	questions.push_back(std::make_pair("He had better .... as soon as possible if he wants to be on time for his job interview. \n A. left | B. leave | C. to leave | D. leaving\n", "B"));
	questions.push_back(std::make_pair("He sent a message to confirm his .... with the vice-president tomorrow at 10:30. \n A. agenda | B. income | C. delay | D. appointment\n", "D"));
	questions.push_back(std::make_pair("You should not spend all your free time .... stupid talk shows on tv. \n A. to watch | B. watching | C. in watching | D. to be watching\n", "B"));
	questions.push_back(std::make_pair("Very .... people are allowed to get into research department unless they work for the company. \n A. few | B. less | C. much | D. little\n", "A"));
	questions.push_back(std::make_pair(".... their shares are rising, they are still determined to relocate production to Eastern Europe. \n A. yet | B. despite | C. however | D. although\n", "D"));
	questions.push_back(std::make_pair("The two young interns said a few word to introduce .... to the team. \n A. them | B. themselves | C. they | D. their\n", "B"));
	questions.push_back(std::make_pair("Neither the marketing manager .... his deputy will attend the preentation next Tuesday. \n A. either | B. or | C. nor | D. as well as\n", "C"));
	questions.push_back(std::make_pair("The article said the company .... chairmain resigned yesterday was about to file for bankruptcy. \n A. who | B. whom | C. whose | D. which\n", "C"));
	questions.push_back(std::make_pair("The press statement issued this morning confirmed that the .... had been conducted successfully. \n A. expert | B. exploit | C. experience | D. experiment\n", "D"));
	questions.push_back(std::make_pair("All .... spare parts are usually replaced free of charge. \n A. abusive | B. tentative | C. defective | D. incentive\n", "C"));
	questions.push_back(std::make_pair("Grayson-Pitt is a Chicago-.... company which was founded by Adam Grayson in 1963. \n A. base | B. based | C. basing | D. basis\n", "B"));
	questions.push_back(std::make_pair("The supplier granted us a 10\% discount on the next shipment to .... the damage caused. \n A. make up for | B. make out | C. make over | D. make\n", "A"));
	questions.push_back(std::make_pair("We will have to keep our old car. We can't afford .... a new one. \n A. buying | B. in buying | C. buy | D. to buy\n", "D"));
	questions.push_back(std::make_pair("Statistics show that most prices .... by about 5\% when the new currency waq introduced. \n A. rise | B. raise | C. rose | D. raised\n", "C"));


	//Questions from MINI-TEST 2
	questions.push_back(std::make_pair("The young intern who was hired last month is quite .... about accounting. \n A. known | B. knowing | C. knowledge | D. knowledgeable\n", "D"));
	questions.push_back(std::make_pair("I have a lot of work to do this afternoon, so please do not phone me .... it is something urgent. \n A. if | B. even | C. unless | D. despite\n", "C"));
	questions.push_back(std::make_pair("The detailed specifications must be .... before the end of the year. \n A. attended | B. reminded | C. committed | D. submitted\n", "D"));
	questions.push_back(std::make_pair("The advertising agency suggested .... the spring sales campaign at the end of March. \n A. that we start | B. us to start | C. to start | D. start\n", "A"));
	questions.push_back(std::make_pair("We have .... to Korea twice this year in order to make contacts and develop a joint venture. \n A. went | B. been | C. gone | D. go\n", "B"));
	questions.push_back(std::make_pair("Although we had left home on time, we arrived at the airport much .... than we expected. \n A. late | B. later | C. lately | D. latest\n", "B"));
	questions.push_back(std::make_pair("Sales of our new model .... from 8,000 to 5,000 units due to problems with the automatic gear box system. \n A. grew | B. soared | C. dropped | D. took off\n", "C"));
	questions.push_back(std::make_pair("We have four elevators in this building but ..... seem to be working this morning. \n A. neither of them | B. none of them | C. both of them | D. all of them\n", "B"));
	questions.push_back(std::make_pair("It is important than he .... his internship before accepting any job offer. \n A. finish | B. finishes | C. will finish | D. finished\n", "A"));
	questions.push_back(std::make_pair("We will never reach a compromise unless they ..... to change the terms of the contract. \n A. end | B. agree | C. accept | D. consider\n", "B"));
	questions.push_back(std::make_pair("You cannot access .... where all the financial transactions are made unless you are a staff member. \n A. the room | B. in the room | C. to the room | D. into the room\n", "A"));
	questions.push_back(std::make_pair(".... speaking, this implies relocating part of our production to the far East. \n A. Broad | B. Broader | C. Broaden | D. Broadly\n", "D"));
	questions.push_back(std::make_pair("As he was afraid of missing his flight, the manager .... his assitant to drive him to the airport. \n A. made | B. had | C. got | D. let\n", "C"));
	questions.push_back(std::make_pair("We must go to sleep now if we really want to .... early tomorrow morning. \n A. set up | B. set off | C. set back | D. set aside\n", "B"));
	questions.push_back(std::make_pair("Ms. Brown answers the phone and replies to my e-mails when I am on ..... abroad. \n A. appointment | B. assignement | C. average | D. travel\n", "B"));
	questions.push_back(std::make_pair("From now an we will have to work much ... to improve the quality of our components. \n A. hard | B. harder | C. hardly | D. as hard\n", "B"));
	questions.push_back(std::make_pair("I am used .... lunch with my colleagues at least once a week. \n A. have | B. to have | C.  having | D. to having\n", "D"));
	questions.push_back(std::make_pair("Our performance figures for this year are .... our expectations, which is rather surprising given the current economic climate. \n A. at | B. amid | C. beyond | D. throughout\n", "C"));
	questions.push_back(std::make_pair("Having been in charge of the New York office for even ten years, he realized he had reached a .... point in his career. \n A. rolling | B. turning | C. passing | D. crossing\n", "B"));
	questions.push_back(std::make_pair("He still has trouble following a conversation with native English speakers but he can make himself .... pretty well. \n A. understood | B. understand | C. to understand | D. understanding\n", "A"));
	

	//Questions from MINI-TEST 1
	questions.push_back(std::make_pair("The most .... part in the President's speech was when he outlined his strategy for the next five years. \n A. interest | B. interested | C. interesting | D. interestingly\n", "C"));
	questions.push_back(std::make_pair("If you had .... me that it was her birthday yesterday, I would have bought her some flowers. \n A. reminded | B. remembered | C. repeated | D. recalled\n", "A"));
	questions.push_back(std::make_pair("This magazine gives reliable information about domestic affairs as well as political and .... issues. \n A. economics | B. economic | C. economical | D. economocally\n", "B"));
	questions.push_back(std::make_pair("The government intends to reduce the mount of the .... paid to people without jobs. \n A. benefits | B. rewards | C. advantages | D. wages\n", "A"));
	questions.push_back(std::make_pair("I am trying to .... the number of applications I have sent in the last three weeks. \n A. work | B. work out | C. work up to | D. work away\n", "B"));
	questions.push_back(std::make_pair("In order to reduce costs, the company decided to .... two hundred assembly line workers. \n A. fulfil | B. devise | C. lay off | D. take over\n", "C"));
	questions.push_back(std::make_pair("Recent statistics show that .... companies operating in this field reduce costs by outsourcing part of their activity. \n A. most | B. most of | C. the most | D. mostly\n", "A"));
	questions.push_back(std::make_pair("Even though he resigned a couple of months ago, he is .... an active member of th board. \n A. ever | B. still | C. again | D. any more\n", "B"));
	questions.push_back(std::make_pair("Three ..... employees went on strike and demonstrated to protest against the restrucuring plan. \n A. thousands of | B. thousand of | C. thousands | D. thousand\n", "D"));
	questions.push_back(std::make_pair("The main .... of sport utlity cehicles is that they consume too much fuel. \n A. strength | B. outcome | C. drawback | D. allowance\n", "C"));
	questions.push_back(std::make_pair("Household consumption has been falling gradually for the last six months, .... worries some financial analysts. \n A. which | B. what | C. who | D. that\n", "A"));
	questions.push_back(std::make_pair("Everyday thousands of Japanese people .... between Tokyo and the outer suburbs. \n A. locate | B. assess | C. compel | D. commute\n", "D"));
	questions.push_back(std::make_pair("It took me several months to get used to .... my messages by email. \n A. send | B. sending | C. have sent | D. be sent\n", "B"));
	questions.push_back(std::make_pair("As you are .... this company is going through a vey difficult transitions period. \n A. aware | B. conscientious | C. known | D. efficient\n", "A"));
	questions.push_back(std::make_pair("With the new software, our accountant will no longer need to spend so much time .... new date. \n A. enter | B. to enter | C. entered | D. entering\n", "D"));
	questions.push_back(std::make_pair("There is too .... time left to get the report ready before the meeting. \n A. little | B. few | C. many | D. some\n", "A"));
	questions.push_back(std::make_pair("It's high time we .... where to hold the next annual conference. \n A. decide | B. decided | C. have decided | D. are deciding \n", "B"));
	questions.push_back(std::make_pair("I have been looking all over for my passport. I cannot find it .... . \n A. nowhere | B. anywhere | C. somewhere | D. everywhere\n", "B"));
	questions.push_back(std::make_pair("We delayed .... the new device because it was not yet ready for mass production. \n A. launch | B. to launch | C. launching | D. to have launched\n", "C"));
	questions.push_back(std::make_pair("If they had designed a more advanced product at an attractive price, they .... a larger market share. \n A. had gained | B. will have gained | C. would have gained | D. would have been gained\n", "C"));
	
	

	bool doIt = true;
	int score = 0;
	int nbQuest = 0;

	while(doIt){
		nbQuest++;

		if(nbQuest > 20){
			doIt = false;
			intro();
			return;
		}	

		std::random_device random_device;
		std::mt19937 engine(random_device());
		std::uniform_int_distribution<int> dist(0, questions.size() - 1);
		
		std::pair<string, string>  random_question = questions[dist(engine)];

		string question = random_question.first;
		string right_answer = random_question.second;

		string answer; 

		cout << question << " ";
		cin >> answer;

		if(answer == "stop"){
			doIt = false;
			intro();
			return;
		}	

		if(answer == right_answer){
			score++;
			cout << "Right ! " << right_answer << endl;			
			cout << "Score : " << score << "/"<< nbQuest << endl;
			cout << endl;
		}	
		else{
			cout << "False ! " << right_answer << endl;			
			cout << "Score : " << score << "/"<< nbQuest << endl;
			cout << endl;
		}		
	

	}
	return;

}


int main(int argc, const char * argv[]) {

	intro();
	int prog;
	while(cin >> prog){
		switch(prog) { 
			    case 1 : prepositions(); 
			    case 2 : test(); 
		}
	}
	return(0);
}

