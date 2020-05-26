#ifndef BOOK_COMMAND_H
#define BOOK_COMMAND_H

#include<vector>

#include "ICommand.h"
#include "Validator.h"

/// <summary>
/// BookCommand books a ticket by given parameters
/// </summary>
class BookCommand : public ICommand
{
public:
	BookCommand(Store*);

	virtual std::string execute(const std::vector<std::string>&) override;
	virtual std::string toString() override;
};

#endif // !BOOK_COMMAND_H
