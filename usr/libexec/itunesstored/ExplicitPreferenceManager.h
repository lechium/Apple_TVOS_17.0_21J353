//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ExplicitPreferenceManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x004000000017208d
- (_Bool)explicitPreferencesDisabled:(char *)arg1;	// IMP=0x004000000017206c
- (void)setExplicitPreferencesDisabled:(_Bool)arg1;	// IMP=0x001000000017203a
- (_Bool)lastChangeInducingBagExplicitOff:(char *)arg1;	// IMP=0x0010000000172019
- (void)setLastChangeInducingBagExplicitOff:(_Bool)arg1;	// IMP=0x0010000000171fe7
- (id)init;	// IMP=0x0010000000171343

@end

