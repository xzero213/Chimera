#pragma once

#include "command.h"

/// Initialize the console code.
void initialize_console();

/// Return true if the user has the console open, optionally changing the value.
bool console_is_out(int change=-1, const char *with_text=nullptr);

/// Function for command chimera_enable_console
ChimeraCommandError enable_console_command(size_t argc, const char **argv) noexcept;
