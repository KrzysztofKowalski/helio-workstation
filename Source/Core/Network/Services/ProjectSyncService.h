/*
    This file is part of Helio Workstation.

    Helio is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Helio is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Helio. If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "BackendService.h"
#include "PullThread.h"
#include "PushThread.h"

// A service responsible for:
// - fetching a list of user's projects
// - publishing and deleting a project
// - fetching all latest project history data
// - pushing a branch (i.e. simply a revision with all its parents)
// - pulling a branch

class ProjectSyncService final : private BackendService,
                                 private PullThread::Listener,
                                 private PushThread::Listener
{
public:

    ProjectSyncService();

private:

    void timerCallback() override;

private:

    // TODO callbacks

};
