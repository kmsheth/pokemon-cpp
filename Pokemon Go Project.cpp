//
//  main.cpp
//  Pokemon Go Lab
//
//  Created by Katya Sheth on 9/15/16.
//  Copyright © 2016 Katya Sheth. All rights reserved.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    string pokemonType, pokeMonster, opponent;
    int pokeType, level, opponentLevel, selfStats, opponentStats, selfAttack=0, opponentAttack=0, compNum;
    
    srand((unsigned)time(0));  // Initialize random number generator (ONCE)

    cout << "Welcome to Pokémon Engouement!" << endl;
    cout << "Pick what type of Pokémon you'd like to have, the options are Dragon, Ghost, and Ice: " << endl;
    cin >> pokemonType;
    
    if (pokemonType=="Dragon" || pokemonType=="dragon")
        pokeType = 1;
    
    else if (pokemonType=="Ghost" || pokemonType=="ghost")
        pokeType = 2;
    
    else if (pokemonType=="Ice" || pokemonType=="ice")
        pokeType = 3;
    
    switch (pokeType)
    {
        case 1:
            cout << "Great Choice! Now, which Dragon Pokémon would you like? Dratini, Dragonair, or Dragonite: " << endl;
            cin >> pokeMonster;
            break;
        case 2:
            cout << "Great Choice! Now, which Ghost Pokémon would you like? Gastly, Haunter, or Gengar: " << endl;
            cin >> pokeMonster;
            break;
        case 3:
            cout << "Great Choice! Now, which Ice Pokémon would you like? Spheal, Sealeo, or Walrein: " << endl;
            cin >> pokeMonster;
            break;
        default:
            cout << "That was not one of the options" << endl;
            return 0;
    }
    
    if (pokeMonster=="Dratini" || pokeMonster=="Gastly" || pokeMonster=="Spheal" || pokeMonster=="dratini" || pokeMonster=="gastly" || pokeMonster=="spheal")
        level = 1;
    else if (pokeMonster=="Dragonair" || pokeMonster=="Haunter" || pokeMonster=="Sealeo" || pokeMonster=="dragonair" || pokeMonster=="haunter" || pokeMonster=="sealeo")
        level = 2;
    else if (pokeMonster=="Dragonite" || pokeMonster=="Gengar" || pokeMonster=="Walrein" || pokeMonster=="dragonite" || pokeMonster=="gengar" || pokeMonster=="walrein")
        level = 3;
    
    if (level==1)
        selfStats = 15;
    else if (level==2)
        selfStats = 45;
    else if (level==3)
        selfStats = 75;
    
    cout << "That was a nice choice! " << pokeMonster << " is a level " << level << " pokémon. He has " << (selfStats+25) << " Health Points, " << (selfStats+15) << " Defense Points, and " << (selfStats) << " Experience Points." << endl;
    cout << "Now it is time to try and catch your " << pokeMonster << "!" << endl;
    
    cout << "." << endl;
    cout << "." << endl;
    cout << "~ Attempting To Catch ~" << endl;
    cout << "." << endl;
    cout << "." << endl;
    
    compNum = (rand()%5) + 1;
    while (compNum==4 || compNum==5)
    {cout << "Sorry, you didn't catch your " << pokeMonster << ". :(" << endl;
        return 0;}
    
    cout << "Congratulations! You caught your " << pokeMonster << "! Now we will head to the gym to start battling!" << endl;
    
    cout << "Welcome to the Gym. While here you will battle an opponent. Choose from the following list: " << endl;
    cout << "~ Aerodactyl" << endl;
    cout << "~ Ditto" << endl;
    cout << "~ Lapras" << endl;
    cout << "~ Kangaskhan" << endl;
    cin >> opponent;
    
    if (opponent=="Aerodactyl" || opponent=="aerodactyl" || opponent=="Kangaskhan" || opponent=="kangaskhan")
        opponentLevel = 2;
    else if (opponent=="Lapras" || opponent=="lapras" || opponent=="Ditto" || opponent=="ditto")
        opponentLevel = 3;
    
    if (opponentLevel==2)
        opponentStats = 45;
    else if (opponentLevel==3)
        opponentStats = 75;
    
    cout << "Your opponent, the " << opponent << " is a level " << opponentLevel << " pokémon. He has " << (opponentStats+25) << " Health Points, " << (opponentStats+15) << " Defense Points, and " << (opponentStats) << " Experience Points." << endl << endl;
    cout << "Please step into.... The Battle Arena!!!!" << endl;
    
    cout << "." << endl;
    cout << "." << endl;
    cout << "~ Fighting!!!! ~" << endl;
    cout << "." << endl;
    cout << "." << endl;
    
    if (pokemonType=="Dratini" || pokemonType=="dratini") //Dratini Type - Dragon    Weaknesses - Dragon/Ice/Fairy
        selfAttack = 20;
    if (pokemonType=="Dragonair" || pokemonType=="dragonair") //Dragonair Type - Dragon    Weaknesses - Dragon/Ice/Fairy
        selfAttack = 40;
    if (pokemonType=="Dragonite" || pokemonType=="dragonite") //Dragonite Type - Dragon/Flying    Weaknesses - Dragon/Ice/Fairy/Rock
        selfAttack = 60;
    if (pokemonType=="Gastly" || pokemonType=="gastly") //Gastly Type - Ghost/Poison    Weaknesses - Dark/Ghost/Psychic
        selfAttack = 20;
    if (pokemonType=="Haunter" || pokemonType=="haunter") //Haunter Type - Ghost/Poison    Weaknesses - Dark/Ghost/Psychic
        selfAttack = 40;
    if (pokemonType=="Gengar" || pokemonType=="gengar") //Gengar Type - Ghost/Poison    Weaknesses - Dark/Ghost/Psychic
        selfAttack = 60;
    if (pokemonType=="Spheal" || pokemonType=="spheal") //Spheal Type - Ice/Water    Weaknesses - Electric/Fighting/Grass/Rock
        selfAttack = 20;
    if (pokemonType=="Sealeo" || pokemonType=="sealeo") //Sealeo Type - Ice/Water    Weaknesses - Electric/Fighting/Grass/Rock
        selfAttack = 40;
    if (pokemonType=="Walrein" || pokemonType=="walrein") //Walrein Type - Ice/Water    Weaknesses - Electric/Fighting/Grass/Rock
        selfAttack = 80;
    
    if (opponent=="Aerodactyl" || opponent=="aerodactyl") //Aerodactyl Type - Rock/Flying    Weaknesses - Electric/Ice/Rock/Steel/Water
        opponentAttack = 60;
    if (opponent=="Kangaskhan" || opponent=="kangaskhan") //Kangaskhan Type - Normal    Weaknesses - Fighting
        opponentAttack = 50;
    if (opponent=="Lapras" || opponent=="lapras") //Lapras Type - Water/Ice    Weaknesses - Electric/Fighting/Grass/Rock
        opponentAttack = 80;
    if (opponent=="Ditto" || opponent=="ditto") //Ditto Type - Normal    Weaknesses - Fighting
        opponentAttack = 50;
    
    if (level==1 && opponentLevel==2) {
        opponentStats = (opponentStats+25) - (selfAttack * 0.5);
        selfStats = (selfStats+25) - (opponentAttack * 2);
        if (opponentStats > selfStats)
            cout << "The winner is " << opponent << "!" << endl;
        else if (selfStats > opponentStats)
            cout << "You are the winner!" << endl;
        else if (selfStats==opponentStats)
            cout << "There was a tie!" << endl;
    }
    if (level==1 && opponentLevel==3) {
        opponentStats = (opponentStats+25) - (selfAttack * 0);
        selfStats = (selfStats+25) - (opponentAttack * 3);
        if (opponentStats > selfStats)
            cout << "The winner is " << opponent << "!" << endl;
        else if (selfStats > opponentStats)
            cout << "You are the winner!" << endl;
        else if (selfStats==opponentStats)
            cout << "There was a tie!" << endl;
    }
    if (level==2 && opponentLevel==2) {
        opponentStats = (opponentStats+25) - (selfAttack * 1);
        selfStats = (selfStats+25) - (opponentAttack * 1);
        if (opponentStats > selfStats)
            cout << "The winner is " << opponent << "!" << endl;
        else if (selfStats > opponentStats)
            cout << "You are the winner!" << endl;
        else if (selfStats==opponentStats)
            cout << "There was a tie!" << endl;
    }
    if (level==2 && opponentLevel==3) {
        opponentStats = (opponentStats+25) - (selfAttack * 2);
        selfStats = (selfStats+25) - (opponentAttack * 0.5);
        if (opponentStats > selfStats)
            cout << "The winner is " << opponent << "!" << endl;
        else if (selfStats > opponentStats)
            cout << "You are the winner!" << endl;
        else if (selfStats==opponentStats)
            cout << "There was a tie!" << endl;
    }
    if (level==3 && opponentLevel==2) {
        opponentStats = (opponentStats+25) - (selfAttack * 2);
        selfStats = (selfStats+25) - (opponentAttack * 0.5);
        if (opponentStats > selfStats)
            cout << "The winner is " << opponent << "!" << endl;
        else if (selfStats > opponentStats)
            cout << "You are the winner!" << endl;
        else if (selfStats==opponentStats)
            cout << "There was a tie!" << endl;
    }
    if (level==3 && opponentLevel==3) {
        opponentStats = (opponentStats+25) - (selfAttack * 1);
        selfStats = (selfStats+25) - (opponentAttack * 1);
        if (opponentStats > selfStats)
            cout << "The winner is " << opponent << "!" << endl;
        else if (selfStats > opponentStats)
            cout << "You are the winner!" << endl;
        else if (selfStats==opponentStats)
            cout << "There was a tie!" << endl;
    }
    
    system("pause");
    return 0;
}
