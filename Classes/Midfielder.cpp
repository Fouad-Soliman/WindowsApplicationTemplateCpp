#include "Midfielder.h"
#include "FPLSys.h"
Midfielder::Midfielder(int id, string PlayerName, string PlayerTeam, int PlayerTotalPoints, string PlayerPosition,int TotalCleanSheets)
:Player(id, PlayerName, PlayerTeam, PlayerTotalPoints, PlayerPosition)
{
	this->TotalCleanSheets = TotalCleanSheets;
}
void Midfielder::setCurrentCleanSheet(bool currentCleanSheet) {
	CurrentCleanSheet = currentCleanSheet;
}

void Midfielder::setTotalCleanSheets(int totalCleanSheets) {
	TotalCleanSheets = totalCleanSheets;
}

bool Midfielder::getCurrentCleanSheet() {
	return CurrentCleanSheet;
}

int Midfielder::getTotalCleanSheets() {
	return TotalCleanSheets;
}

void Midfielder::updateTotalCleanSheets()
{
	TotalCleanSheets += CurrentCleanSheet;
}
int Midfielder::CalculatePoints(int week) {
	int points = 0;
	for (auto& game : getPlayer_History()) {
		if (game.getRound() == week) {
			points += game.getGoals_scored_gameweek() * 5;
			points += game.getAssists_gameweek() * 3;
			points += game.getClean_sheets_gameweek();
			points -= game.getYellow_cards_gameweek();
			points -= game.getRed_cards_gameweek() * 3;
			if (game.getMinutesPlayed() < 60 && game.getMinutesPlayed() > 0) points += 1;
			else if (game.getMinutesPlayed() >=60)points += 2;

			points -= game.getPenaltiesMissed() * 2;
			points += game.getBonus();
			points -= game.getOwnGoals() * 2;
		}
	}
	return points;
}
int Midfielder::CalculatePoints() {
	return CalculatePoints(FPLSys::CurrGameWeek);
}

int Midfielder::CalculateMatchPoints(int matchid) {
	int points = 0;
	for (auto& game : getPlayer_History()) {
		if (game.getmatchID() == matchid) {
			points += game.getGoals_scored_gameweek() * 5;
			points += game.getAssists_gameweek() * 3;
			points += game.getClean_sheets_gameweek();
			points -= game.getYellow_cards_gameweek();
			points -= game.getRed_cards_gameweek() * 3;
			if (game.getMinutesPlayed() < 60 && game.getMinutesPlayed() > 0) points += 1;
			else if (game.getMinutesPlayed() >= 60)points += 2;

			points -= game.getPenaltiesMissed() * 2;
			points += game.getBonus();
			points -= game.getOwnGoals() * 2;
			return points;
		}
	}
}
