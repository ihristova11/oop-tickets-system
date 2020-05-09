#ifndef POPULAR_EVENTS_COMMAND_H
#define POPULAR_EVENTS_COMMAND_H

#include "ICommand.h"
class PopularEventsCommand : public ICommand
{
public:
	PopularEventsCommand(Store*);
	Store* store;

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !POPULAR_EVENTS_COMMAND_H
