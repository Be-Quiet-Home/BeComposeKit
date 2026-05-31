#include <BeComposeKit/BeCommand.h>

namespace BeComposeKit {

BeCommand::BeCommand(const char* name, const char* label, uint32 what)
	:
	fName(name),
	fLabel(label),
	fWhat(what)
{
}


const char*
BeCommand::Name() const
{
	return fName.String();
}


const char*
BeCommand::Label() const
{
	return fLabel.String();
}


uint32
BeCommand::What() const
{
	return fWhat;
}


bool
BeCommand::IsValid() const
{
	return fName.Length() > 0 && fLabel.Length() > 0 && fWhat != 0;
}


BMessage
BeCommand::CreateMessage() const
{
	return BMessage(fWhat);
}

} // namespace BeComposeKit
