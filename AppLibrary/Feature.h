#pragma once

#include "AppLibrary.h"
#include <iostream>
#include <fstream>

static std::string FeatureToken = "Feature:";
static std::string EndFeatureToken = "EndFeature";


APPLIBRARY_API void ProcessFeature(std::string featureType, std::ifstream& streamObject);

class APPLIBRARY_API Feature
{
};
