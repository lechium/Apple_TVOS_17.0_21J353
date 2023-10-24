//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDActiveXPCConnectionLogEvent : HMMLogEvent
{
    _Bool _activated;	// 8 = 0x8
    _Bool _added;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
}

+ (id)initWithXPCConnectionRemoved:(id)arg1;	// IMP=0x00600000005b1a59
+ (id)initWithNewXPCConnectionAdded:(id)arg1;	// IMP=0x00600000005b1a07
- (void).cxx_destruct;	// IMP=0x00000000005b19f4
@property(readonly) _Bool added; // @synthesize added=_added;
@property(readonly, getter=isActivated) _Bool activated; // @synthesize activated=_activated;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithXPCConnection:(id)arg1 added:(_Bool)arg2;	// IMP=0x00000000005b190c

@end

