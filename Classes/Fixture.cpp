#include "Fixture.h"
#include "FPLSys.h"
Fixture::Fixture(){

}
Fixture::Fixture(int id ,int hs,int as,int hId,int aId,int team_h_difficulty, int team_a_difficulty, bool f ){
	this->id = id;
	homeScore=hs;
	awayScore=as;
	homeTeam = hId;
	awayTeam = aId;
	finished = f;
	this->team_h_difficulty = team_h_difficulty;
	this->team_a_difficulty = team_a_difficulty;
}

void Fixture::setId(int id) 
{
	this->id = id;
}
int Fixture::getId()
{
	return id;
}
void Fixture::setHomescore(int s)
{
	homeScore = s;
}
void Fixture::setAwayscore(int s)
{
	awayScore = s;
}

void Fixture::updateHomescore(int s)
{
	homeScore += s;
}
void Fixture::updateAwayscore(int s)
{
	awayScore += s;
}

int Fixture::getAwayscore()
{
	return awayScore;
}
int Fixture::getHomescore()
{
	return homeScore;
}
void Fixture::setHomeTeam(int t)
{
	homeTeam = t;
}
void Fixture::setAwayTeam(int t)
{
	awayTeam = t;
}
int Fixture::getAwayTeam()
{
	return awayTeam;
}
int Fixture::getHomeTeam()
{
	return homeTeam;
}
int Fixture::getHomeTeamDif() {
	return team_h_difficulty;
}
int Fixture::getAwayTeamDif(){
	return team_a_difficulty;
}
bool Fixture::IsFinished(){
	return finished;
}
void Fixture::setFinished(bool f){
	finished=f;
}

void Fixture::updateWinnerPoints() {
	unordered_map<int, string>club = FPLSys::getClubsByID();
	if (homeScore > awayScore)
		FPLSys::AllClubs[club[homeTeam]]->win_UpdatePoints();
	else if (homeScore < awayScore)
		FPLSys::AllClubs[club[awayTeam]]->win_UpdatePoints();
	else {
		FPLSys::AllClubs[club[homeTeam]]->draw_UpdatePoints();
		FPLSys::AllClubs[club[awayTeam]]->draw_UpdatePoints();

	}
}




	
