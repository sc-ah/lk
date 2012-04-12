/*
 * Copyright (c) 2008 Travis Geiselbrecht
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#include <err.h>
#include <debug.h>
#include <target.h>
#include <compiler.h>

/* 
 * default implementations of these routines, if the target code
 * chooses not to implement.
 */

__WEAK void target_early_init(void)
{
}

__WEAK void target_init(void)
{
}

__WEAK void *target_get_scratch_address(void)
{
    return (void *)(SCRATCH_ADDR);
}

__WEAK unsigned check_reboot_mode(void)
{
    return 0;
}

__WEAK void reboot_device(unsigned reboot_reason)
{
}

__WEAK void target_battery_charging_enable
                 (unsigned enable, unsigned disconnect)
{
}

__WEAK unsigned target_pause_for_battery_charge(void)
{
    return 0;
}

__WEAK unsigned target_support_flashlight(void)
{
    return 0;
}
