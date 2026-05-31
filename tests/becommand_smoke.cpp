#include <BeComposeKit/BeCommand.h>

#include <stdio.h>
#include <string.h>

static const uint32 kTestCommand = 0x42434d44; // BCMD

int
main()
{
	BeComposeKit::BeCommand command("test-command", "Test Command", kTestCommand);

	if (!command.IsValid())
		return 1;

	if (strcmp(command.Name(), "test-command") != 0)
		return 2;

	if (strcmp(command.Label(), "Test Command") != 0)
		return 3;

	if (command.What() != kTestCommand)
		return 4;

	BMessage message = command.CreateMessage();

	if (message.what != kTestCommand)
		return 5;

	printf("BeCommand smoke test passed\n");
	return 0;
}
