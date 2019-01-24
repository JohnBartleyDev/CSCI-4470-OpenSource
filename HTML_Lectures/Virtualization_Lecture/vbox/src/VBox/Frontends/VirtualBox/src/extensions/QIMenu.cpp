/* $Id: QIMenu.cpp 71895 2018-04-18 13:08:11Z vboxsync $ */
/** @file
 * VBox Qt GUI - Qt extensions: QIMenu class implementation.
 */

/*
 * Copyright (C) 2010-2018 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 */

#ifdef VBOX_WITH_PRECOMPILED_HEADERS
# include <precomp.h>
#else

/* GUI includes: */
# include "QIMenu.h"

#endif


QIMenu::QIMenu(QWidget *pParent /* = 0 */)
    : QMenu(pParent)
{
}

void QIMenu::sltHighlightFirstAction()
{
#ifdef VBOX_WS_WIN
    /* Windows host requires window-activation: */
    activateWindow();
#endif

    /* Focus next child: */
    QMenu::focusNextChild();
}