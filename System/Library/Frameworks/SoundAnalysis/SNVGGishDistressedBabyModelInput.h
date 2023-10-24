//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGishDistressedBabyModelInput : NSObject
{
    MLMultiArray *_input1;	// 8 = 0x8
    MLMultiArray *_stateIn;	// 16 = 0x10
    MLMultiArray *_detectedHistoryIn;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010360d
@property(retain, nonatomic) MLMultiArray *detectedHistoryIn; // @synthesize detectedHistoryIn=_detectedHistoryIn;
@property(retain, nonatomic) MLMultiArray *stateIn; // @synthesize stateIn=_stateIn;
@property(retain, nonatomic) MLMultiArray *input1; // @synthesize input1=_input1;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000103464
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput1:(id)arg1 stateIn:(id)arg2 detectedHistoryIn:(id)arg3;	// IMP=0x000000000010338c
- (id)initWithInput1:(id)arg1;	// IMP=0x0000000000103375

@end

