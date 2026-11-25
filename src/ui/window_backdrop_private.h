// SPDX-FileCopyrightText: 2026 Reion Wong <reionwong@gmail.com>
// SPDX-License-Identifier: BSD-3-Clause

#pragma once

namespace properdesktop::ui {

class Window;

// The window has views that read what lies under them while it composites:
// underlays, or backdrops.
bool windowHasUnderlays(const Window* window);
bool windowHasBackdrop(const Window* window);

} // namespace properdesktop::ui
