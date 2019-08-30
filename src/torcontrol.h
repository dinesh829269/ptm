// Copyright (c) 2009-2017 The Bitcoin Core developers
// Copyright (c) 2018-2018 The bitphantom Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Functionality for communicating with Tor.
 */
#ifndef bitphantom_TORCONTROL_H
#define bitphantom_TORCONTROL_H

#include <scheduler.h>

extern const std::string DEFAULT_TOR_CONTROL;
static const bool DEFAULT_LISTEN_ONION = false;

void StartTorControl();
void InterruptTorControl();
void StopTorControl();

#endif /* bitphantom_TORCONTROL_H */
