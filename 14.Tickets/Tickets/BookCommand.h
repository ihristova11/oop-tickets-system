#ifndef BOOK_COMMAND_H
#define BOOK_COMMAND_H

#include<vector>

#include "ICommand.h"
#include "Validator.h"

class BookCommand : public ICommand
{
public:
	BookCommand(Store*);

	Store* store;

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !BOOK_COMMAND_H
