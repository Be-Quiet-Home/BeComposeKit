#include <BeComposeKit/BeCommandRegistry.h>

#include <stdio.h>
#include <string.h>

static const uint32 kOpenCommand = 0x424f504e; // BOPN
static const uint32 kSaveCommand = 0x42535645; // BSVE

int
main()
{
	BeComposeKit::BeCommandRegistry registry;

	BeComposeKit::BeCommand openCommand("open", "Open", kOpenCommand);
	BeComposeKit::BeCommand saveCommand("save", "Save", kSaveCommand);

	if (!registry.Add(openCommand))
		return 1;

	if (!registry.Add(saveCommand))
		return 2;

	if (registry.CountCommands() != 2)
		return 3;

	if (!registry.HasCommand("open"))
		return 4;

	if (!registry.HasCommand(kSaveCommand))
		return 5;

	const BeComposeKit::BeCommand* foundByName = registry.FindByName("save");
	if (foundByName == NULL)
		return 6;

	if (strcmp(foundByName->Label(), "Save") != 0)
		return 7;

	const BeComposeKit::BeCommand* foundByWhat = registry.FindByWhat(kOpenCommand);
	if (foundByWhat == NULL)
		return 8;

	if (strcmp(foundByWhat->Name(), "open") != 0)
		return 9;

	if (registry.Add(openCommand))
		return 10;

	if (registry.Add(BeComposeKit::BeCommand("", "Invalid", 0)))
		return 11;

	printf("BeCommandRegistry smoke test passed\n");
	return 0;
}
