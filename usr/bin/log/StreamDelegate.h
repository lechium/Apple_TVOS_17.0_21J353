//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface StreamDelegate : NSObject
{
    unsigned char _style;	// 8 = 0x8
    long long _timeout;	// 16 = 0x10
    struct _log_flags_s _flags;	// 24 = 0x18
    struct _log_totals_s _totals;	// 72 = 0x48
}

@property(nonatomic) struct _log_flags_s flags; // @synthesize flags=_flags;
@property(nonatomic) struct _log_totals_s totals; // @synthesize totals=_totals;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
- (void);	// IMP=0x001000000001b396
@property(nonatomic) unsigned char style; // @synthesize style=_style;
- (void)streamDidStop:(id)arg1;	// IMP=0x001000000001b388
- (void)streamDidFail:(id)arg1 error:(id)arg2;	// IMP=0x001000000001b303
- (void)streamDidStart:(id)arg1;	// IMP=0x001000000001b20c
- (_Bool)activityStream:(id)arg1 results:(id)arg2;	// IMP=0x001000000001b076

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

