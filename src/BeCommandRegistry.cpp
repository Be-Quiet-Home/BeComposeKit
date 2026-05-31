#include <BeComposeKit/BeCommandRegistry.h>

#include <string.h>

namespace BeComposeKit {

BeCommandRegistry::BeCommandRegistry()
{
}


bool
BeCommandRegistry::Add(const BeCommand& command)
{
	if (!command.IsValid())
		return false;

	if (FindByName(command.Name()) != NULL)
		return false;

	if (FindByWhat(command.What()) != NULL)
		return false;

	fCommands.push_back(command);
	return true;
}


int32
BeCommandRegistry::CountCommands() const
{
	return static_cast<int32>(fCommands.size());
}


const BeCommand*
BeCommandRegistry::FindByName(const char* name) const
{
	if (name == NULL || name[0] == '\0')
		return NULL;

	for (std::vector<BeCommand>::const_iterator it = fCommands.begin();
			it != fCommands.end(); ++it) {
		if (strcmp(it->Name(), name) == 0)
			return &(*it);
	}

	return NULL;
}


const BeCommand*
BeCommandRegistry::FindByWhat(uint32 what) const
{
	if (what == 0)
		return NULL;

	for (std::vector<BeCommand>::const_iterator it = fCommands.begin();
			it != fCommands.end(); ++it) {
		if (it->What() == what)
			return &(*it);
	}

	return NULL;
}


bool
BeCommandRegistry::HasCommand(const char* name) const
{
	return FindByName(name) != NULL;
}


bool
BeCommandRegistry::HasCommand(uint32 what) const
{
	return FindByWhat(what) != NULL;
}

} // namespace BeComposeKit
