#pragma once

class Player;

class Command
{
public:

	virtual ~Command() = default;
	virtual void Execute(Player& pPlayer) = 0;

};

class MoveRightCommand : public Command
{
public:

	void Execute(Player& pPlayer) override;

};

class MoveLeftCommand : public Command
{
public:

	void Execute(Player& pPlayer) override;

};