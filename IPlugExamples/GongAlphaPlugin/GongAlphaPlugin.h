#ifndef __GONGALPHAPLUGIN__
#define __GONGALPHAPLUGIN__

#include "IPlug_include_in_plug_hdr.h"

class GongAlphaPlugin : public IPlug
{
public:
  GongAlphaPlugin(IPlugInstanceInfo instanceInfo);
  ~GongAlphaPlugin();

  void Reset();
  void OnParamChange(int paramIdx);
  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);

private:
  double mGain;
};

#endif
