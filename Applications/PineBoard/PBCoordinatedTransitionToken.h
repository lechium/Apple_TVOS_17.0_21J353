//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSSet, PBCoordinatedTransitionFragmentDescriptor;

@interface PBCoordinatedTransitionToken : NSObject
{
    MISSING_TYPE *coordinatedFragmentTypes;	// 8 = 0x8
    MISSING_TYPE *respondingFragmentDescriptor;	// 16 = 0x10
    MISSING_TYPE *transitionHints;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x004000000025c5e0
- (void)addTransitionHint:(id)arg1;	// IMP=0x001000000025c570
- (id)init;	// IMP=0x001000000025c440
@property(nonatomic, copy) NSDictionary *transitionHints;
@property(nonatomic, retain) PBCoordinatedTransitionFragmentDescriptor *respondingFragmentDescriptor; // @synthesize respondingFragmentDescriptor;
@property(nonatomic, copy) NSSet *coordinatedFragmentTypes;

@end
