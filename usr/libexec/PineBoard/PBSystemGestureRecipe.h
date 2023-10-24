//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol PBSystemGestureFailurePolicy, PBSystemGestureRecognitionPolicy, PBSystemGestureSimultaneousRecognitionPolicy;

@interface PBSystemGestureRecipe : NSObject
{
    NSSet *_systemGestureRecognizerDescriptors;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    long long _level;	// 24 = 0x18
    id <PBSystemGestureRecognitionPolicy> _recognitionPolicy;	// 32 = 0x20
    id <PBSystemGestureSimultaneousRecognitionPolicy> _simultaneousRecognitionPolicy;	// 40 = 0x28
    id <PBSystemGestureFailurePolicy> _failurePolicy;	// 48 = 0x30
    NSSet *_deferringTargetSystemGestureTypes;	// 56 = 0x38
}

+ (id)recipeForType:(unsigned long long)arg1;	// IMP=0x0010000000093cec
- (void).cxx_destruct;	// IMP=0x00200000001b8c99
@property(readonly, nonatomic) NSSet *deferringTargetSystemGestureTypes; // @synthesize deferringTargetSystemGestureTypes=_deferringTargetSystemGestureTypes;
@property(readonly, nonatomic) id <PBSystemGestureFailurePolicy> failurePolicy; // @synthesize failurePolicy=_failurePolicy;
@property(readonly, nonatomic) id <PBSystemGestureSimultaneousRecognitionPolicy> simultaneousRecognitionPolicy; // @synthesize simultaneousRecognitionPolicy=_simultaneousRecognitionPolicy;
@property(readonly, nonatomic) id <PBSystemGestureRecognitionPolicy> recognitionPolicy; // @synthesize recognitionPolicy=_recognitionPolicy;
@property(readonly, nonatomic) long long level; // @synthesize level=_level;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSSet *systemGestureRecognizerDescriptors; // @synthesize systemGestureRecognizerDescriptors=_systemGestureRecognizerDescriptors;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001b8aac
@property(readonly) unsigned long long hash;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00100000001b882b
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00100000001b87da
- (id)succinctDescriptionBuilder;	// IMP=0x00100000001b8765
- (id)succinctDescription;	// IMP=0x00100000001b8714
@property(readonly, nonatomic, getter=isIndirect) _Bool indirect;
- (id)initWithType:(unsigned long long)arg1 parameters:(id)arg2;	// IMP=0x00100000001b845d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
