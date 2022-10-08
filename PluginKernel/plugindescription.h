// --- CMAKE generated variables for your plugin

#include "pluginstructures.h"

#ifndef _plugindescription_h
#define _plugindescription_h

#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)
#define AU_COCOA_VIEWFACTORY_STRING STR(AU_COCOA_VIEWFACTORY_NAME)
#define AU_COCOA_VIEW_STRING STR(AU_COCOA_VIEW_NAME)

// --- AU Plugin Cocoa View Names (flat namespace)
#define AU_COCOA_VIEWFACTORY_NAME AUCocoaViewFactory_028B898A8B1C42FE8B40EAF699355538
#define AU_COCOA_VIEW_NAME AUCocoaView_028B898A8B1C42FE8B40EAF699355538

// --- BUNDLE IDs (MacOS Only)
const char* kAAXBundleID = "karmicfq.aax.bassballs.bundleID";
const char* kAUBundleID = "karmicfq.au.bassballs.bundleID";
const char* kVST3BundleID = "karmicfq.vst3.bassballs.bundleID";

// --- Plugin Names
const char* kPluginName = "bassballs";
const char* kShortPluginName = "bassballs";
const char* kAUBundleName = "bassballs";
const char* kAAXBundleName = "bassballs";
const char* kVSTBundleName = "bassballs";

// --- bundle name helper
inline static const char* getPluginDescBundleName()
{
#ifdef AUPLUGIN
	return kAUBundleName;
#endif

#ifdef AAXPLUGIN
	return kAAXBundleName;
#endif

#ifdef VSTPLUGIN
	return kVSTBundleName;
#endif

	// --- should never get here
	return kPluginName;
}

// --- Plugin Type
const pluginType kPluginType = pluginType::kFXPlugin;

// --- VST3 UUID
const char* kVSTFUID = "{028B898A-8B1C-42FE-8B40-EAF699355538}";

// --- 4-char codes
const int32_t kFourCharCode = '0c6q';
const int32_t kAAXProductID = 'wpaD';
const int32_t kManufacturerID = 'VNDR';

// --- Vendor information
const char* kVendorName = "KarmicFQ";
const char* kVendorURL = "www.yourcompany.com";
const char* kVendorEmail = "";

// --- Plugin Options
const bool kProcessFrames = true;
const uint32_t kBlockSize = DEFAULT_AUDIO_BLOCK_SIZE;
const bool kWantSidechain = false;
const uint32_t kLatencyInSamples = 0;
const double kTailTimeMsec = 0.000;
const bool kVSTInfiniteTail = false;
const bool kVSTSAA = false;
const uint32_t kVST3SAAGranularity = 1;
const uint32_t kAAXCategory = 0;

#endif


