/**
 * Copyright (c) 2011-2013 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */

include("../QtExamples.js");

/**
 * This action creates a Qt main window.
 */
function ExMainWindow(guiAction) {
    QtExamples.call(this, guiAction);
}

ExMainWindow.prototype = new QtExamples();
ExMainWindow.includeBasePath = includeBasePath;

ExMainWindow.prototype.beginEvent = function() {
    QtExamples.prototype.beginEvent.call(this);

    var mw = new QMainWindow();
    mw.show();

    var tb = mw.addToolBar("MyToolBar");
    tb.addAction(new QIcon(ExMainWindow.includeBasePath + "/MyAction.svg"), "MyAction");

    this.terminate();
};

/**
 * Adds a menu for this action to Examples/Math Examples/ExMainWindow.
 */
ExMainWindow.init = function(basePath) {
    var action = new RGuiAction("&Main Window", RMainWindowQt.getMainWindow());
    action.setRequiresDocument(false);
    action.setScriptFile(basePath + "/ExMainWindow.js");
    action.setSortOrder(10);
    EAction.addGuiActionTo(action, QtExamples, true, false, false);

//    qApp.organizationName = "MyCAD";
//    qApp.organizationDomain = "MyCAD.org";
//    qApp.applicationVersion = "1.0.0";
//    qApp.applicationName = "MyCAD";
};
