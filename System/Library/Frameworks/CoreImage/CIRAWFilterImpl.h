//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSArray, NSDictionary, NSNumber, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface CIRAWFilterImpl : CIFilter
{
    struct CGImageSource *_inputImageSource;	// 72 = 0x48
    NSArray *_inputImageAndProperties;	// 80 = 0x50
    CIImage *_inputImage;	// 88 = 0x58
    struct CGSize _nativeSize;	// 96 = 0x60
    _Bool _isRawSource;	// 112 = 0x70
    _Bool _calledDealloc;	// 113 = 0x71
    NSString *_matteOption;	// 120 = 0x78
    NSDictionary *_baseImageProperties;	// 128 = 0x80
    NSDictionary *_rawDictionary;	// 136 = 0x88
    NSDictionary *_rawReconstructionDefaultsDictionary;	// 144 = 0x90
    NSArray *_supportedSushiModes;	// 152 = 0x98
    NSArray *_supportedDecoderVersions;	// 160 = 0xa0
    NSArray *_filters;	// 168 = 0xa8
    NSObject *_typeIdentifierHint;	// 176 = 0xb0
    NSNumber *_defaultOrientation;	// 184 = 0xb8
    NSString *inputRequestedSushiMode;	// 192 = 0xc0
    NSNumber *inputNeutralChromaticityX;	// 200 = 0xc8
    NSNumber *inputNeutralChromaticityY;	// 208 = 0xd0
    NSNumber *inputNeutralTemperature;	// 216 = 0xd8
    NSNumber *inputNeutralTint;	// 224 = 0xe0
    CIVector *inputNeutralLocation;	// 232 = 0xe8
    NSNumber *inputEV;	// 240 = 0xf0
    NSNumber *inputBoost;	// 248 = 0xf8
    NSNumber *inputDraftMode;	// 256 = 0x100
    NSNumber *inputScaleFactor;	// 264 = 0x108
    NSNumber *inputIgnoreOrientation;	// 272 = 0x110
    NSNumber *inputImageOrientation;	// 280 = 0x118
    NSNumber *inputEnableSharpening;	// 288 = 0x120
    NSNumber *inputEnableNoiseTracking;	// 296 = 0x128
    NSNumber *inputEnableVendorLensCorrection;	// 304 = 0x130
    NSNumber *inputNoiseReductionAmount;	// 312 = 0x138
    NSNumber *inputLuminanceNoiseReductionAmount;	// 320 = 0x140
    NSNumber *inputColorNoiseReductionAmount;	// 328 = 0x148
    NSNumber *inputNoiseReductionSharpnessAmount;	// 336 = 0x150
    NSNumber *inputNoiseReductionContrastAmount;	// 344 = 0x158
    NSNumber *inputNoiseReductionDetailAmount;	// 352 = 0x160
    NSNumber *inputMoireAmount;	// 360 = 0x168
    NSString *inputDecoderVersion;	// 368 = 0x170
    NSNumber *inputBoostShadowAmount;	// 376 = 0x178
    NSNumber *inputBias;	// 384 = 0x180
    NSNumber *inputBaselineExposure;	// 392 = 0x188
    NSNumber *inputDisableGamutMap;	// 400 = 0x190
    NSNumber *inputHueMagMR;	// 408 = 0x198
    NSNumber *inputHueMagRY;	// 416 = 0x1a0
    NSNumber *inputHueMagYG;	// 424 = 0x1a8
    NSNumber *inputHueMagGC;	// 432 = 0x1b0
    NSNumber *inputHueMagCB;	// 440 = 0x1b8
    NSNumber *inputHueMagBM;	// 448 = 0x1c0
    CIFilter *inputLinearSpaceFilter;	// 456 = 0x1c8
    NSNumber *inputEnableEDRMode;	// 464 = 0x1d0
    NSNumber *inputLocalToneMapAmount;	// 472 = 0x1d8
    NSNumber *inputReturnDemosaiced;	// 480 = 0x1e0
}

