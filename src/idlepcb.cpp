#include "idlepcb.h"

IdlePCB::IdlePCB(StackSize stackSize, Time timeSlice)
	: PCB(stackSize, timeSlice), state(READY)
{
	initializeStack(idleWrapper);
}

void IdlePCB::idleWrapper()
{
	while (true) {
		// dispatch();
	}
}
