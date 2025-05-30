#ifndef CONTIGSTATSPLUGIN_H
#define CONTIGSTATSPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class ContigStatsPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "ContigStats";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
