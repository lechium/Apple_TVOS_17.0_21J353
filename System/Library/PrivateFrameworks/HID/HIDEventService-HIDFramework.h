//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IOKit/HIDEventService.h>

@interface HIDEventService (HIDFramework)
@property(readonly) unsigned long long serviceID;
- (id)eventMatching:(id)arg1;	// IMP=0x00300000000015ab
- (_Bool)conformsToUsagePage:(long long)arg1 usage:(long long)arg2;	// IMP=0x0030000000001597
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x0030000000001584
- (id)propertyForKey:(id)arg1;	// IMP=0x003000000000156f
- (void)dispatchEvent:(id)arg1;	// IMP=0x0030000000001607
@end