+ (id)customAttributes;	// IMP=0x006000000015e5ea
+ (id)supportedRawCameraModels;	// IMP=0x006000000015db33
+ (id)filterWithCVPixelBuffer:(struct __CVBuffer *)arg1 properties:(id)arg2 options:(id)arg3;	// IMP=0x006000000015daf0
+ (id)filterWithImageURL:(id)arg1 options:(id)arg2;	// IMP=0x006000000015d9ed
+ (id)filterWithImageData:(id)arg1 options:(id)arg2;	// IMP=0x006000000015d987
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;	// IMP=0x006000000015d799
+ (id)matteOptionNameFromOptions:(id)arg1;	// IMP=0x006000000015fd77
+ (id)optionKeys;	// IMP=0x006000000015fb05
+ (id)applyMatrix:(const double *)arg1 toCIImage:(id)arg2;	// IMP=0x006000000015f9e0
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000163dc7
+ (void)convertNeutralTemperature:(id)arg1 tint:(id)arg2 toX:(id *)arg3 y:(id *)arg4;	// IMP=0x00600000001670db
+ (void)convertNeutralX:(id)arg1 y:(id)arg2 toTemperature:(id *)arg3 tint:(id *)arg4;	// IMP=0x006000000016702e
@property(readonly) _Bool isRawSource;
- (id)outputKeys;	// IMP=0x000000000015f987
- (void)setDefaults;	// IMP=0x000000000015e244
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015df87
- (void)dealloc;	// IMP=0x000000000015dbdc
- (id)init;	// IMP=0x000000000015dbad
- (id)outputImage;	// IMP=0x0000000000163359
- (id)transformedImageIgnoringOrientation:(_Bool)arg1 andIgnoringScaleFactor:(_Bool)arg2;	// IMP=0x0000000000162beb
- (struct CGAffineTransform)getOrientationTransform:(id)arg1;	// IMP=0x0000000000162977
- (struct CGAffineTransform)getScaleTransform:(id)arg1;	// IMP=0x00000000001628aa
@property(readonly) struct CGSize nativeSize;
- (void)setTempTintAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000161f19
- (id)rawOptionsWithSubsampling:(_Bool)arg1;	// IMP=0x0000000000161b20
- (id)rawOptions;	// IMP=0x0000000000161b09
- (void)invalidateInputImage;	// IMP=0x0000000000161ad4
- (void)invalidateFilters;	// IMP=0x0000000000161a8f
@property(readonly) int subsampling;
@property(readonly, retain) NSArray *filters;
@property(readonly) int rawMajorVersion;
@property(readonly, retain) NSDictionary *rawDictionary;
@property(readonly, retain) NSDictionary *rawReconstructionDefaultsDictionary;
@property(readonly, retain) NSNumber *sushiMode;
- (id)initWithImageSource:(struct CGImageSource *)arg1 options:(id)arg2;	// IMP=0x000000000016027e
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 properties:(id)arg2 options:(id)arg3;	// IMP=0x000000000015feea
- (id)outputNativeSize;	// IMP=0x0000000000166fbb
- (id)properties;	// IMP=0x0000000000166faa
- (id)activeKeys;	// IMP=0x000000000016684f
- (id)defaultBoostShadowAmount;	// IMP=0x000000000016681d
- (void)setInputBoostShadowAmount:(id)arg1;	// IMP=0x000000000016678c
- (id)inputLinearSpaceFilter;	// IMP=0x000000000016677b
- (void)setInputLinearSpaceFilter:(id)arg1;	// IMP=0x0000000000166723
- (id)inputDisableGamutMap;	// IMP=0x0000000000166712
- (void)setInputDisableGamutMap:(id)arg1;	// IMP=0x0000000000166681
- (id)inputHueMagBM;	// IMP=0x0000000000166670
- (id)defaultInputHueMagBMAmount;	// IMP=0x0000000000166657
- (void)setInputHueMagBM:(id)arg1;	// IMP=0x00000000001665c6
- (id)inputHueMagCB;	// IMP=0x00000000001665b5
- (id)defaultInputHueMagCBAmount;	// IMP=0x000000000016659c
- (void)setInputHueMagCB:(id)arg1;	// IMP=0x000000000016650b
- (id)inputHueMagGC;	// IMP=0x00000000001664fa
- (id)defaultInputHueMagGCAmount;	// IMP=0x00000000001664e1
- (void)setInputHueMagGC:(id)arg1;	// IMP=0x0000000000166450
- (id)inputHueMagYG;	// IMP=0x000000000016643f
- (id)defaultInputHueMagYGAmount;	// IMP=0x0000000000166426
- (void)setInputHueMagYG:(id)arg1;	// IMP=0x0000000000166395
- (id)inputHueMagRY;	// IMP=0x0000000000166384
- (id)defaultInputHueMagRYAmount;	// IMP=0x000000000016636b
- (void)setInputHueMagRY:(id)arg1;	// IMP=0x00000000001662da
- (id)inputHueMagMR;	// IMP=0x00000000001662c9
- (id)defaultInputHueMagMRAmount;	// IMP=0x00000000001662b0
- (void)setInputHueMagMR:(id)arg1;	// IMP=0x000000000016621f
- (id)inputBaselineExposure;	// IMP=0x000000000016620e
- (id)defaultInputBaselineExposureAmount;	// IMP=0x00000000001661f5
- (void)setInputBaselineExposure:(id)arg1;	// IMP=0x0000000000166164
- (id)inputBias;	// IMP=0x0000000000166153
- (id)defaultInputBiasAmount;	// IMP=0x000000000016613a
- (void)setInputBias:(id)arg1;	// IMP=0x00000000001660a9
- (id)supportedDecoderVersions;	// IMP=0x0000000000165c02
- (id)supportedSushiModes;	// IMP=0x00000000001658a9
- (id)defaultInputEnableEDRMode;	// IMP=0x0000000000165848
- (id)defaultDecoderVersion;	// IMP=0x00000000001657f9
- (id)defaultInputEnableVendorLensCorrection;	// IMP=0x0000000000165736
- (id)defaultInputMoireAmount;	// IMP=0x00000000001656d5
- (id)defaultInputNoiseReductionSharpnessAmount;	// IMP=0x0000000000165674
- (id)defaultInputNoiseReductionDetailAmount;	// IMP=0x0000000000165613
- (id)defaultInputNoiseReductionContrastAmount;	// IMP=0x00000000001655b2
- (id)defaultInputColorNoiseReductionAmount;	// IMP=0x0000000000165551
- (id)defaultInputLuminanceNoiseReductionAmount;	// IMP=0x00000000001654f0
- (void)setInputLocalToneMapAmount:(id)arg1;	// IMP=0x0000000000165478
- (id)defaultInputLocalToneMapAmount;	// IMP=0x000000000016545f
- (void)setInputEnableEDRMode:(id)arg1;	// IMP=0x00000000001653e7
- (id)defaultInputReturnDemosaiced;	// IMP=0x0000000000165386
- (void)setInputReturnDemosaiced:(id)arg1;	// IMP=0x00000000001652fd
- (void)setInputIgnoreOrientation:(id)arg1;	// IMP=0x0000000000165251
- (void)setInputImageOrientation:(id)arg1;	// IMP=0x00000000001651c8
- (void)setInputDecoderVersion:(id)arg1;	// IMP=0x000000000016500e
- (void)setInputBoost:(id)arg1;	// IMP=0x0000000000164f7d
- (void)setInputEV:(id)arg1;	// IMP=0x0000000000164eec
- (void)setInputMoireAmount:(id)arg1;	// IMP=0x0000000000164e30
- (void)setInputNoiseReductionDetailAmount:(id)arg1;	// IMP=0x0000000000164d74
- (void)setInputNoiseReductionContrastAmount:(id)arg1;	// IMP=0x0000000000164cb8
- (void)setInputNoiseReductionSharpnessAmount:(id)arg1;	// IMP=0x0000000000164bfc
- (void)setInputColorNoiseReductionAmount:(id)arg1;	// IMP=0x0000000000164b40
- (void)setInputLuminanceNoiseReductionAmount:(id)arg1;	// IMP=0x0000000000164a84
- (void)setInputEnableVendorLensCorrection:(id)arg1;	// IMP=0x00000000001649c8
- (void)setInputNoiseReductionAmount:(id)arg1;	// IMP=0x0000000000164950
- (void)setInputEnableNoiseTracking:(id)arg1;	// IMP=0x00000000001648be
- (void)setInputEnableSharpening:(id)arg1;	// IMP=0x000000000016482c
- (void)setInputDraftMode:(id)arg1;	// IMP=0x000000000016478d
- (void)setInputScaleFactor:(id)arg1;	// IMP=0x00000000001646bb
- (void)setInputNeutralLocation:(id)arg1;	// IMP=0x000000000016464c
- (id)inputNeutralLocation;	// IMP=0x0000000000164633
- (id)defaultImageOrientation;	// IMP=0x000000000016457f
- (void)setInputImage:(id)arg1;	// IMP=0x0000000000164579
- (id)inputImage;	// IMP=0x0000000000164101
- (id)RAWFiltersValueForKeyPath:(id)arg1;	// IMP=0x0000000000163e79
- (void)getWhitePointVectorsR:(id *)arg1 g:(id *)arg2 b:(id *)arg3;	// IMP=0x0000000000167dc7
- (id)whitePointArray;	// IMP=0x0000000000167d47
- (id)whitePoint;	// IMP=0x0000000000167cd9
- (void)setInputRequestedSushiMode:(id)arg1;	// IMP=0x0000000000167c4b
- (void)setInputNeutralChromaticityY:(id)arg1;	// IMP=0x0000000000167aea
- (id)inputNeutralChromaticityY;	// IMP=0x0000000000167aba
- (id)defaultNeutralChromaticityY;	// IMP=0x0000000000167a47
- (void)setInputNeutralChromaticityX:(id)arg1;	// IMP=0x00000000001678e6
- (id)inputNeutralChromaticityX;	// IMP=0x00000000001678b6
- (id)defaultNeutralChromaticityX;	// IMP=0x0000000000167843
- (void)setInputNeutralTint:(id)arg1;	// IMP=0x00000000001676e2
- (id)defaultNeutralTint;	// IMP=0x00000000001675fd
- (id)inputNeutralTint;	// IMP=0x00000000001675cd
- (void)setInputNeutralTemperature:(id)arg1;	// IMP=0x000000000016746c
- (id)inputNeutralTemperature;	// IMP=0x000000000016743c
- (id)defaultNeutralTemperature;	// IMP=0x0000000000167357
- (void)updateChomaticityXAndY;	// IMP=0x00000000001672ac
- (void)updateTemperatureAndTint;	// IMP=0x0000000000167188

@end

