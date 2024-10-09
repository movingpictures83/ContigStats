#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "ContigStatsPlugin.h"

void ContigStatsPlugin::input(std::string file) {
 inputfile = file;
}

void ContigStatsPlugin::run() {}

void ContigStatsPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "contig-stats";
myCommand += " ";
myCommand += inputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<ContigStatsPlugin> ContigStatsPluginProxy = PluginProxy<ContigStatsPlugin>("ContigStats", PluginManager::getInstance());
