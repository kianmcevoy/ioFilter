// antiAlias.h
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef _ANTIALIAS_H_
#define _ANTIALIAS_H_
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "filter.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class AntiAlias
{
    private:
        float sampleRate;
        std::vector<float> in;

    public:
        AntiAlias();

        Filter lopA;
        Filter lopB;

        inline void     setSampleRate(float sr)     {sampleRate = sr;} 
        inline float    getSampleRate()             {return sampleRate;}
        
        float           process(float input, float cutoff);   
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif