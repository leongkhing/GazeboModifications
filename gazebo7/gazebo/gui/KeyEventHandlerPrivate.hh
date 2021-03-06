/*
 * Copyright (C) 2015-2016 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#ifndef _GAZEBO_GUI_KEYEVENTHANDLER_PRIVATE_HH_
#define _GAZEBO_GUI_KEYEVENTHANDLER_PRIVATE_HH_

#include <list>
#include "gazebo/gui/KeyEventHandler.hh"

namespace gazebo
{
  namespace gui
  {
    /// \class KeyEventHandlerPrivate KeyEventHandlerPrivate.hh
    /// \brief Private data for the KeyEventHandler class.
    class KeyEventHandlerPrivate
    {
      /// \brief List of key press filters.
      public: std::list<KeyEventHandler::Filter> pressFilters;

      /// \brief List of key release filters.
      public: std::list<KeyEventHandler::Filter> releaseFilters;

      /// \brief Boolean to toggle autorepeats (events that occur continuously
      /// while a key held down by the user) for key presses.
      public: bool autoRepeat;
    };
  }
}
#endif
