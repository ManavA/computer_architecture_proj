#ifndef __CPU_PRED_ALWAYS_BACK_BP_HH__
#define __CPU_PRED_ALWAYS_BACK_BP_HH__

#include "bpred_unit.hh"

class AlwaysBackBP : public BPredUnit {
  public:
    AlwaysBackBP(const Params *p);
    virtual void uncondBranch(void * &bp_history);
    virtual void squash(void *bp_history);
    virtual bool lookup(Addr instPC, void *&bp_history);
    virtual void btbUpdate(Addr instPC, void * &bp_history);
    virtual void update(Addr instPC, bool taken, void *bp_history,
                        bool squashed);
    virtual bool predictInOrder(StaticInstPtr &inst,
        const InstSeqNum & seqNum, int asid,
        TheISA::PCState &instPC, TheISA::PCState &predPC,
        ThreadID tid);
};

#endif  // __CPU_PRED_ALWAYS_BACK_BP_HH__
