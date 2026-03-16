#define STEAMAUDIO_SKIP_API_FUNCTIONS
#include "api_context.h"
#include "profiler.h"

namespace ipl {
void Profiler::setProfilerContext(void*) {}
}

namespace api {

void CContext::release() {}
void CContext::setProfilerContext(void*) {}

IPLVector3 CContext::calculateRelativeDirection(IPLVector3, IPLVector3, IPLVector3, IPLVector3)
{ return IPLVector3{0, 0, -1}; }

IPLerror CContext::createSerializedObject(IPLSerializedObjectSettings*, ISerializedObject**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createEmbreeDevice(IPLEmbreeDeviceSettings*, IEmbreeDevice**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createOpenCLDeviceList(IPLOpenCLDeviceSettings*, IOpenCLDeviceList**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createOpenCLDevice(IOpenCLDeviceList*, int, IOpenCLDevice**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createOpenCLDeviceFromExisting(void*, void*, IOpenCLDevice**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createScene(IPLSceneSettings*, IScene**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::loadScene(IPLSceneSettings*, ISerializedObject*, IPLProgressCallback, void*, IScene**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createAmbisonicsEncodeEffect(IPLAudioSettings*, IPLAmbisonicsEncodeEffectSettings*, IAmbisonicsEncodeEffect**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createAmbisonicsBinauralEffect(IPLAudioSettings*, IPLAmbisonicsBinauralEffectSettings*, IAmbisonicsBinauralEffect**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createAmbisonicsRotationEffect(IPLAudioSettings*, IPLAmbisonicsRotationEffectSettings*, IAmbisonicsRotationEffect**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createAmbisonicsDecodeEffect(IPLAudioSettings*, IPLAmbisonicsDecodeEffectSettings*, IAmbisonicsDecodeEffect**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createDirectEffect(IPLAudioSettings*, IPLDirectEffectSettings*, IDirectEffect**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createReflectionEffect(IPLAudioSettings*, IPLReflectionEffectSettings*, IReflectionEffect**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createReflectionMixer(IPLAudioSettings*, IPLReflectionEffectSettings*, IReflectionMixer**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createPathEffect(IPLAudioSettings*, IPLPathEffectSettings*, IPathEffect**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createProbeArray(IProbeArray**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createProbeBatch(IProbeBatch**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::loadProbeBatch(ISerializedObject*, IProbeBatch**)
{ return IPL_STATUS_FAILURE; }

void CContext::bakeReflections(IPLReflectionsBakeParams*, IPLProgressCallback, void*) {}
void CContext::cancelBakeReflections() {}
void CContext::bakePaths(IPLPathBakeParams*, IPLProgressCallback, void*) {}
void CContext::cancelBakePaths() {}

IPLerror CContext::createSimulator(IPLSimulationSettings*, ISimulator**)
{ return IPL_STATUS_FAILURE; }

IPLfloat32 CContext::calculateDistanceAttenuation(IPLVector3, IPLVector3, IPLDistanceAttenuationModel*)
{ return 1.0f; }

void CContext::calculateAirAbsorption(IPLVector3, IPLVector3, IPLAirAbsorptionModel*, IPLfloat32*) {}

IPLfloat32 CContext::calculateDirectivity(IPLCoordinateSpace3, IPLVector3, IPLDirectivity*)
{ return 1.0f; }

IPLerror CContext::createEnergyField(const IPLEnergyFieldSettings*, IEnergyField**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createReconstructor(const IPLReconstructorSettings*, IReconstructor**)
{ return IPL_STATUS_FAILURE; }

IPLerror CContext::createImpulseResponse(const IPLImpulseResponseSettings*, IImpulseResponse**)
{ return IPL_STATUS_FAILURE; }

}  // namespace api
