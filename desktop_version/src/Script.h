#ifndef SCRIPT_H
#define SCRIPT_H

#include <string>
#include <vector>

#include "Enums.h"

#define filllines(lines) commands.insert(commands.end(), lines, lines + sizeof(lines)/sizeof(lines[0]))


struct Script
{
    std::string name;
    std::vector<std::string> contents;
};

class scriptclass
{
    //Script contents
    std::vector<std::string> commands;
    std::vector<std::string> words;
    std::vector<std::string> txt;
    std::string scriptname;

    size_t position;
    int looppoint, loopcount;

    int scriptdelay;
    std::string tempword;
    std::string currentletter;

    //Textbox stuff
    int textx;
    int texty;
    int r,g,b;

    //Misc
    int i, j, k;
public:


    scriptclass();

    void load(std::string t);
    void loadother(std::string t);


    void inline add(std::string t)
    {
        commands.push_back(t);
    }

    void clearcustom();

    void tokenize(std::string t);

    void run();

    void resetgametomenu();

    void startgamemode(int t);

    void teleport();

    void hardreset();

    void runinternalcommand();

    void loadcustom(std::string t);

    bool running;

    //Custom level stuff
    std::vector<Script> customscripts;
};

extern scriptclass script;

#endif /* SCRIPT_H */
