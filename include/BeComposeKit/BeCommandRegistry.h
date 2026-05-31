#ifndef BECOMPOSEKIT_BECOMMANDREGISTRY_H
#define BECOMPOSEKIT_BECOMMANDREGISTRY_H

#include <BeComposeKit/BeCommand.h>

#include <SupportDefs.h>

#include <vector>

namespace BeComposeKit {

class BeCommandRegistry {
public:
	BeCommandRegistry();

	bool Add(const BeCommand& command);

	int32 CountCommands() const;

	const BeCommand* FindByName(const char* name) const;
	const BeCommand* FindByWhat(uint32 what) const;

	bool HasCommand(const char* name) const;
	bool HasCommand(uint32 what) const;

private:
	std::vector<BeCommand> fCommands;
};

} // namespace BeComposeKit

#endif // BECOMPOSEKIT_BECOMMANDREGISTRY_H
