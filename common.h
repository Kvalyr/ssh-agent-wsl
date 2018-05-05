#pragma once

/*
* ssh-agent-wsl Linux/Win32 common header.
*
* Based on weasel-pageant, Copyright 2017  Valtteri Vuorikoski
* Based on ssh-pageant, copyright 2009,2014  Josh Stone
*
* This file is part of ssh-agent-wsl, and is free software: you can
* redistribute it and/or modify it under the terms of the GNU General
* Public License as published by the Free Software Foundation, either
* version 3 of the License, or (at your option) any later version.
*/

// This file may be included from both the Linux and the Win32 code.

#define AGENT_MAX_MSGLEN 256 * 1024 // same as in openssh-portable

#define WSLP_CHILD_FLAG_DEBUG (1 << 0)

#ifdef __cplusplus
extern "C" {
#endif

    static inline uint32_t msglen(const void *p) {
        return 4 + ntohl(*(const uint32_t *)p);
    }

#ifdef __cplusplus
};
#endif
