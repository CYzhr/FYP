//
//  AgentMating.h
//  SugarScape
//
//  Created by Joseph P Kehoe on 20/07/2015.
//  Copyright (c) 2015 Joseph P Kehoe. All rights reserved.
//

#ifndef __SugarScape__AgentMating__
#define __SugarScape__AgentMating__

#include <iostream>
#include "IterativeWriteAction.h"

class AgentMating:public IterativeWriteAction{
protected:
    bool suitable(Location*);
public:
    AgentMating(World*);
    virtual bool executeAction(Location *, group *);
    virtual group* formGroup(Location *);
    virtual int participantCount(int,int,int);
    //virtual bool run(int startX, int startY, int size);
};
#endif /* defined(__SugarScape__AgentMating__) */
