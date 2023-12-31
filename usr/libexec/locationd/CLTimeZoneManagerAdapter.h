//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLTimeZoneManagerAdapter : CLIntersiloService
{
    void *_manager;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x00200000004da8cc
+ (id)getSilo;	// IMP=0x00100000004da6e6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000004da6cd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000004da670
@property(nonatomic) void *manager; // @synthesize manager=_manager;
- (void)endService;	// IMP=0x00100000004da7de
- (void)beginService;	// IMP=0x00100000004da77f
- (id)init;	// IMP=0x00100000004da742

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

