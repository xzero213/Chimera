#pragma once

#include <stdint.h>
#include "event.h"
#include "../command/command.h"

void add_pretick_event(event_no_args event_function, EventPriority priority = EVENT_PRIORITY_DEFAULT) noexcept;
void remove_pretick_event(event_no_args event_function) noexcept;

void add_tick_event(event_no_args event_function, EventPriority priority = EVENT_PRIORITY_DEFAULT) noexcept;
void remove_tick_event(event_no_args event_function) noexcept;

const float &tick_rate() noexcept;
void set_tick_rate(float new_rate) noexcept;
float effective_tick_rate() noexcept;
int32_t tick_count() noexcept;
double tick_time() noexcept;
double tick_progress() noexcept;
double tick_progress_inaccurate() noexcept;

/// Function for command chimera_set_tps
ChimeraCommandError set_tps_command(size_t argc, const char **argv) noexcept;
