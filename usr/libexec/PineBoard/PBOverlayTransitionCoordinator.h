//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface PBOverlayTransitionCoordinator : NSObject
{
    MISSING_TYPE *activePersistentTokens;	// 8 = 0x8
}

+ (_Bool)isCoordinatedTransitionsEnabled;	// IMP=0x002000000023d360
+ (id)sharedInstance;	// IMP=0x001000000023d330
- (void).cxx_destruct;	// IMP=0x004000000023e4c0
- (void)registerTransition:(id)arg1;	// IMP=0x001000000023dfe0
- (id)init;	// IMP=0x000000000023d400
@property(nonatomic, retain) id activePersistentTokens; // @synthesize activePersistentTokens;

@end

