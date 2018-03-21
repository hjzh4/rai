#include "taskMap.h"

struct TM_Gravity : TaskMap {

  TM_Gravity(){}

  virtual void phi(arr& y, arr& J, const rai::KinematicWorld& K, int t=-1){ HALT("can only be of higher order"); }
  virtual uint dim_phi(const rai::KinematicWorld& K){ HALT("can only be of higher order"); }

  virtual void phi(arr& y, arr& J, const WorldL& Ktuple, double tau, int t=-1);
  virtual uint dim_phi(const WorldL& Ktuple, int t);

  virtual rai::String shortTag(const rai::KinematicWorld& G){ return STRING("Gravity"); }
};