#!/usr/bin/env python3

import sys
try:
    from appJar import gui
except ImportError:
    print("Module not found: appJar")
    sys.exit(1)


def press(btn):
    if btn == "Cancel":
        app.stop()
    else:
        user = app.getEntry("Username")
        password = app.getEntry("Password ")
        re_enter_password = app.getEntry("Re-Enter Password ")
        if password == re_enter_password:
            app.infoBox("Success", "Password accepted")
        else:
            app.errorBox("Error", "Password incorrect")


# create a GUI variable called app
app = gui("Login Window", "400x200")
app.setBg("orange")
app.setFont(18)

# add & configure widgets - widgets get a name, to help referencing them later
app.addLabel("title", "Welcome to Internship")
app.setLabelBg("title", "blue")
app.setLabelFg("title", "orange")

app.addLabelEntry("Username")
app.addLabelSecretEntry("Password ")
app.addLabelSecretEntry("Re-Enter Password ")

# link the buttons to the function called press
app.addButtons(["Submit", "Cancel"], press)
app.setFocus("Username")
app.go()
