~~My suggestion is that we make this a stack-based machine.
It would have 2 registers, being the stack and base pointers.
Operations (like arithmetic) would occur upon the top 2 elements in the stack
~~

The currrent goal is to emulate a virtual CPU based on the 6502, adapted to be more suited to a 64-bit environment, and with safeties such as program space separation and bounds checks

I have added the necessary components for the current goal. what is missing is currently:
 the instructions themselves (we should implement these in plain c++ and then start looking at optimizations afterwards)
 a way for the system to actually read the rom (currently the 'vm' and 'system' are separate.) I suggest:
    make the program counter point to the memory of the rom (set by the vm)
    add upper and lower bounds 'registers' to the System

we could also move the stack to the VM instead of the system
