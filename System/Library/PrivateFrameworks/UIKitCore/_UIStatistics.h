//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatistics : NSObject
{
    NSString *_key;	// 8 = 0x8
    double _sampleValue;	// 16 = 0x10
    NSMutableSet *_children;	// 24 = 0x18
    double _sampleRate;	// 32 = 0x20
}

+ (unsigned long long)currentTime;	// IMP=0x006000000126a4d3
+ (id)_sharedStatisticWithDomain:(id)arg1 statisticsClass:(Class)arg2 identifierReporting:(long long)arg3;	// IMP=0x006000000126cab7
+ (id)coverSheetButtonMaximumForceWithActivation:(_Bool)arg1 category:(id)arg2;	// IMP=0x006000000126ca30
+ (id)coverSheetButtonFirstActivationDurationWithCategory:(id)arg1;	// IMP=0x006000000126c9b6
+ (id)coverSheetButtonInteractionDurationWithCategory:(id)arg1;	// IMP=0x006000000126c93c
+ (id)coverSheetButtonInteractionCountWithActivation:(_Bool)arg1 category:(id)arg2;	// IMP=0x006000000126c8b5
+ (id)recentsInputViewNewEntryCount;	// IMP=0x006000000126c842
+ (id)recentsInputViewItemSelectedCount;	// IMP=0x006000000126c7cf
+ (id)recentsInputViewNumberOfItems;	// IMP=0x006000000126c75c
+ (id)recentsInputViewPresentationCount;	// IMP=0x006000000126c6e9
+ (id)feedbackGeneratorPlayCountWithSuffix:(id)arg1;	// IMP=0x006000000126c678
+ (id)feedbackGeneratorPreparationCountWithSuffix:(id)arg1;	// IMP=0x006000000126c607
+ (id)feedbackGeneratorActivationTimeOutCountWithSuffix:(id)arg1;	// IMP=0x006000000126c596
+ (id)feedbackGeneratorActivationDurationWithSuffix:(id)arg1;	// IMP=0x006000000126c525
+ (id)feedbackGeneratorActivationCountWithSuffix:(id)arg1;	// IMP=0x006000000126c4b4
+ (id)feedbackEngineOutOfChannelsCountWithSuffix:(id)arg1;	// IMP=0x006000000126c443
+ (id)feedbackEnginePrewarmDurationWithSuffix:(id)arg1;	// IMP=0x006000000126c3d2
+ (id)feedbackEnginePrewarmCountWithSuffix:(id)arg1;	// IMP=0x006000000126c361
+ (id)feedbackEngineActivationDurationWithSuffix:(id)arg1;	// IMP=0x006000000126c2f0
+ (id)feedbackEngineActivationCountWithSuffix:(id)arg1;	// IMP=0x006000000126c27f
+ (id)scrollBounceCount;	// IMP=0x006000000126c209
+ (id)zoomGestureCount;	// IMP=0x006000000126c193
+ (id)pinchGestureCount;	// IMP=0x006000000126c11d
+ (id)alertButtonTapCount;	// IMP=0x006000000126c102
+ (id)controlInteractionDurationDistributionWithCategory:(id)arg1 suffix:(id)arg2;	// IMP=0x006000000126c08f
+ (id)controlValueChangeEmittedCountWithCategory:(id)arg1 suffix:(id)arg2;	// IMP=0x006000000126c01c
+ (id)controlTapCountWithCategory:(id)arg1 suffix:(id)arg2;	// IMP=0x006000000126be86
+ (id)scrubberUsageTime;	// IMP=0x006000000126be18
+ (id)scrubberUsageCount;	// IMP=0x006000000126bdaa
+ (id)maxForce;	// IMP=0x006000000126bcb8
+ (id)previewInteractionPopForce;	// IMP=0x006000000126bbf0
+ (id)previewInteractionPeekForce;	// IMP=0x006000000126bb28
+ (id)previewInteractionAlertPresentationCount;	// IMP=0x006000000126ba5d
+ (id)previewInteractionTapCount;	// IMP=0x006000000126b9cc
+ (id)previewInteractionPopCount;	// IMP=0x006000000126b901
+ (id)previewInteractionPeekDuration;	// IMP=0x006000000126b836
+ (id)previewInteractionPeekCount;	// IMP=0x006000000126b76b
- (void).cxx_destruct;	// IMP=0x000000000126b44e
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)description;	// IMP=0x000000000126b38a
- (void)_incrementValueBy:(long long)arg1;	// IMP=0x000000000126b1ff
- (void)_setValue:(long long)arg1;	// IMP=0x000000000126b074
- (void)_resetValue;	// IMP=0x000000000126af14
- (void)_recordDistributionTime:(unsigned long long)arg1;	// IMP=0x000000000126ad89
- (void)_recordDistributionValue:(double)arg1;	// IMP=0x000000000126abfc
- (void)_resetDistributionToValue:(double)arg1;	// IMP=0x000000000126aa3e
- (void)_resetDistribution;	// IMP=0x000000000126a8de
- (void)randomizeSampleValue;	// IMP=0x000000000126a8b0
- (_Bool)_shouldSample;	// IMP=0x000000000126a85d
- (void)_removeChildStatistic:(id)arg1;	// IMP=0x000000000126a7ff
- (void)_addChildStatistic:(id)arg1;	// IMP=0x000000000126a7aa
- (id)initWithDomain:(id)arg1;	// IMP=0x000000000126a77b
- (id)_key;	// IMP=0x000000000126a76d
- (id)initWithDomain:(id)arg1 identifierReporting:(long long)arg2;	// IMP=0x000000000126a588
- (id)init;	// IMP=0x000000000126a4db

@end

