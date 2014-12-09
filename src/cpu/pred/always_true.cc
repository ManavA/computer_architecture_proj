#include "always_true.hh"

AlwaysTrueBP::AlwaysTrueBP(const Params *p):
  BPredUnit(p){}

void AlwaysTrueBP::uncondBranch(void * &bp_history){}

void AlwaysTrueBP::squash(void *bp_history){}

bool AlwaysTrueBP::lookup(Addr instPC, void *&bp_history){
  return true;
}

void AlwaysTrueBP::btbUpdate(Addr instPC, void * &bp_history){}

void AlwaysTrueBP::update(Addr instPC, bool taken,
                          void *bp_history, bool squashed){}
