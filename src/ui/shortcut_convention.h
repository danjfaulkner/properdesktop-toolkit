// SPDX-FileCopyrightText: 2026 Reion Wong <reionwong@gmail.com>
// SPDX-License-Identifier: BSD-3-Clause

#pragma once

namespace properdesktop::ui {

// Whether the session's keyboard settings use the Command convention, read
// from org.properdesktop.Keyboard1 and followed as it changes. False until known.
bool commandKeys();

} // namespace properdesktop::ui
