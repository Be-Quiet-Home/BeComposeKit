#ifndef BECOMPOSEKIT_BECOMMAND_H
#define BECOMPOSEKIT_BECOMMAND_H

#include <Message.h>
#include <String.h>
#include <SupportDefs.h>

namespace BeComposeKit {

class BeCommand {
public:
	BeCommand(const char* name, const char* label, uint32 what);

	const char* Name() const;
	const char* Label() const;
	uint32 What() const;

	bool IsValid() const;

	BMessage CreateMessage() const;

private:
	BString fName;
	BString fLabel;
	uint32 fWhat;
};

} // namespace BeComposeKit

#endif // BECOMPOSEKIT_BECOMMAND_H
