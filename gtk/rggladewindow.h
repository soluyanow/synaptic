/* rggladewindow.h
 *
 * Copyright (c) 2003 Michael Vogt <mvo@debian.org>
 *
 * Author: Michael Vogt <mvo@debian.org>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 */


#ifndef _RGGLADEWINDOW_H_
#define _RGGLADEWINDOW_H_

#include "config.h"

#include <gtk/gtk.h>
#include <glade/glade.h>
#include <string>
#include <iostream>
#include "rgwindow.h"

using namespace std;

class RGGladeWindow:public RGWindow {
 protected:
   GladeXML *_gladeXML;

 public:
   RGGladeWindow(RGWindow *parent, string name, string main_widget = "");
};

#endif
