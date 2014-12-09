#ifndef __CPU_PRED_ALWAYS_TRUE_BP_HH__
#define __CPU_PRED_ALWAYS_TRUE_BP_HH__

#include "bpred_unit.hh"

class AlwaysTrueBP : public BPredUnit {
  public:
    AlwaysTrueBP(const Params *p);
    virtual void uncondBranch(void * &bp_history);
    virtual void squash(void *bp_history);
    virtual bool lookup(Addr instPC, void *&bp_history);
    virtual void btbUpdate(Addr instPC, void * &bp_history);
    virtual void update(Addr instPC, bool taken, void *bp_history,
                        bool squashed);
};

#endif  // __CPU_PRED_ALWAYS_TRUE_BP_HH__
